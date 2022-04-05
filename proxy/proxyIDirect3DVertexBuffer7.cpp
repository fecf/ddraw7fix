#include "proxyIDirect3DVertexBuffer7.h"

proxyIDirect3DVertexBuffer7::proxyIDirect3DVertexBuffer7(IDirect3DVertexBuffer7** ppOrigInterface)
{
  this->self_ = *ppOrigInterface;
}

proxyIDirect3DVertexBuffer7::~proxyIDirect3DVertexBuffer7()
{
}

HRESULT __stdcall proxyIDirect3DVertexBuffer7::QueryInterface(REFIID riid, LPVOID * ppvObj)
{
  return self_->QueryInterface(riid, ppvObj);
}

ULONG __stdcall proxyIDirect3DVertexBuffer7::AddRef(void)
{
  return self_->AddRef();
}

ULONG __stdcall proxyIDirect3DVertexBuffer7::Release(void)
{
  return self_->Release();
}

HRESULT __stdcall proxyIDirect3DVertexBuffer7::Lock(DWORD ARG0, LPVOID* ARG1, LPDWORD ARG2)
{
  return self_->Lock(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirect3DVertexBuffer7::Unlock(void)
{
  return self_->Unlock();
}

HRESULT __stdcall proxyIDirect3DVertexBuffer7::ProcessVertices(DWORD ARG0, DWORD ARG1, DWORD ARG2, LPDIRECT3DVERTEXBUFFER7 ARG3, DWORD ARG4, LPDIRECT3DDEVICE7 ARG5, DWORD ARG6)
{
  return self_->ProcessVertices(ARG0, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6);
}

HRESULT __stdcall proxyIDirect3DVertexBuffer7::GetVertexBufferDesc(LPD3DVERTEXBUFFERDESC ARG0)
{
  return self_->GetVertexBufferDesc(ARG0);
}

HRESULT __stdcall proxyIDirect3DVertexBuffer7::Optimize(LPDIRECT3DDEVICE7 ARG0, DWORD ARG1)
{
  return self_->Optimize(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DVertexBuffer7::ProcessVerticesStrided(DWORD ARG0, DWORD ARG1, DWORD ARG2, LPD3DDRAWPRIMITIVESTRIDEDDATA ARG3, DWORD ARG4, LPDIRECT3DDEVICE7 ARG5, DWORD ARG6)
{
  return self_->ProcessVerticesStrided(ARG0, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6);
}

