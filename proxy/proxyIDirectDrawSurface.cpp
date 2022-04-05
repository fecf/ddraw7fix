#include "proxyIDirectDrawSurface.h"

proxyIDirectDrawSurface::proxyIDirectDrawSurface(IDirectDrawSurface** ppOrigInterface)
{
  this->self_ = *ppOrigInterface;
}

proxyIDirectDrawSurface::~proxyIDirectDrawSurface()
{
}

HRESULT __stdcall proxyIDirectDrawSurface::AddAttachedSurface(LPDIRECTDRAWSURFACE ARG0)
{
  return self_->AddAttachedSurface(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface::AddOverlayDirtyRect(LPRECT ARG0)
{
  return self_->AddOverlayDirtyRect(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface::Blt(LPRECT ARG0, LPDIRECTDRAWSURFACE ARG1, LPRECT ARG2, DWORD ARG3, LPDDBLTFX ARG4)
{
  return self_->Blt(ARG0, ARG1, ARG2, ARG3, ARG4);
}

HRESULT __stdcall proxyIDirectDrawSurface::BltBatch(LPDDBLTBATCH ARG0, DWORD ARG1, DWORD ARG2)
{
  return self_->BltBatch(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirectDrawSurface::BltFast(DWORD ARG0, DWORD ARG1, LPDIRECTDRAWSURFACE ARG2, LPRECT ARG3, DWORD ARG4)
{
  return self_->BltFast(ARG0, ARG1, ARG2, ARG3, ARG4);
}

HRESULT __stdcall proxyIDirectDrawSurface::DeleteAttachedSurface(DWORD ARG0, LPDIRECTDRAWSURFACE ARG1)
{
  return self_->DeleteAttachedSurface(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface::EnumAttachedSurfaces(LPVOID ARG0, LPDDENUMSURFACESCALLBACK ARG1)
{
  return self_->EnumAttachedSurfaces(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface::EnumOverlayZOrders(DWORD ARG0, LPVOID ARG1, LPDDENUMSURFACESCALLBACK ARG2)
{
  return self_->EnumOverlayZOrders(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirectDrawSurface::Flip(LPDIRECTDRAWSURFACE ARG0, DWORD ARG1)
{
  return self_->Flip(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface::GetAttachedSurface(LPDDSCAPS ARG0, LPDIRECTDRAWSURFACE * ARG1)
{
  return self_->GetAttachedSurface(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface::GetBltStatus(DWORD ARG0)
{
  return self_->GetBltStatus(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface::GetCaps(LPDDSCAPS ARG0)
{
  return self_->GetCaps(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface::GetClipper(LPDIRECTDRAWCLIPPER* ARG0)
{
  return self_->GetClipper(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface::GetColorKey(DWORD ARG0, LPDDCOLORKEY ARG1)
{
  return self_->GetColorKey(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface::GetDC(HDC * ARG0)
{
  return self_->GetDC(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface::GetFlipStatus(DWORD ARG0)
{
  return self_->GetFlipStatus(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface::GetOverlayPosition(LPLONG ARG0, LPLONG ARG1)
{
  return self_->GetOverlayPosition(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface::GetPalette(LPDIRECTDRAWPALETTE* ARG0)
{
  return self_->GetPalette(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface::GetPixelFormat(LPDDPIXELFORMAT ARG0)
{
  return self_->GetPixelFormat(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface::GetSurfaceDesc(LPDDSURFACEDESC ARG0)
{
  return self_->GetSurfaceDesc(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface::Initialize(LPDIRECTDRAW ARG0, LPDDSURFACEDESC ARG1)
{
  return self_->Initialize(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface::IsLost(void)
{
  return self_->IsLost();
}

HRESULT __stdcall proxyIDirectDrawSurface::Lock(LPRECT ARG0, LPDDSURFACEDESC ARG1, DWORD ARG2, HANDLE ARG3)
{
  return self_->Lock(ARG0, ARG1, ARG2, ARG3);
}

HRESULT __stdcall proxyIDirectDrawSurface::ReleaseDC(HDC ARG0)
{
  return self_->ReleaseDC(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface::Restore(void)
{
  return self_->Restore();
}

HRESULT __stdcall proxyIDirectDrawSurface::SetClipper(LPDIRECTDRAWCLIPPER ARG0)
{
  return self_->SetClipper(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface::SetColorKey(DWORD ARG0, LPDDCOLORKEY ARG1)
{
  return self_->SetColorKey(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface::SetOverlayPosition(LONG ARG0, LONG ARG1)
{
  return self_->SetOverlayPosition(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawSurface::SetPalette(LPDIRECTDRAWPALETTE ARG0)
{
  return self_->SetPalette(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface::Unlock(LPVOID ARG0)
{
  return self_->Unlock(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface::UpdateOverlay(LPRECT ARG0, LPDIRECTDRAWSURFACE ARG1, LPRECT ARG2, DWORD ARG3, LPDDOVERLAYFX ARG4)
{
  return self_->UpdateOverlay(ARG0, ARG1, ARG2, ARG3, ARG4);
}

HRESULT __stdcall proxyIDirectDrawSurface::UpdateOverlayDisplay(DWORD ARG0)
{
  return self_->UpdateOverlayDisplay(ARG0);
}

HRESULT __stdcall proxyIDirectDrawSurface::UpdateOverlayZOrder(DWORD ARG0, LPDIRECTDRAWSURFACE ARG1)
{
  return self_->UpdateOverlayZOrder(ARG0, ARG1);
}

