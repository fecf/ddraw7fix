#include "proxyIDirect3DMaterial.h"

proxyIDirect3DMaterial::proxyIDirect3DMaterial(IDirect3DMaterial** ppOrigInterface)
{
  this->self_ = *ppOrigInterface;
}

proxyIDirect3DMaterial::~proxyIDirect3DMaterial()
{
}

HRESULT __stdcall proxyIDirect3DMaterial::QueryInterface(REFIID riid, LPVOID * ppvObj)
{
  return self_->QueryInterface(riid, ppvObj);
}

ULONG __stdcall proxyIDirect3DMaterial::AddRef(void)
{
  return self_->AddRef();
}

ULONG __stdcall proxyIDirect3DMaterial::Release(void)
{
  return self_->Release();
}

HRESULT __stdcall proxyIDirect3DMaterial::Initialize(LPDIRECT3D ARG0)
{
  return self_->Initialize(ARG0);
}

HRESULT __stdcall proxyIDirect3DMaterial::SetMaterial(LPD3DMATERIAL ARG0)
{
  return self_->SetMaterial(ARG0);
}

HRESULT __stdcall proxyIDirect3DMaterial::GetMaterial(LPD3DMATERIAL ARG0)
{
  return self_->GetMaterial(ARG0);
}

HRESULT __stdcall proxyIDirect3DMaterial::GetHandle(LPDIRECT3DDEVICE ARG0, LPD3DMATERIALHANDLE ARG1)
{
  return self_->GetHandle(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DMaterial::Reserve(void)
{
  return self_->Reserve();
}

HRESULT __stdcall proxyIDirect3DMaterial::Unreserve(void)
{
  return self_->Unreserve();
}

