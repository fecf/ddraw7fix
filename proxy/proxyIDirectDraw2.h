#pragma once
#include <ddraw.h>

interface proxyIDirectDraw2 : public IDirectDraw2
{
public:
  proxyIDirectDraw2(IDirectDraw2** ppOrigInterface);
  virtual ~proxyIDirectDraw2();

  virtual HRESULT __stdcall Compact(void);
  virtual HRESULT __stdcall CreateClipper(DWORD ARG0, LPDIRECTDRAWCLIPPER* ARG1, IUnknown * ARG2);
  virtual HRESULT __stdcall CreatePalette(DWORD ARG0, LPPALETTEENTRY ARG1, LPDIRECTDRAWPALETTE* ARG2, IUnknown * ARG3);
  virtual HRESULT __stdcall CreateSurface(LPDDSURFACEDESC ARG0, LPDIRECTDRAWSURFACE * ARG1, IUnknown * ARG2);
  virtual HRESULT __stdcall DuplicateSurface(LPDIRECTDRAWSURFACE ARG0, LPDIRECTDRAWSURFACE * ARG1);
  virtual HRESULT __stdcall EnumDisplayModes(DWORD ARG0, LPDDSURFACEDESC ARG1, LPVOID ARG2, LPDDENUMMODESCALLBACK ARG3);
  virtual HRESULT __stdcall EnumSurfaces(DWORD ARG0, LPDDSURFACEDESC ARG1, LPVOID ARG2, LPDDENUMSURFACESCALLBACK ARG3);
  virtual HRESULT __stdcall FlipToGDISurface(void);
  virtual HRESULT __stdcall GetCaps(LPDDCAPS ARG0, LPDDCAPS ARG1);
  virtual HRESULT __stdcall GetDisplayMode(LPDDSURFACEDESC ARG0);
  virtual HRESULT __stdcall GetFourCCCodes(LPDWORD ARG0, LPDWORD ARG1);
  virtual HRESULT __stdcall GetGDISurface(LPDIRECTDRAWSURFACE * ARG0);
  virtual HRESULT __stdcall GetMonitorFrequency(LPDWORD ARG0);
  virtual HRESULT __stdcall GetScanLine(LPDWORD ARG0);
  virtual HRESULT __stdcall GetVerticalBlankStatus(LPBOOL ARG0);
  virtual HRESULT __stdcall Initialize(GUID * ARG0);
  virtual HRESULT __stdcall RestoreDisplayMode(void);
  virtual HRESULT __stdcall SetCooperativeLevel(HWND ARG0, DWORD ARG1);
  virtual HRESULT __stdcall SetDisplayMode(DWORD ARG0, DWORD ARG1, DWORD ARG2, DWORD ARG3, DWORD ARG4);
  virtual HRESULT __stdcall WaitForVerticalBlank(DWORD ARG0, HANDLE ARG1);
  virtual HRESULT __stdcall GetAvailableVidMem(LPDDSCAPS ARG0, LPDWORD ARG1, LPDWORD ARG2);

private:
  IDirectDraw2* self_;
};