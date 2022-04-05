#pragma once
#include <ddraw.h>

interface proxyIDirectDrawSurface3 : public IDirectDrawSurface3
{
public:
  proxyIDirectDrawSurface3(IDirectDrawSurface3** ppOrigInterface);
  virtual ~proxyIDirectDrawSurface3();

  virtual HRESULT __stdcall AddAttachedSurface(LPDIRECTDRAWSURFACE3 ARG0);
  virtual HRESULT __stdcall AddOverlayDirtyRect(LPRECT ARG0);
  virtual HRESULT __stdcall Blt(LPRECT ARG0, LPDIRECTDRAWSURFACE3 ARG1, LPRECT ARG2, DWORD ARG3, LPDDBLTFX ARG4);
  virtual HRESULT __stdcall BltBatch(LPDDBLTBATCH ARG0, DWORD ARG1, DWORD ARG2);
  virtual HRESULT __stdcall BltFast(DWORD ARG0, DWORD ARG1, LPDIRECTDRAWSURFACE3 ARG2, LPRECT ARG3, DWORD ARG4);
  virtual HRESULT __stdcall DeleteAttachedSurface(DWORD ARG0, LPDIRECTDRAWSURFACE3 ARG1);
  virtual HRESULT __stdcall EnumAttachedSurfaces(LPVOID ARG0, LPDDENUMSURFACESCALLBACK ARG1);
  virtual HRESULT __stdcall EnumOverlayZOrders(DWORD ARG0, LPVOID ARG1, LPDDENUMSURFACESCALLBACK ARG2);
  virtual HRESULT __stdcall Flip(LPDIRECTDRAWSURFACE3 ARG0, DWORD ARG1);
  virtual HRESULT __stdcall GetAttachedSurface(LPDDSCAPS ARG0, LPDIRECTDRAWSURFACE3 * ARG1);
  virtual HRESULT __stdcall GetBltStatus(DWORD ARG0);
  virtual HRESULT __stdcall GetCaps(LPDDSCAPS ARG0);
  virtual HRESULT __stdcall GetClipper(LPDIRECTDRAWCLIPPER* ARG0);
  virtual HRESULT __stdcall GetColorKey(DWORD ARG0, LPDDCOLORKEY ARG1);
  virtual HRESULT __stdcall GetDC(HDC * ARG0);
  virtual HRESULT __stdcall GetFlipStatus(DWORD ARG0);
  virtual HRESULT __stdcall GetOverlayPosition(LPLONG ARG0, LPLONG ARG1);
  virtual HRESULT __stdcall GetPalette(LPDIRECTDRAWPALETTE* ARG0);
  virtual HRESULT __stdcall GetPixelFormat(LPDDPIXELFORMAT ARG0);
  virtual HRESULT __stdcall GetSurfaceDesc(LPDDSURFACEDESC ARG0);
  virtual HRESULT __stdcall Initialize(LPDIRECTDRAW ARG0, LPDDSURFACEDESC ARG1);
  virtual HRESULT __stdcall IsLost(void);
  virtual HRESULT __stdcall Lock(LPRECT ARG0, LPDDSURFACEDESC ARG1, DWORD ARG2, HANDLE ARG3);
  virtual HRESULT __stdcall ReleaseDC(HDC ARG0);
  virtual HRESULT __stdcall Restore(void);
  virtual HRESULT __stdcall SetClipper(LPDIRECTDRAWCLIPPER ARG0);
  virtual HRESULT __stdcall SetColorKey(DWORD ARG0, LPDDCOLORKEY ARG1);
  virtual HRESULT __stdcall SetOverlayPosition(LONG ARG0, LONG ARG1);
  virtual HRESULT __stdcall SetPalette(LPDIRECTDRAWPALETTE ARG0);
  virtual HRESULT __stdcall Unlock(LPVOID ARG0);
  virtual HRESULT __stdcall UpdateOverlay(LPRECT ARG0, LPDIRECTDRAWSURFACE3 ARG1, LPRECT ARG2, DWORD ARG3, LPDDOVERLAYFX ARG4);
  virtual HRESULT __stdcall UpdateOverlayDisplay(DWORD ARG0);
  virtual HRESULT __stdcall UpdateOverlayZOrder(DWORD ARG0, LPDIRECTDRAWSURFACE3 ARG1);
  virtual HRESULT __stdcall GetDDInterface(LPVOID * ARG0);
  virtual HRESULT __stdcall PageLock(DWORD ARG0);
  virtual HRESULT __stdcall PageUnlock(DWORD ARG0);
  virtual HRESULT __stdcall SetSurfaceDesc(LPDDSURFACEDESC ARG0, DWORD ARG1);

private:
  IDirectDrawSurface3* self_;
};