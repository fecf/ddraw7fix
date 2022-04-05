#include "proxyIDirect3DVertexBuffer.h"

proxyIDirect3DVertexBuffer::proxyIDirect3DVertexBuffer(IDirect3DVertexBuffer** ppOrigInterface)
{
  this->self_ = *ppOrigInterface;
}

proxyIDirect3DVertexBuffer::~proxyIDirect3DVertexBuffer()
{
}

HRESULT __stdcall proxyIDirect3DVertexBuffer::QueryInterface(REFIID riid, LPVOID * ppvObj)
{
  return self_->QueryInterface(riid, ppvObj);
}

ULONG __stdcall proxyIDirect3DVertexBuffer::AddRef(void)
{
  return self_->AddRef();
}

ULONG __stdcall proxyIDirect3DVertexBuffer::Release(void)
{
  return self_->Release();
}

HRESULT __stdcall proxyIDirect3DVertexBuffer::Lock(DWORD ARG0, LPVOID* ARG1, LPDWORD ARG2)
{
  return self_->Lock(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirect3DVertexBuffer::Unlock(void)
{
  return self_->Unlock();
}

HRESULT __stdcall proxyIDirect3DVertexBuffer::ProcessVertices(DWORD ARG0, DWORD ARG1, DWORD ARG2, LPDIRECT3DVERTEXBUFFER ARG3, DWORD ARG4, LPDIRECT3DDEVICE3 ARG5, DWORD ARG6)
{
  return self_->ProcessVertices(ARG0, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6);
}

HRESULT __stdcall proxyIDirect3DVertexBuffer::GetVertexBufferDesc(LPD3DVERTEXBUFFERDESC ARG0)
{
  return self_->GetVertexBufferDesc(ARG0);
}

HRESULT __stdcall proxyIDirect3DVertexBuffer::Optimize(LPDIRECT3DDEVICE3 ARG0, DWORD ARG1)
{
  return self_->Optimize(ARG0, ARG1);
}

