#include "proxyIDirectDrawSurface2.h"

proxyIDirectDrawSurface2::proxyIDirectDrawSurface2(IDirectDrawSurface2** ppOrigInterface)
{
  this->self_ = *ppOrigInterface;
}

proxyIDirectDrawSurface2::~proxyIDirectDrawSurface2()
{
}

HRESULT __stdcall proxyIDirectDrawSurface2::AddAttachedSurface(LPDIRECTDRAWSURFACE2 ARG0)
{
  return self_->AddAttachedSurface(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface2::AddOverlayDirtyRect(LPRECT ARG0)
{
  return self_->AddOverlayDirtyRect(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface2::Blt(LPRECT ARG0, LPDIRECTDRAWSURFACE2 ARG1, LPRECT ARG2, DWORD ARG3, LPDDBLTFX ARG4)
{
  return self_->Blt(ARG0, ARG1, ARG2, ARG3, ARG4);
}

HRESULT __stdcall proxyIDirectDrawSurface2::BltBatch(LPDDBLTBATCH ARG0, DWORD ARG1, DWORD ARG2)
{
  return self_->BltBatch(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirectDrawSurface2::BltFast(DWORD ARG0, DWORD ARG1, LPDIRECTDRAWSURFACE2 ARG2, LPRECT ARG3, DWORD ARG4)
{
  return self_->BltFast(ARG0, ARG1, ARG2, ARG3, ARG4);
}

HRESULT __stdcall proxyIDirectDrawSurface2::DeleteAttachedSurface(DWORD ARG0, LPDIRECTDRAWSURFACE2 ARG1)
{
  return self_->DeleteAttachedSurface(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface2::EnumAttachedSurfaces(LPVOID ARG0, LPDDENUMSURFACESCALLBACK ARG1)
{
  return self_->EnumAttachedSurfaces(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface2::EnumOverlayZOrders(DWORD ARG0, LPVOID ARG1, LPDDENUMSURFACESCALLBACK ARG2)
{
  return self_->EnumOverlayZOrders(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirectDrawSurface2::Flip(LPDIRECTDRAWSURFACE2 ARG0, DWORD ARG1)
{
  return self_->Flip(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface2::GetAttachedSurface(LPDDSCAPS ARG0, LPDIRECTDRAWSURFACE2 * ARG1)
{
  return self_->GetAttachedSurface(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface2::GetBltStatus(DWORD ARG0)
{
  return self_->GetBltStatus(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface2::GetCaps(LPDDSCAPS ARG0)
{
  return self_->GetCaps(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface2::GetClipper(LPDIRECTDRAWCLIPPER* ARG0)
{
  return self_->GetClipper(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface2::GetColorKey(DWORD ARG0, LPDDCOLORKEY ARG1)
{
  return self_->GetColorKey(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface2::GetDC(HDC * ARG0)
{
  return self_->GetDC(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface2::GetFlipStatus(DWORD ARG0)
{
  return self_->GetFlipStatus(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface2::GetOverlayPosition(LPLONG ARG0, LPLONG ARG1)
{
  return self_->GetOverlayPosition(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface2::GetPalette(LPDIRECTDRAWPALETTE* ARG0)
{
  return self_->GetPalette(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface2::GetPixelFormat(LPDDPIXELFORMAT ARG0)
{
  return self_->GetPixelFormat(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface2::GetSurfaceDesc(LPDDSURFACEDESC ARG0)
{
  return self_->GetSurfaceDesc(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface2::Initialize(LPDIRECTDRAW ARG0, LPDDSURFACEDESC ARG1)
{
  return self_->Initialize(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface2::IsLost(void)
{
  return self_->IsLost();
}

HRESULT __stdcall proxyIDirectDrawSurface2::Lock(LPRECT ARG0, LPDDSURFACEDESC ARG1, DWORD ARG2, HANDLE ARG3)
{
  return self_->Lock(ARG0, ARG1, ARG2, ARG3);
}

HRESULT __stdcall proxyIDirectDrawSurface2::ReleaseDC(HDC ARG0)
{
  return self_->ReleaseDC(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface2::Restore(void)
{
  return self_->Restore();
}

HRESULT __stdcall proxyIDirectDrawSurface2::SetClipper(LPDIRECTDRAWCLIPPER ARG0)
{
  return self_->SetClipper(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface2::SetColorKey(DWORD ARG0, LPDDCOLORKEY ARG1)
{
  return self_->SetColorKey(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface2::SetOverlayPosition(LONG ARG0, LONG ARG1)
{
  return self_->SetOverlayPosition(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface2::SetPalette(LPDIRECTDRAWPALETTE ARG0)
{
  return self_->SetPalette(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface2::Unlock(LPVOID ARG0)
{
  return self_->Unlock(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface2::UpdateOverlay(LPRECT ARG0, LPDIRECTDRAWSURFACE2 ARG1, LPRECT ARG2, DWORD ARG3, LPDDOVERLAYFX ARG4)
{
  return self_->UpdateOverlay(ARG0, ARG1, ARG2, ARG3, ARG4);
}

HRESULT __stdcall proxyIDirectDrawSurface2::UpdateOverlayDisplay(DWORD ARG0)
{
  return self_->UpdateOverlayDisplay(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface2::UpdateOverlayZOrder(DWORD ARG0, LPDIRECTDRAWSURFACE2 ARG1)
{
  return self_->UpdateOverlayZOrder(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface2::GetDDInterface(LPVOID * ARG0)
{
  return self_->GetDDInterface(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface2::PageLock(DWORD ARG0)
{
  return self_->PageLock(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface2::PageUnlock(DWORD ARG0)
{
  return self_->PageUnlock(ARG0);
}

