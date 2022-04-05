#include "proxyIDirectDraw7.h"
#include "../loguru.hpp"

#define check(s) \
{ \
    HRESULT hr = ##s; \
    if (FAILED(hr)) { \
      LOG_F(ERROR, "FAILED at %s", #s); \
    } \
    return hr; \
} 

proxyIDirectDraw7::proxyIDirectDraw7(IDirectDraw7** ppOrigInterface)
{
  this->self_ = *ppOrigInterface;
}

proxyIDirectDraw7::~proxyIDirectDraw7()
{
}

HRESULT __stdcall proxyIDirectDraw7::Compact(void)
{
  check(self_->Compact());
}

HRESULT __stdcall proxyIDirectDraw7::CreateClipper(DWORD ARG0, LPDIRECTDRAWCLIPPER* ARG1, IUnknown * ARG2)
{
  check(self_->CreateClipper(ARG0, ARG1, ARG2));
}

HRESULT __stdcall proxyIDirectDraw7::CreatePalette(DWORD ARG0, LPPALETTEENTRY ARG1, LPDIRECTDRAWPALETTE* ARG2, IUnknown * ARG3)
{
  check(self_->CreatePalette(ARG0, ARG1, ARG2, ARG3));
}

HRESULT __stdcall proxyIDirectDraw7::CreateSurface(LPDDSURFACEDESC2 ARG0, LPDIRECTDRAWSURFACE7 * ARG1, IUnknown * ARG2)
{
  check(self_->CreateSurface(ARG0, ARG1, ARG2));
}

HRESULT __stdcall proxyIDirectDraw7::DuplicateSurface(LPDIRECTDRAWSURFACE7 ARG0, LPDIRECTDRAWSURFACE7 * ARG1)
{
  check(self_->DuplicateSurface(ARG0, ARG1));
}

HRESULT __stdcall proxyIDirectDraw7::EnumDisplayModes(DWORD ARG0, LPDDSURFACEDESC2 ARG1, LPVOID ARG2, LPDDENUMMODESCALLBACK2 ARG3)
{
  check(self_->EnumDisplayModes(ARG0, ARG1, ARG2, ARG3));
}

HRESULT __stdcall proxyIDirectDraw7::EnumSurfaces(DWORD ARG0, LPDDSURFACEDESC2 ARG1, LPVOID ARG2, LPDDENUMSURFACESCALLBACK7 ARG3)
{
  check(self_->EnumSurfaces(ARG0, ARG1, ARG2, ARG3));
}

HRESULT __stdcall proxyIDirectDraw7::FlipToGDISurface(void)
{
  check(self_->FlipToGDISurface());
}

HRESULT __stdcall proxyIDirectDraw7::GetCaps(LPDDCAPS ARG0, LPDDCAPS ARG1)
{
  check(self_->GetCaps(ARG0, ARG1));
}

HRESULT __stdcall proxyIDirectDraw7::GetDisplayMode(LPDDSURFACEDESC2 ARG0)
{
  check(self_->GetDisplayMode(ARG0));
}

HRESULT __stdcall proxyIDirectDraw7::GetFourCCCodes(LPDWORD ARG0, LPDWORD ARG1)
{
  check(self_->GetFourCCCodes(ARG0, ARG1));
}

HRESULT __stdcall proxyIDirectDraw7::GetGDISurface(LPDIRECTDRAWSURFACE7 * ARG0)
{
  check(self_->GetGDISurface(ARG0));
}

HRESULT __stdcall proxyIDirectDraw7::GetMonitorFrequency(LPDWORD ARG0)
{
  check(self_->GetMonitorFrequency(ARG0));
}

HRESULT __stdcall proxyIDirectDraw7::GetScanLine(LPDWORD ARG0)
{
  check(self_->GetScanLine(ARG0));
}

HRESULT __stdcall proxyIDirectDraw7::GetVerticalBlankStatus(LPBOOL ARG0)
{
  check(self_->GetVerticalBlankStatus(ARG0));
}

HRESULT __stdcall proxyIDirectDraw7::Initialize(GUID * ARG0)
{
  check(self_->Initialize(ARG0));
}

HRESULT __stdcall proxyIDirectDraw7::RestoreDisplayMode(void)
{
  check(self_->RestoreDisplayMode());
}

HRESULT __stdcall proxyIDirectDraw7::SetCooperativeLevel(HWND ARG0, DWORD ARG1)
{
  check(self_->SetCooperativeLevel(ARG0, ARG1));
}

HRESULT __stdcall proxyIDirectDraw7::SetDisplayMode(DWORD ARG0, DWORD ARG1, DWORD ARG2, DWORD ARG3, DWORD ARG4)
{
  check(self_->SetDisplayMode(ARG0, ARG1, ARG2, ARG3, ARG4));
}

HRESULT __stdcall proxyIDirectDraw7::WaitForVerticalBlank(DWORD ARG0, HANDLE ARG1)
{
  check(self_->WaitForVerticalBlank(ARG0, ARG1));
}

HRESULT __stdcall proxyIDirectDraw7::GetAvailableVidMem(LPDDSCAPS2 ARG0, LPDWORD ARG1, LPDWORD ARG2)
{
  check(self_->GetAvailableVidMem(ARG0, ARG1, ARG2));
}

HRESULT __stdcall proxyIDirectDraw7::RestoreAllSurfaces(void)
{
  check(self_->RestoreAllSurfaces());
}

HRESULT __stdcall proxyIDirectDraw7::TestCooperativeLevel(void)
{
  check(self_->TestCooperativeLevel());
}

HRESULT __stdcall proxyIDirectDraw7::GetDeviceIdentifier(LPDDDEVICEIDENTIFIER2 ARG0, DWORD ARG1)
{
  check(self_->GetDeviceIdentifier(ARG0, ARG1));
}

HRESULT __stdcall proxyIDirectDraw7::StartModeTest(LPSIZE ARG0, DWORD ARG1, DWORD ARG2)
{
  check(self_->StartModeTest(ARG0, ARG1, ARG2));
}

HRESULT __stdcall proxyIDirectDraw7::EvaluateMode(DWORD ARG0, DWORD * ARG1)
{
  check(self_->EvaluateMode(ARG0, ARG1));
}

