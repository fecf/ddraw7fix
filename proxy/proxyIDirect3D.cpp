#include "proxyIDirect3D.h"

proxyIDirect3D::proxyIDirect3D(IDirect3D** ppOrigInterface)
{
  this->self_ = *ppOrigInterface;
}

proxyIDirect3D::~proxyIDirect3D()
{
}

HRESULT __stdcall proxyIDirect3D::QueryInterface(REFIID riid, LPVOID * ppvObj)
{
  return self_->QueryInterface(riid, ppvObj);
}

ULONG __stdcall proxyIDirect3D::AddRef(void)
{
  return self_->AddRef();
}

ULONG __stdcall proxyIDirect3D::Release(void)
{
  return self_->Release();
}

HRESULT __stdcall proxyIDirect3D::Initialize(REFCLSID ARG0)
{
  return self_->Initialize(ARG0);
}

HRESULT __stdcall proxyIDirect3D::EnumDevices(LPD3DENUMDEVICESCALLBACK ARG0, LPVOID ARG1)
{
  return self_->EnumDevices(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3D::CreateLight(LPDIRECT3DLIGHT* ARG0, IUnknown* ARG1)
{
  return self_->CreateLight(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3D::CreateMaterial(LPDIRECT3DMATERIAL* ARG0, IUnknown* ARG1)
{
  return self_->CreateMaterial(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3D::CreateViewport(LPDIRECT3DVIEWPORT* ARG0, IUnknown* ARG1)
{
  return self_->CreateViewport(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3D::FindDevice(LPD3DFINDDEVICESEARCH ARG0, LPD3DFINDDEVICERESULT ARG1)
{
  return self_->FindDevice(ARG0, ARG1);
}

