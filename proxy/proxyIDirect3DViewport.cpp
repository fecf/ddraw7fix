#include "proxyIDirect3DViewport.h"

proxyIDirect3DViewport::proxyIDirect3DViewport(IDirect3DViewport** ppOrigInterface)
{
  this->self_ = *ppOrigInterface;
}

proxyIDirect3DViewport::~proxyIDirect3DViewport()
{
}

HRESULT __stdcall proxyIDirect3DViewport::QueryInterface(REFIID riid, LPVOID * ppvObj)
{
  return self_->QueryInterface(riid, ppvObj);
}

ULONG __stdcall proxyIDirect3DViewport::AddRef(void)
{
  return self_->AddRef();
}

ULONG __stdcall proxyIDirect3DViewport::Release(void)
{
  return self_->Release();
}

HRESULT __stdcall proxyIDirect3DViewport::Initialize(LPDIRECT3D ARG0)
{
  return self_->Initialize(ARG0);
}

HRESULT __stdcall proxyIDirect3DViewport::GetViewport(LPD3DVIEWPORT ARG0)
{
  return self_->GetViewport(ARG0);
}

HRESULT __stdcall proxyIDirect3DViewport::SetViewport(LPD3DVIEWPORT ARG0)
{
  return self_->SetViewport(ARG0);
}

HRESULT __stdcall proxyIDirect3DViewport::TransformVertices(DWORD ARG0, LPD3DTRANSFORMDATA ARG1, DWORD ARG2, LPDWORD ARG3)
{
  return self_->TransformVertices(ARG0, ARG1, ARG2, ARG3);
}

HRESULT __stdcall proxyIDirect3DViewport::LightElements(DWORD ARG0, LPD3DLIGHTDATA ARG1)
{
  return self_->LightElements(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DViewport::SetBackground(D3DMATERIALHANDLE ARG0)
{
  return self_->SetBackground(ARG0);
}

HRESULT __stdcall proxyIDirect3DViewport::GetBackground(LPD3DMATERIALHANDLE ARG0, LPBOOL ARG1)
{
  return self_->GetBackground(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DViewport::SetBackgroundDepth(LPDIRECTDRAWSURFACE ARG0)
{
  return self_->SetBackgroundDepth(ARG0);
}

HRESULT __stdcall proxyIDirect3DViewport::GetBackgroundDepth(LPDIRECTDRAWSURFACE* ARG0, LPBOOL ARG1)
{
  return self_->GetBackgroundDepth(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DViewport::Clear(DWORD ARG0, LPD3DRECT ARG1, DWORD ARG2)
{
  return self_->Clear(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirect3DViewport::AddLight(LPDIRECT3DLIGHT ARG0)
{
  return self_->AddLight(ARG0);
}

HRESULT __stdcall proxyIDirect3DViewport::DeleteLight(LPDIRECT3DLIGHT ARG0)
{
  return self_->DeleteLight(ARG0);
}

HRESULT __stdcall proxyIDirect3DViewport::NextLight(LPDIRECT3DLIGHT ARG0, LPDIRECT3DLIGHT* ARG1, DWORD ARG2)
{
  return self_->NextLight(ARG0, ARG1, ARG2);
}

