#include "proxyIDirect3DLight.h"

proxyIDirect3DLight::proxyIDirect3DLight(IDirect3DLight** ppOrigInterface)
{
  this->self_ = *ppOrigInterface;
}

proxyIDirect3DLight::~proxyIDirect3DLight()
{
}

HRESULT __stdcall proxyIDirect3DLight::QueryInterface(REFIID riid, LPVOID * ppvObj)
{
  return self_->QueryInterface(riid, ppvObj);
}

ULONG __stdcall proxyIDirect3DLight::AddRef(void)
{
  return self_->AddRef();
}

ULONG __stdcall proxyIDirect3DLight::Release(void)
{
  return self_->Release();
}

HRESULT __stdcall proxyIDirect3DLight::Initialize(LPDIRECT3D ARG0)
{
  return self_->Initialize(ARG0);
}

HRESULT __stdcall proxyIDirect3DLight::SetLight(LPD3DLIGHT ARG0)
{
  return self_->SetLight(ARG0);
}

HRESULT __stdcall proxyIDirect3DLight::GetLight(LPD3DLIGHT ARG0)
{
  return self_->GetLight(ARG0);
}

