#include "proxyIDirect3DTexture2.h"

proxyIDirect3DTexture2::proxyIDirect3DTexture2(IDirect3DTexture2** ppOrigInterface)
{
  this->self_ = *ppOrigInterface;
}

proxyIDirect3DTexture2::~proxyIDirect3DTexture2()
{
}

HRESULT __stdcall proxyIDirect3DTexture2::QueryInterface(REFIID riid, LPVOID * ppvObj)
{
  return self_->QueryInterface(riid, ppvObj);
}

ULONG __stdcall proxyIDirect3DTexture2::AddRef(void)
{
  return self_->AddRef();
}

ULONG __stdcall proxyIDirect3DTexture2::Release(void)
{
  return self_->Release();
}

HRESULT __stdcall proxyIDirect3DTexture2::GetHandle(LPDIRECT3DDEVICE2 ARG0, LPD3DTEXTUREHANDLE ARG1)
{
  return self_->GetHandle(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DTexture2::PaletteChanged(DWORD ARG0, DWORD ARG1)
{
  return self_->PaletteChanged(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DTexture2::Load(LPDIRECT3DTEXTURE2 ARG0)
{
  return self_->Load(ARG0);
}

