#include "proxyIDirect3DMaterial2.h"

proxyIDirect3DMaterial2::proxyIDirect3DMaterial2(IDirect3DMaterial2** ppOrigInterface)
{
  this->self_ = *ppOrigInterface;
}

proxyIDirect3DMaterial2::~proxyIDirect3DMaterial2()
{
}

HRESULT __stdcall proxyIDirect3DMaterial2::QueryInterface(REFIID riid, LPVOID * ppvObj)
{
  return self_->QueryInterface(riid, ppvObj);
}

ULONG __stdcall proxyIDirect3DMaterial2::AddRef(void)
{
  return self_->AddRef();
}

ULONG __stdcall proxyIDirect3DMaterial2::Release(void)
{
  return self_->Release();
}

HRESULT __stdcall proxyIDirect3DMaterial2::SetMaterial(LPD3DMATERIAL ARG0)
{
  return self_->SetMaterial(ARG0);
}

HRESULT __stdcall proxyIDirect3DMaterial2::GetMaterial(LPD3DMATERIAL ARG0)
{
  return self_->GetMaterial(ARG0);
}

HRESULT __stdcall proxyIDirect3DMaterial2::GetHandle(LPDIRECT3DDEVICE2 ARG0, LPD3DMATERIALHANDLE ARG1)
{
  return self_->GetHandle(ARG0, ARG1);
}

