#include "proxyIDirectDrawSurface7.h"

proxyIDirectDrawSurface7::proxyIDirectDrawSurface7(IDirectDrawSurface7** ppOrigInterface)
{
  this->self_ = *ppOrigInterface;
}

proxyIDirectDrawSurface7::~proxyIDirectDrawSurface7()
{
}

HRESULT __stdcall proxyIDirectDrawSurface7::AddAttachedSurface(LPDIRECTDRAWSURFACE7 ARG0)
{
  return self_->AddAttachedSurface(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface7::AddOverlayDirtyRect(LPRECT ARG0)
{
  return self_->AddOverlayDirtyRect(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface7::Blt(LPRECT ARG0, LPDIRECTDRAWSURFACE7 ARG1, LPRECT ARG2, DWORD ARG3, LPDDBLTFX ARG4)
{
  return self_->Blt(ARG0, ARG1, ARG2, ARG3, ARG4);
}

HRESULT __stdcall proxyIDirectDrawSurface7::BltBatch(LPDDBLTBATCH ARG0, DWORD ARG1, DWORD ARG2)
{
  return self_->BltBatch(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirectDrawSurface7::BltFast(DWORD ARG0, DWORD ARG1, LPDIRECTDRAWSURFACE7 ARG2, LPRECT ARG3, DWORD ARG4)
{
  return self_->BltFast(ARG0, ARG1, ARG2, ARG3, ARG4);
}

HRESULT __stdcall proxyIDirectDrawSurface7::DeleteAttachedSurface(DWORD ARG0, LPDIRECTDRAWSURFACE7 ARG1)
{
  return self_->DeleteAttachedSurface(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface7::EnumAttachedSurfaces(LPVOID ARG0, LPDDENUMSURFACESCALLBACK7 ARG1)
{
  return self_->EnumAttachedSurfaces(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface7::EnumOverlayZOrders(DWORD ARG0, LPVOID ARG1, LPDDENUMSURFACESCALLBACK7 ARG2)
{
  return self_->EnumOverlayZOrders(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirectDrawSurface7::Flip(LPDIRECTDRAWSURFACE7 ARG0, DWORD ARG1)
{
  return self_->Flip(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface7::GetAttachedSurface(LPDDSCAPS2 ARG0, LPDIRECTDRAWSURFACE7 * ARG1)
{
  return self_->GetAttachedSurface(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface7::GetBltStatus(DWORD ARG0)
{
  return self_->GetBltStatus(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface7::GetCaps(LPDDSCAPS2 ARG0)
{
  return self_->GetCaps(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface7::GetClipper(LPDIRECTDRAWCLIPPER* ARG0)
{
  return self_->GetClipper(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface7::GetColorKey(DWORD ARG0, LPDDCOLORKEY ARG1)
{
  return self_->GetColorKey(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface7::GetDC(HDC * ARG0)
{
  return self_->GetDC(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface7::GetFlipStatus(DWORD ARG0)
{
  return self_->GetFlipStatus(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface7::GetOverlayPosition(LPLONG ARG0, LPLONG ARG1)
{
  return self_->GetOverlayPosition(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface7::GetPalette(LPDIRECTDRAWPALETTE* ARG0)
{
  return self_->GetPalette(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface7::GetPixelFormat(LPDDPIXELFORMAT ARG0)
{
  return self_->GetPixelFormat(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface7::GetSurfaceDesc(LPDDSURFACEDESC2 ARG0)
{
  return self_->GetSurfaceDesc(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface7::Initialize(LPDIRECTDRAW ARG0, LPDDSURFACEDESC2 ARG1)
{
  return self_->Initialize(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface7::IsLost(void)
{
  return self_->IsLost();
}

HRESULT __stdcall proxyIDirectDrawSurface7::Lock(LPRECT ARG0, LPDDSURFACEDESC2 ARG1, DWORD ARG2, HANDLE ARG3)
{
  return self_->Lock(ARG0, ARG1, ARG2, ARG3);
}

HRESULT __stdcall proxyIDirectDrawSurface7::ReleaseDC(HDC ARG0)
{
  return self_->ReleaseDC(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface7::Restore(void)
{
  return self_->Restore();
}

HRESULT __stdcall proxyIDirectDrawSurface7::SetClipper(LPDIRECTDRAWCLIPPER ARG0)
{
  return self_->SetClipper(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface7::SetColorKey(DWORD ARG0, LPDDCOLORKEY ARG1)
{
  return self_->SetColorKey(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface7::SetOverlayPosition(LONG ARG0, LONG ARG1)
{
  return self_->SetOverlayPosition(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface7::SetPalette(LPDIRECTDRAWPALETTE ARG0)
{
  return self_->SetPalette(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface7::Unlock(LPRECT ARG0)
{
  return self_->Unlock(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface7::UpdateOverlay(LPRECT ARG0, LPDIRECTDRAWSURFACE7 ARG1, LPRECT ARG2, DWORD ARG3, LPDDOVERLAYFX ARG4)
{
  return self_->UpdateOverlay(ARG0, ARG1, ARG2, ARG3, ARG4);
}

HRESULT __stdcall proxyIDirectDrawSurface7::UpdateOverlayDisplay(DWORD ARG0)
{
  return self_->UpdateOverlayDisplay(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface7::UpdateOverlayZOrder(DWORD ARG0, LPDIRECTDRAWSURFACE7 ARG1)
{
  return self_->UpdateOverlayZOrder(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface7::GetDDInterface(LPVOID * ARG0)
{
  return self_->GetDDInterface(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface7::PageLock(DWORD ARG0)
{
  return self_->PageLock(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface7::PageUnlock(DWORD ARG0)
{
  return self_->PageUnlock(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface7::SetSurfaceDesc(LPDDSURFACEDESC2 ARG0, DWORD ARG1)
{
  return self_->SetSurfaceDesc(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface7::SetPrivateData(REFGUID ARG0, LPVOID ARG1, DWORD ARG2, DWORD ARG3)
{
  return self_->SetPrivateData(ARG0, ARG1, ARG2, ARG3);
}

HRESULT __stdcall proxyIDirectDrawSurface7::GetPrivateData(REFGUID ARG0, LPVOID ARG1, LPDWORD ARG2)
{
  return self_->GetPrivateData(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirectDrawSurface7::FreePrivateData(REFGUID ARG0)
{
  return self_->FreePrivateData(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface7::GetUniquenessValue(LPDWORD ARG0)
{
  return self_->GetUniquenessValue(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface7::ChangeUniquenessValue(void)
{
  return self_->ChangeUniquenessValue();
}

HRESULT __stdcall proxyIDirectDrawSurface7::SetPriority(DWORD ARG0)
{
  return self_->SetPriority(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface7::GetPriority(LPDWORD ARG0)
{
  return self_->GetPriority(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface7::SetLOD(DWORD ARG0)
{
  return self_->SetLOD(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface7::GetLOD(LPDWORD ARG0)
{
  return self_->GetLOD(ARG0);
}

