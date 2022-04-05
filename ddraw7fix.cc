#include <string>
#include <map>
#include <vector>
#include <tuple>

#include <Shlwapi.h>

#include "detours/detours.h"
#include "proxy/proxyIDirectDraw7.h"
#include "proxy/proxyIDirect3D7.h"
#include "proxy/proxyIDirect3DDevice7.h"
#include "loguru.hpp"

#pragma comment(lib, "shlwapi.lib")
#pragma comment(lib, "dxguid.lib")

template<typename T> class FuncPtr {
 public:
  FuncPtr& operator=(void* ptr) {
    this->ptr = (T*)ptr;
    return *this;
  }
  operator T*() { return ptr; }
  T* ptr = nullptr;
};

struct {
  FuncPtr<decltype(::TextOutW)> pTextOutW;
  FuncPtr<decltype(::GetTextExtentPoint32W)> pGetTextExtentPoint32W;
  FuncPtr<decltype(::DirectDrawCreateEx)> pDirectDrawCreateEx;
} addr;

class CProxyIDirect3DDevice7 : public proxyIDirect3DDevice7 {
  using proxyIDirect3DDevice7::proxyIDirect3DDevice7;

  HRESULT __stdcall SetRenderState(D3DRENDERSTATETYPE ARG0, DWORD ARG1) override {
    return self_->SetRenderState(ARG0, ARG1);
  }

  HRESULT __stdcall SetTexture(DWORD ARG0, LPDIRECTDRAWSURFACE7 ARG1) override {
    return self_->SetTexture(ARG0, ARG1);
  }

  HRESULT __stdcall SetTextureStageState(DWORD ARG0,
                                         D3DTEXTURESTAGESTATETYPE ARG1,
                                         DWORD ARG2) override {
    return self_->SetTextureStageState(ARG0, ARG1, ARG2);
  }

  HRESULT __stdcall DrawPrimitive(D3DPRIMITIVETYPE ARG0, DWORD ARG1,
                                  LPVOID ARG2, DWORD ARG3,
                                  DWORD ARG4) override {
    HRESULT ret = self_->DrawPrimitive(ARG0, ARG1, ARG2, ARG3, ARG4);
    return ret;
  }

  HRESULT __stdcall EndScene(void) {
    HRESULT ret = self_->EndScene();
    return ret;
  }
};

class CProxyIDirect3D7 : public proxyIDirect3D7 {
  using proxyIDirect3D7::proxyIDirect3D7;

  HRESULT __stdcall CreateDevice(REFCLSID rclsid, LPDIRECTDRAWSURFACE7 lpDDS,
                                 LPDIRECT3DDEVICE7* lplpD3DDevice) override {
    HRESULT ret = self_->CreateDevice(rclsid, lpDDS, lplpD3DDevice);
    if (ret == D3D_OK) {
      CProxyIDirect3DDevice7* proxy =
          new CProxyIDirect3DDevice7((IDirect3DDevice7**)lplpD3DDevice);
      *lplpD3DDevice = (LPDIRECT3DDEVICE7)proxy;
      return D3D_OK;
    }
    return ret;
  }
};

class CProxyIDirectDraw7 : public proxyIDirectDraw7 {
  using proxyIDirectDraw7::proxyIDirectDraw7;

  virtual HRESULT __stdcall QueryInterface(REFIID riid,
                                           LPVOID* ppvObj) override {
    if (::IsEqualGUID(riid, IID_IDirect3D7)) {
      HRESULT ret = self_->QueryInterface(riid, ppvObj);
      if (ret == S_OK) {
        CProxyIDirect3D7* proxy = new CProxyIDirect3D7((IDirect3D7**)ppvObj);
        *ppvObj = proxy;
        return S_OK;
      } else {
        return ret;
      }
    }
    return self_->QueryInterface(riid, ppvObj);
  }
  virtual ULONG __stdcall AddRef(void) override { return self_->AddRef(); }
  virtual ULONG __stdcall Release(void) override {
    ULONG Count = self_->Release();
    delete this;
    return Count;
  }

  virtual HRESULT __stdcall GetSurfaceFromDC(
      HDC hdc, LPDIRECTDRAWSURFACE7* lpdds) override {
    return self_->GetSurfaceFromDC(hdc, lpdds);
  }
};

