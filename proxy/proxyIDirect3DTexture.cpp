#include "proxyIDirect3DTexture.h"

proxyIDirect3DTexture::proxyIDirect3DTexture(IDirect3DTexture** ppOrigInterface)
{
  this->self_ = *ppOrigInterface;
}

proxyIDirect3DTexture::~proxyIDirect3DTexture()
{
}

HRESULT __stdcall proxyIDirect3DTexture::QueryInterface(REFIID riid, LPVOID * ppvObj)
{
  return self_->QueryInterface(riid, ppvObj);
}

ULONG __stdcall proxyIDirect3DTexture::AddRef(void)
{
  return self_->AddRef();
}

ULONG __stdcall proxyIDirect3DTexture::Release(void)
{
  return self_->Release();
}

HRESULT __stdcall proxyIDirect3DTexture::Initialize(LPDIRECT3DDEVICE ARG0, LPDIRECTDRAWSURFACE ARG1)
{
  return self_->Initialize(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DTexture::GetHandle(LPDIRECT3DDEVICE ARG0, LPD3DTEXTUREHANDLE ARG1)
{
  return self_->GetHandle(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DTexture::PaletteChanged(DWORD ARG0, DWORD ARG1)
{
  return self_->PaletteChanged(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DTexture::Load(LPDIRECT3DTEXTURE ARG0)
{
  return self_->Load(ARG0);
}

HRESULT __stdcall proxyIDirect3DTexture::Unload(void)
{
  return self_->Unload();
}

