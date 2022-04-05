#include "proxyIDirect3DMaterial3.h"

proxyIDirect3DMaterial3::proxyIDirect3DMaterial3(IDirect3DMaterial3** ppOrigInterface)
{
  this->self_ = *ppOrigInterface;
}

proxyIDirect3DMaterial3::~proxyIDirect3DMaterial3()
{
}

HRESULT __stdcall proxyIDirect3DMaterial3::QueryInterface(REFIID riid, LPVOID * ppvObj)
{
  return self_->QueryInterface(riid, ppvObj);
}

ULONG __stdcall proxyIDirect3DMaterial3::AddRef(void)
{
  return self_->AddRef();
}

ULONG __stdcall proxyIDirect3DMaterial3::Release(void)
{
  return self_->Release();
}

HRESULT __stdcall proxyIDirect3DMaterial3::SetMaterial(LPD3DMATERIAL ARG0)
{
  return self_->SetMaterial(ARG0);
}

HRESULT __stdcall proxyIDirect3DMaterial3::GetMaterial(LPD3DMATERIAL ARG0)
{
  return self_->GetMaterial(ARG0);
}

HRESULT __stdcall proxyIDirect3DMaterial3::GetHandle(LPDIRECT3DDEVICE3 ARG0, LPD3DMATERIALHANDLE ARG1)
{
  return self_->GetHandle(ARG0, ARG1);
}

