#include "proxyIDirect3D3.h"

proxyIDirect3D3::proxyIDirect3D3(IDirect3D3** ppOrigInterface)
{
  this->self_ = *ppOrigInterface;
}

proxyIDirect3D3::~proxyIDirect3D3()
{
}

HRESULT __stdcall proxyIDirect3D3::QueryInterface(REFIID riid, LPVOID * ppvObj)
{
  return self_->QueryInterface(riid, ppvObj);
}

ULONG __stdcall proxyIDirect3D3::AddRef(void)
{
  return self_->AddRef();
}

ULONG __stdcall proxyIDirect3D3::Release(void)
{
  return self_->Release();
}

HRESULT __stdcall proxyIDirect3D3::EnumDevices(LPD3DENUMDEVICESCALLBACK ARG0, LPVOID ARG1)
{
  return self_->EnumDevices(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3D3::CreateLight(LPDIRECT3DLIGHT* ARG0, LPUNKNOWN ARG1)
{
  return self_->CreateLight(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3D3::CreateMaterial(LPDIRECT3DMATERIAL3* ARG0, LPUNKNOWN ARG1)
{
  return self_->CreateMaterial(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3D3::CreateViewport(LPDIRECT3DVIEWPORT3* ARG0, LPUNKNOWN ARG1)
{
  return self_->CreateViewport(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3D3::FindDevice(LPD3DFINDDEVICESEARCH ARG0, LPD3DFINDDEVICERESULT ARG1)
{
  return self_->FindDevice(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3D3::CreateDevice(REFCLSID ARG0, LPDIRECTDRAWSURFACE4 ARG1, LPDIRECT3DDEVICE3* ARG2, LPUNKNOWN ARG3)
{
  return self_->CreateDevice(ARG0, ARG1, ARG2, ARG3);
}

HRESULT __stdcall proxyIDirect3D3::CreateVertexBuffer(LPD3DVERTEXBUFFERDESC ARG0, LPDIRECT3DVERTEXBUFFER* ARG1, DWORD ARG2, LPUNKNOWN ARG3)
{
  return self_->CreateVertexBuffer(ARG0, ARG1, ARG2, ARG3);
}

HRESULT __stdcall proxyIDirect3D3::EnumZBufferFormats(REFCLSID ARG0, LPD3DENUMPIXELFORMATSCALLBACK ARG1, LPVOID ARG2)
{
  return self_->EnumZBufferFormats(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirect3D3::EvictManagedTextures(void)
{
  return self_->EvictManagedTextures();
}

