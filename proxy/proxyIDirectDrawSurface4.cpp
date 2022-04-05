#include "proxyIDirectDrawSurface4.h"

proxyIDirectDrawSurface4::proxyIDirectDrawSurface4(IDirectDrawSurface4** ppOrigInterface)
{
  this->self_ = *ppOrigInterface;
}

proxyIDirectDrawSurface4::~proxyIDirectDrawSurface4()
{
}

HRESULT __stdcall proxyIDirectDrawSurface4::AddAttachedSurface(LPDIRECTDRAWSURFACE4 ARG0)
{
  return self_->AddAttachedSurface(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface4::AddOverlayDirtyRect(LPRECT ARG0)
{
  return self_->AddOverlayDirtyRect(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface4::Blt(LPRECT ARG0, LPDIRECTDRAWSURFACE4 ARG1, LPRECT ARG2, DWORD ARG3, LPDDBLTFX ARG4)
{
  return self_->Blt(ARG0, ARG1, ARG2, ARG3, ARG4);
}

HRESULT __stdcall proxyIDirectDrawSurface4::BltBatch(LPDDBLTBATCH ARG0, DWORD ARG1, DWORD ARG2)
{
  return self_->BltBatch(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirectDrawSurface4::BltFast(DWORD ARG0, DWORD ARG1, LPDIRECTDRAWSURFACE4 ARG2, LPRECT ARG3, DWORD ARG4)
{
  return self_->BltFast(ARG0, ARG1, ARG2, ARG3, ARG4);
}

HRESULT __stdcall proxyIDirectDrawSurface4::DeleteAttachedSurface(DWORD ARG0, LPDIRECTDRAWSURFACE4 ARG1)
{
  return self_->DeleteAttachedSurface(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface4::EnumAttachedSurfaces(LPVOID ARG0, LPDDENUMSURFACESCALLBACK2 ARG1)
{
  return self_->EnumAttachedSurfaces(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface4::EnumOverlayZOrders(DWORD ARG0, LPVOID ARG1, LPDDENUMSURFACESCALLBACK2 ARG2)
{
  return self_->EnumOverlayZOrders(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirectDrawSurface4::Flip(LPDIRECTDRAWSURFACE4 ARG0, DWORD ARG1)
{
  return self_->Flip(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface4::GetAttachedSurface(LPDDSCAPS2 ARG0, LPDIRECTDRAWSURFACE4 * ARG1)
{
  return self_->GetAttachedSurface(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface4::GetBltStatus(DWORD ARG0)
{
  return self_->GetBltStatus(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface4::GetCaps(LPDDSCAPS2 ARG0)
{
  return self_->GetCaps(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface4::GetClipper(LPDIRECTDRAWCLIPPER* ARG0)
{
  return self_->GetClipper(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface4::GetColorKey(DWORD ARG0, LPDDCOLORKEY ARG1)
{
  return self_->GetColorKey(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface4::GetDC(HDC * ARG0)
{
  return self_->GetDC(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface4::GetFlipStatus(DWORD ARG0)
{
  return self_->GetFlipStatus(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface4::GetOverlayPosition(LPLONG ARG0, LPLONG ARG1)
{
  return self_->GetOverlayPosition(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface4::GetPalette(LPDIRECTDRAWPALETTE* ARG0)
{
  return self_->GetPalette(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface4::GetPixelFormat(LPDDPIXELFORMAT ARG0)
{
  return self_->GetPixelFormat(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface4::GetSurfaceDesc(LPDDSURFACEDESC2 ARG0)
{
  return self_->GetSurfaceDesc(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface4::Initialize(LPDIRECTDRAW ARG0, LPDDSURFACEDESC2 ARG1)
{
  return self_->Initialize(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface4::IsLost(void)
{
  return self_->IsLost();
}

HRESULT __stdcall proxyIDirectDrawSurface4::Lock(LPRECT ARG0, LPDDSURFACEDESC2 ARG1, DWORD ARG2, HANDLE ARG3)
{
  return self_->Lock(ARG0, ARG1, ARG2, ARG3);
}

HRESULT __stdcall proxyIDirectDrawSurface4::ReleaseDC(HDC ARG0)
{
  return self_->ReleaseDC(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface4::Restore(void)
{
  return self_->Restore();
}

HRESULT __stdcall proxyIDirectDrawSurface4::SetClipper(LPDIRECTDRAWCLIPPER ARG0)
{
  return self_->SetClipper(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface4::SetColorKey(DWORD ARG0, LPDDCOLORKEY ARG1)
{
  return self_->SetColorKey(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface4::SetOverlayPosition(LONG ARG0, LONG ARG1)
{
  return self_->SetOverlayPosition(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface4::SetPalette(LPDIRECTDRAWPALETTE ARG0)
{
  return self_->SetPalette(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface4::Unlock(LPRECT ARG0)
{
  return self_->Unlock(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface4::UpdateOverlay(LPRECT ARG0, LPDIRECTDRAWSURFACE4 ARG1, LPRECT ARG2, DWORD ARG3, LPDDOVERLAYFX ARG4)
{
  return self_->UpdateOverlay(ARG0, ARG1, ARG2, ARG3, ARG4);
}

HRESULT __stdcall proxyIDirectDrawSurface4::UpdateOverlayDisplay(DWORD ARG0)
{
  return self_->UpdateOverlayDisplay(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface4::UpdateOverlayZOrder(DWORD ARG0, LPDIRECTDRAWSURFACE4 ARG1)
{
  return self_->UpdateOverlayZOrder(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface4::GetDDInterface(LPVOID * ARG0)
{
  return self_->GetDDInterface(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface4::PageLock(DWORD ARG0)
{
  return self_->PageLock(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface4::PageUnlock(DWORD ARG0)
{
  return self_->PageUnlock(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface4::SetSurfaceDesc(LPDDSURFACEDESC2 ARG0, DWORD ARG1)
{
  return self_->SetSurfaceDesc(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface4::SetPrivateData(REFGUID ARG0, LPVOID ARG1, DWORD ARG2, DWORD ARG3)
{
  return self_->SetPrivateData(ARG0, ARG1, ARG2, ARG3);
}

HRESULT __stdcall proxyIDirectDrawSurface4::GetPrivateData(REFGUID ARG0, LPVOID ARG1, LPDWORD ARG2)
{
  return self_->GetPrivateData(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirectDrawSurface4::FreePrivateData(REFGUID ARG0)
{
  return self_->FreePrivateData(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface4::GetUniquenessValue(LPDWORD ARG0)
{
  return self_->GetUniquenessValue(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface4::ChangeUniquenessValue(void)
{
  return self_->ChangeUniquenessValue();
}

