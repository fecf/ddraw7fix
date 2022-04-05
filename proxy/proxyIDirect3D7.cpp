#include "proxyIDirect3D7.h"

proxyIDirect3D7::proxyIDirect3D7(IDirect3D7** ppOrigInterface)
{
  this->self_ = *ppOrigInterface;
}

proxyIDirect3D7::~proxyIDirect3D7()
{
}

HRESULT __stdcall proxyIDirect3D7::QueryInterface(REFIID riid, LPVOID * ppvObj)
{
  return self_->QueryInterface(riid, ppvObj);
}

ULONG __stdcall proxyIDirect3D7::AddRef(void)
{
  return self_->AddRef();
}

ULONG __stdcall proxyIDirect3D7::Release(void)
{
  return self_->Release();
}

HRESULT __stdcall proxyIDirect3D7::EnumDevices(LPD3DENUMDEVICESCALLBACK7 ARG0, LPVOID ARG1)
{
  return self_->EnumDevices(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3D7::CreateDevice(REFCLSID ARG0, LPDIRECTDRAWSURFACE7 ARG1, LPDIRECT3DDEVICE7* ARG2)
{
  return self_->CreateDevice(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirect3D7::CreateVertexBuffer(LPD3DVERTEXBUFFERDESC ARG0, LPDIRECT3DVERTEXBUFFER7* ARG1, DWORD ARG2)
{
  return self_->CreateVertexBuffer(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirect3D7::EnumZBufferFormats(REFCLSID ARG0, LPD3DENUMPIXELFORMATSCALLBACK ARG1, LPVOID ARG2)
{
  return self_->EnumZBufferFormats(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirect3D7::EvictManagedTextures(void)
{
  return self_->EvictManagedTextures();
}

