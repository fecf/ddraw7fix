#include "proxyIDirect3DExecuteBuffer.h"

proxyIDirect3DExecuteBuffer::proxyIDirect3DExecuteBuffer(IDirect3DExecuteBuffer** ppOrigInterface)
{
  this->self_ = *ppOrigInterface;
}

proxyIDirect3DExecuteBuffer::~proxyIDirect3DExecuteBuffer()
{
}

HRESULT __stdcall proxyIDirect3DExecuteBuffer::QueryInterface(REFIID riid, LPVOID * ppvObj)
{
  return self_->QueryInterface(riid, ppvObj);
}

ULONG __stdcall proxyIDirect3DExecuteBuffer::AddRef(void)
{
  return self_->AddRef();
}

ULONG __stdcall proxyIDirect3DExecuteBuffer::Release(void)
{
  return self_->Release();
}

HRESULT __stdcall proxyIDirect3DExecuteBuffer::Initialize(LPDIRECT3DDEVICE ARG0, LPD3DEXECUTEBUFFERDESC ARG1)
{
  return self_->Initialize(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DExecuteBuffer::Lock(LPD3DEXECUTEBUFFERDESC ARG0)
{
  return self_->Lock(ARG0);
}

HRESULT __stdcall proxyIDirect3DExecuteBuffer::Unlock(void)
{
  return self_->Unlock();
}

HRESULT __stdcall proxyIDirect3DExecuteBuffer::SetExecuteData(LPD3DEXECUTEDATA ARG0)
{
  return self_->SetExecuteData(ARG0);
}

HRESULT __stdcall proxyIDirect3DExecuteBuffer::GetExecuteData(LPD3DEXECUTEDATA ARG0)
{
  return self_->GetExecuteData(ARG0);
}

HRESULT __stdcall proxyIDirect3DExecuteBuffer::Validate(LPDWORD ARG0, LPD3DVALIDATECALLBACK ARG1, LPVOID ARG2, DWORD ARG3)
{
  return self_->Validate(ARG0, ARG1, ARG2, ARG3);
}

HRESULT __stdcall proxyIDirect3DExecuteBuffer::Optimize(DWORD ARG0)
{
  return self_->Optimize(ARG0);
}

