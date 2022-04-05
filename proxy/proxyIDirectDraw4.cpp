#include "proxyIDirectDraw4.h"

proxyIDirectDraw4::proxyIDirectDraw4(IDirectDraw4** ppOrigInterface)
{
  this->self_ = *ppOrigInterface;
}

proxyIDirectDraw4::~proxyIDirectDraw4()
{
}

HRESULT __stdcall proxyIDirectDraw4::Compact(void)
{
  return self_->Compact();
}

HRESULT __stdcall proxyIDirectDraw4::CreateClipper(DWORD ARG0, LPDIRECTDRAWCLIPPER* ARG1, IUnknown * ARG2)
{
  return self_->CreateClipper(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirectDraw4::CreatePalette(DWORD ARG0, LPPALETTEENTRY ARG1, LPDIRECTDRAWPALETTE* ARG2, IUnknown * ARG3)
{
  return self_->CreatePalette(ARG0, ARG1, ARG2, ARG3);
}

HRESULT __stdcall proxyIDirectDraw4::CreateSurface(LPDDSURFACEDESC2 ARG0, LPDIRECTDRAWSURFACE4 * ARG1, IUnknown * ARG2)
{
  return self_->CreateSurface(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirectDraw4::DuplicateSurface(LPDIRECTDRAWSURFACE4 ARG0, LPDIRECTDRAWSURFACE4 * ARG1)
{
  return self_->DuplicateSurface(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDraw4::EnumDisplayModes(DWORD ARG0, LPDDSURFACEDESC2 ARG1, LPVOID ARG2, LPDDENUMMODESCALLBACK2 ARG3)
{
  return self_->EnumDisplayModes(ARG0, ARG1, ARG2, ARG3);
}

HRESULT __stdcall proxyIDirectDraw4::EnumSurfaces(DWORD ARG0, LPDDSURFACEDESC2 ARG1, LPVOID ARG2, LPDDENUMSURFACESCALLBACK2 ARG3)
{
  return self_->EnumSurfaces(ARG0, ARG1, ARG2, ARG3);
}

HRESULT __stdcall proxyIDirectDraw4::FlipToGDISurface(void)
{
  return self_->FlipToGDISurface();
}

HRESULT __stdcall proxyIDirectDraw4::GetCaps(LPDDCAPS ARG0, LPDDCAPS ARG1)
{
  return self_->GetCaps(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDraw4::GetDisplayMode(LPDDSURFACEDESC2 ARG0)
{
  return self_->GetDisplayMode(ARG0);
}

HRESULT __stdcall proxyIDirectDraw4::GetFourCCCodes(LPDWORD ARG0, LPDWORD ARG1)
{
  return self_->GetFourCCCodes(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDraw4::GetGDISurface(LPDIRECTDRAWSURFACE4 * ARG0)
{
  return self_->GetGDISurface(ARG0);
}

HRESULT __stdcall proxyIDirectDraw4::GetMonitorFrequency(LPDWORD ARG0)
{
  return self_->GetMonitorFrequency(ARG0);
}

HRESULT __stdcall proxyIDirectDraw4::GetScanLine(LPDWORD ARG0)
{
  return self_->GetScanLine(ARG0);
}

HRESULT __stdcall proxyIDirectDraw4::GetVerticalBlankStatus(LPBOOL ARG0)
{
  return self_->GetVerticalBlankStatus(ARG0);
}

HRESULT __stdcall proxyIDirectDraw4::Initialize(GUID * ARG0)
{
  return self_->Initialize(ARG0);
}

HRESULT __stdcall proxyIDirectDraw4::RestoreDisplayMode(void)
{
  return self_->RestoreDisplayMode();
}

HRESULT __stdcall proxyIDirectDraw4::SetCooperativeLevel(HWND ARG0, DWORD ARG1)
{
  return self_->SetCooperativeLevel(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDraw4::SetDisplayMode(DWORD ARG0, DWORD ARG1, DWORD ARG2, DWORD ARG3, DWORD ARG4)
{
  return self_->SetDisplayMode(ARG0, ARG1, ARG2, ARG3, ARG4);
}

HRESULT __stdcall proxyIDirectDraw4::WaitForVerticalBlank(DWORD ARG0, HANDLE ARG1)
{
  return self_->WaitForVerticalBlank(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDraw4::GetAvailableVidMem(LPDDSCAPS2 ARG0, LPDWORD ARG1, LPDWORD ARG2)
{
  return self_->GetAvailableVidMem(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirectDraw4::RestoreAllSurfaces(void)
{
  return self_->RestoreAllSurfaces();
}

HRESULT __stdcall proxyIDirectDraw4::TestCooperativeLevel(void)
{
  return self_->TestCooperativeLevel();
}

HRESULT __stdcall proxyIDirectDraw4::GetDeviceIdentifier(LPDDDEVICEIDENTIFIER ARG0, DWORD ARG1)
{
  return self_->GetDeviceIdentifier(ARG0, ARG1);
}

