#pragma once
#include <ddraw.h>

interface proxyIDirectDraw7 : public IDirectDraw7
{
public:
  proxyIDirectDraw7(IDirectDraw7** ppOrigInterface);
  virtual ~proxyIDirectDraw7();

  virtual HRESULT __stdcall Compact(void);
  virtual HRESULT __stdcall CreateClipper(DWORD ARG0, LPDIRECTDRAWCLIPPER* ARG1, IUnknown * ARG2);
  virtual HRESULT __stdcall CreatePalette(DWORD ARG0, LPPALETTEENTRY ARG1, LPDIRECTDRAWPALETTE* ARG2, IUnknown * ARG3);
  virtual HRESULT __stdcall CreateSurface(LPDDSURFACEDESC2 ARG0, LPDIRECTDRAWSURFACE7 * ARG1, IUnknown * ARG2);
  virtual HRESULT __stdcall DuplicateSurface(LPDIRECTDRAWSURFACE7 ARG0, LPDIRECTDRAWSURFACE7 * ARG1);
  virtual HRESULT __stdcall EnumDisplayModes(DWORD ARG0, LPDDSURFACEDESC2 ARG1, LPVOID ARG2, LPDDENUMMODESCALLBACK2 ARG3);
  virtual HRESULT __stdcall EnumSurfaces(DWORD ARG0, LPDDSURFACEDESC2 ARG1, LPVOID ARG2, LPDDENUMSURFACESCALLBACK7 ARG3);
  virtual HRESULT __stdcall FlipToGDISurface(void);
  virtual HRESULT __stdcall GetCaps(LPDDCAPS ARG0, LPDDCAPS ARG1);
  virtual HRESULT __stdcall GetDisplayMode(LPDDSURFACEDESC2 ARG0);
  virtual HRESULT __stdcall GetFourCCCodes(LPDWORD ARG0, LPDWORD ARG1);
  virtual HRESULT __stdcall GetGDISurface(LPDIRECTDRAWSURFACE7 * ARG0);
  virtual HRESULT __stdcall GetMonitorFrequency(LPDWORD ARG0);
  virtual HRESULT __stdcall GetScanLine(LPDWORD ARG0);
  virtual HRESULT __stdcall GetVerticalBlankStatus(LPBOOL ARG0);
  virtual HRESULT __stdcall Initialize(GUID * ARG0);
  virtual HRESULT __stdcall RestoreDisplayMode(void);
  virtual HRESULT __stdcall SetCooperativeLevel(HWND ARG0, DWORD ARG1);
  virtual HRESULT __stdcall SetDisplayMode(DWORD ARG0, DWORD ARG1, DWORD ARG2, DWORD ARG3, DWORD ARG4);
  virtual HRESULT __stdcall WaitForVerticalBlank(DWORD ARG0, HANDLE ARG1);
  virtual HRESULT __stdcall GetAvailableVidMem(LPDDSCAPS2 ARG0, LPDWORD ARG1, LPDWORD ARG2);
  virtual HRESULT __stdcall RestoreAllSurfaces(void);
  virtual HRESULT __stdcall TestCooperativeLevel(void);
  virtual HRESULT __stdcall GetDeviceIdentifier(LPDDDEVICEIDENTIFIER2 ARG0, DWORD ARG1);
  virtual HRESULT __stdcall StartModeTest(LPSIZE ARG0, DWORD ARG1, DWORD ARG2);
  virtual HRESULT __stdcall EvaluateMode(DWORD ARG0, DWORD * ARG1);

  IDirectDraw7* self_;
};