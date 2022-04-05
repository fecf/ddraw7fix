#pragma once
#include <d3d.h>

interface proxyIDirect3D3 : public IDirect3D3
{
public:
  proxyIDirect3D3(IDirect3D3** ppOrigInterface);
  virtual ~proxyIDirect3D3();

  virtual HRESULT __stdcall QueryInterface(REFIID riid, LPVOID * ppvObj);
  virtual ULONG __stdcall AddRef(void);
  virtual ULONG __stdcall Release(void);
  virtual HRESULT __stdcall EnumDevices(LPD3DENUMDEVICESCALLBACK ARG0, LPVOID ARG1);
  virtual HRESULT __stdcall CreateLight(LPDIRECT3DLIGHT* ARG0, LPUNKNOWN ARG1);
  virtual HRESULT __stdcall CreateMaterial(LPDIRECT3DMATERIAL3* ARG0, LPUNKNOWN ARG1);
  virtual HRESULT __stdcall CreateViewport(LPDIRECT3DVIEWPORT3* ARG0, LPUNKNOWN ARG1);
  virtual HRESULT __stdcall FindDevice(LPD3DFINDDEVICESEARCH ARG0, LPD3DFINDDEVICERESULT ARG1);
  virtual HRESULT __stdcall CreateDevice(REFCLSID ARG0, LPDIRECTDRAWSURFACE4 ARG1, LPDIRECT3DDEVICE3* ARG2, LPUNKNOWN ARG3);
  virtual HRESULT __stdcall CreateVertexBuffer(LPD3DVERTEXBUFFERDESC ARG0, LPDIRECT3DVERTEXBUFFER* ARG1, DWORD ARG2, LPUNKNOWN ARG3);
  virtual HRESULT __stdcall EnumZBufferFormats(REFCLSID ARG0, LPD3DENUMPIXELFORMATSCALLBACK ARG1, LPVOID ARG2);
  virtual HRESULT __stdcall EvictManagedTextures(void);

private:
  IDirect3D3* self_;
};