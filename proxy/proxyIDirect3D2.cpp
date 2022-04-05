#include "proxyIDirect3D2.h"

proxyIDirect3D2::proxyIDirect3D2(IDirect3D2** ppOrigInterface)
{
  this->self_ = *ppOrigInterface;
}

proxyIDirect3D2::~proxyIDirect3D2()
{
}

HRESULT __stdcall proxyIDirect3D2::QueryInterface(REFIID riid, LPVOID * ppvObj)
{
  return self_->QueryInterface(riid, ppvObj);
}

ULONG __stdcall proxyIDirect3D2::AddRef(void)
{
  return self_->AddRef();
}

ULONG __stdcall proxyIDirect3D2::Release(void)
{
  return self_->Release();
}

HRESULT __stdcall proxyIDirect3D2::EnumDevices(LPD3DENUMDEVICESCALLBACK ARG0, LPVOID ARG1)
{
  return self_->EnumDevices(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3D2::CreateLight(LPDIRECT3DLIGHT* ARG0, IUnknown* ARG1)
{
  return self_->CreateLight(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3D2::CreateMaterial(LPDIRECT3DMATERIAL2* ARG0, IUnknown* ARG1)
{
  return self_->CreateMaterial(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3D2::CreateViewport(LPDIRECT3DVIEWPORT2* ARG0, IUnknown* ARG1)
{
  return self_->CreateViewport(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3D2::FindDevice(LPD3DFINDDEVICESEARCH ARG0, LPD3DFINDDEVICERESULT ARG1)
{
  return self_->FindDevice(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3D2::CreateDevice(REFCLSID ARG0, LPDIRECTDRAWSURFACE ARG1, LPDIRECT3DDEVICE2* ARG2)
{
  return self_->CreateDevice(ARG0, ARG1, ARG2);
}