DWORD WINAPI mainThread(LPVOID) {
  loguru::add_file("ddraw7fix.log", loguru::FileMode::Truncate,
                   loguru::Verbosity_MAX);

  ::DetourTransactionBegin();
  ::DetourUpdateThread(::GetCurrentThread());
  addr.pGetTextExtentPoint32W = ::DetourFindFunction("gdi32.dll", "GetTextExtentPoint32W");
  addr.pDirectDrawCreateEx = ::DetourFindFunction("ddraw.dll", "DirectDrawCreateEx");

  LONG ret;
  static decltype(&::DirectDrawCreateEx) myDirectDrawCreateEx =
      [](GUID* lpGuid, LPVOID* lplpDD, const IID& iid, IUnknown* pUnkOuter) {
        // HRESULT ret = addr.pDirectDrawCreateEx((GUID*)DDCREATE_HARDWAREONLY, lplpDD, iid, pUnkOuter);
        HRESULT ret = addr.pDirectDrawCreateEx(lpGuid, lplpDD, iid, pUnkOuter);
        if (SUCCEEDED(ret)) {
          LOG_F(INFO, "success pDirectDrawCreateEx()", *lpGuid);
          CProxyIDirectDraw7* lpcDD;
          *lplpDD = lpcDD = new CProxyIDirectDraw7((IDirectDraw7**)lplpDD);
        } else {
          LOG_F(INFO, "failed pDirectDrawCreateEx()", *lpGuid);
        }
        return ret;
      };
  ret = ::DetourAttach((PVOID*)&addr.pDirectDrawCreateEx, myDirectDrawCreateEx);
  if (ret != NO_ERROR) {
    ::MessageBox(NULL, "falied ::DetourAttach(DirectDrawCreateEx).", NULL, 0);
    return 0;
  }

  static decltype(&::GetTextExtentPoint32W) myGetTextExtentPoint32W =
      [](HDC hdc, LPCWSTR str, int c, LPSIZE sizl) {
        static std::map<HDC, std::map<std::wstring, SIZE>> map;
        if (map.count(hdc)) {
          if (map.at(hdc).count(str)) {
            *sizl = map.at(hdc).at(str);
            return TRUE;
          }
        }
        BOOL ret = addr.pGetTextExtentPoint32W(hdc, str, c, sizl);
        map[hdc][str] = *sizl;
        return ret;
      };
  ret = ::DetourAttach((PVOID*)&addr.pGetTextExtentPoint32W,
                       myGetTextExtentPoint32W);
  if (ret != NO_ERROR) {
    ::MessageBox(NULL, "falied ::DetourAttach(GetTextExtentPoint32W).", NULL, 0);
    return 0;
  }

  ret = ::DetourTransactionCommit();
  if (ret != NO_ERROR) {
    ::MessageBox(NULL, "falied ::DetourTransactionCommit().", NULL, 0);
    return 0;
  }

  bool fullscreen = ::GetPrivateProfileIntA("ddraw7fix", "fullscreen", 0,
                                            "ddraw7fix.ini") > 0;
  char target[256];
  ::GetPrivateProfileStringA("ddraw7fix", "fullscreen_target", "", target, 256,
                             "ddraw7fix.ini");
  if (fullscreen && strlen(target)) {
    HWND hwnd_ = ::FindWindow(NULL, target);
    while ((hwnd_ = ::FindWindow(NULL, target)) == NULL) {
      ::Sleep(100);
    }
    ::SetForegroundWindow(hwnd_);
    ::SetActiveWindow(hwnd_);
    LONG_PTR style = ::GetWindowLongPtr(hwnd_, GWL_STYLE);
    style &= ~WS_CAPTION;
    style &= ~WS_THICKFRAME;
    style &= ~WS_SYSMENU;
    style &= ~WS_MAXIMIZEBOX;
    style &= ~WS_MINIMIZEBOX;
    LONG_PTR style_ex = ::GetWindowLongPtr(hwnd_, GWL_EXSTYLE);
    style &= ~WS_EX_DLGMODALFRAME;
    style &= ~WS_EX_WINDOWEDGE;
    style &= ~WS_EX_CLIENTEDGE;
    style &= ~WS_EX_LAYERED;
    style &= ~WS_EX_STATICEDGE;
    style &= ~WS_EX_TOOLWINDOW;
    style &= ~WS_EX_APPWINDOW;
    ::SetWindowLongPtr(hwnd_, GWL_STYLE, style);
    ::SetWindowLongPtr(hwnd_, GWL_EXSTYLE, style_ex);
    HMONITOR monitor = ::MonitorFromWindow(hwnd_, MONITOR_DEFAULTTONEAREST);
    MONITORINFO mi{sizeof(mi)};
    ::GetMonitorInfo(monitor, &mi);
    RECT rc = mi.rcMonitor;
    ::SetWindowPos(hwnd_, HWND_TOP, rc.left, rc.top, rc.right - rc.left,
                   rc.bottom - rc.top,
                   SWP_SHOWWINDOW | SWP_NOOWNERZORDER | SWP_NOSENDCHANGING);
  }

  while (true) {
    ::SleepEx(INFINITE, TRUE);
  }
  return 0; 
}

int __stdcall DllMain(HMODULE module, ULONG reason, PVOID reserved) {
  switch (reason) {
    case DLL_PROCESS_ATTACH:
      ::DisableThreadLibraryCalls(module);
      ::CreateThread(NULL, 0, mainThread, module, 0, 0);
      break;
    case DLL_PROCESS_DETACH:
      break;
  }
  return 1;
}
