#include "proxyIDirectDraw2.h"

proxyIDirectDraw2::proxyIDirectDraw2(IDirectDraw2** ppOrigInterface)
{
  this->self_ = *ppOrigInterface;
}

proxyIDirectDraw2::~proxyIDirectDraw2()
{
}

HRESULT __stdcall proxyIDirectDraw2::Compact(void)
{
  return self_->Compact();
}

HRESULT __stdcall proxyIDirectDraw2::CreateClipper(DWORD ARG0, LPDIRECTDRAWCLIPPER* ARG1, IUnknown * ARG2)
{
  return self_->CreateClipper(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirectDraw2::CreatePalette(DWORD ARG0, LPPALETTEENTRY ARG1, LPDIRECTDRAWPALETTE* ARG2, IUnknown * ARG3)
{
  return self_->CreatePalette(ARG0, ARG1, ARG2, ARG3);
}

HRESULT __stdcall proxyIDirectDraw2::CreateSurface(LPDDSURFACEDESC ARG0, LPDIRECTDRAWSURFACE * ARG1, IUnknown * ARG2)
{
  return self_->CreateSurface(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirectDraw2::DuplicateSurface(LPDIRECTDRAWSURFACE ARG0, LPDIRECTDRAWSURFACE * ARG1)
{
  return self_->DuplicateSurface(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDraw2::EnumDisplayModes(DWORD ARG0, LPDDSURFACEDESC ARG1, LPVOID ARG2, LPDDENUMMODESCALLBACK ARG3)
{
  return self_->EnumDisplayModes(ARG0, ARG1, ARG2, ARG3);
}

HRESULT __stdcall proxyIDirectDraw2::EnumSurfaces(DWORD ARG0, LPDDSURFACEDESC ARG1, LPVOID ARG2, LPDDENUMSURFACESCALLBACK ARG3)
{
  return self_->EnumSurfaces(ARG0, ARG1, ARG2, ARG3);
}

HRESULT __stdcall proxyIDirectDraw2::FlipToGDISurface(void)
{
  return self_->FlipToGDISurface();
}

HRESULT __stdcall proxyIDirectDraw2::GetCaps(LPDDCAPS ARG0, LPDDCAPS ARG1)
{
  return self_->GetCaps(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDraw2::GetDisplayMode(LPDDSURFACEDESC ARG0)
{
  return self_->GetDisplayMode(ARG0);
}

HRESULT __stdcall proxyIDirectDraw2::GetFourCCCodes(LPDWORD ARG0, LPDWORD ARG1)
{
  return self_->GetFourCCCodes(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDraw2::GetGDISurface(LPDIRECTDRAWSURFACE * ARG0)
{
  return self_->GetGDISurface(ARG0);
}

HRESULT __stdcall proxyIDirectDraw2::GetMonitorFrequency(LPDWORD ARG0)
{
  return self_->GetMonitorFrequency(ARG0);
}

HRESULT __stdcall proxyIDirectDraw2::GetScanLine(LPDWORD ARG0)
{
  return self_->GetScanLine(ARG0);
}

HRESULT __stdcall proxyIDirectDraw2::GetVerticalBlankStatus(LPBOOL ARG0)
{
  return self_->GetVerticalBlankStatus(ARG0);
}

HRESULT __stdcall proxyIDirectDraw2::Initialize(GUID * ARG0)
{
  return self_->Initialize(ARG0);
}

HRESULT __stdcall proxyIDirectDraw2::RestoreDisplayMode(void)
{
  return self_->RestoreDisplayMode();
}

HRESULT __stdcall proxyIDirectDraw2::SetCooperativeLevel(HWND ARG0, DWORD ARG1)
{
  return self_->SetCooperativeLevel(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDraw2::SetDisplayMode(DWORD ARG0, DWORD ARG1, DWORD ARG2, DWORD ARG3, DWORD ARG4)
{
  return self_->SetDisplayMode(ARG0, ARG1, ARG2, ARG3, ARG4);
}

HRESULT __stdcall proxyIDirectDraw2::WaitForVerticalBlank(DWORD ARG0, HANDLE ARG1)
{
  return self_->WaitForVerticalBlank(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDraw2::GetAvailableVidMem(LPDDSCAPS ARG0, LPDWORD ARG1, LPDWORD ARG2)
{
  return self_->GetAvailableVidMem(ARG0, ARG1, ARG2);
}

