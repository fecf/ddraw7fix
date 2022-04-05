#include "proxyIDirect3DDevice.h"

proxyIDirect3DDevice::proxyIDirect3DDevice(IDirect3DDevice** ppOrigInterface)
{
  this->self_ = *ppOrigInterface;
}

proxyIDirect3DDevice::~proxyIDirect3DDevice()
{
}

HRESULT __stdcall proxyIDirect3DDevice::QueryInterface(REFIID riid, LPVOID * ppvObj)
{
  return self_->QueryInterface(riid, ppvObj);
}

ULONG __stdcall proxyIDirect3DDevice::AddRef(void)
{
  return self_->AddRef();
}

ULONG __stdcall proxyIDirect3DDevice::Release(void)
{
  return self_->Release();
}

HRESULT __stdcall proxyIDirect3DDevice::Initialize(LPDIRECT3D ARG0, LPGUID ARG1, LPD3DDEVICEDESC ARG2)
{
  return self_->Initialize(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirect3DDevice::GetCaps(LPD3DDEVICEDESC ARG0, LPD3DDEVICEDESC ARG1)
{
  return self_->GetCaps(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DDevice::SwapTextureHandles(LPDIRECT3DTEXTURE ARG0, LPDIRECT3DTEXTURE ARG1)
{
  return self_->SwapTextureHandles(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DDevice::CreateExecuteBuffer(LPD3DEXECUTEBUFFERDESC ARG0, LPDIRECT3DEXECUTEBUFFER* ARG1, IUnknown* ARG2)
{
  return self_->CreateExecuteBuffer(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirect3DDevice::GetStats(LPD3DSTATS ARG0)
{
  return self_->GetStats(ARG0);
}

HRESULT __stdcall proxyIDirect3DDevice::Execute(LPDIRECT3DEXECUTEBUFFER ARG0, LPDIRECT3DVIEWPORT ARG1, DWORD ARG2)
{
  return self_->Execute(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirect3DDevice::AddViewport(LPDIRECT3DVIEWPORT ARG0)
{
  return self_->AddViewport(ARG0);
}

HRESULT __stdcall proxyIDirect3DDevice::DeleteViewport(LPDIRECT3DVIEWPORT ARG0)
{
  return self_->DeleteViewport(ARG0);
}

HRESULT __stdcall proxyIDirect3DDevice::NextViewport(LPDIRECT3DVIEWPORT ARG0, LPDIRECT3DVIEWPORT* ARG1, DWORD ARG2)
{
  return self_->NextViewport(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirect3DDevice::Pick(LPDIRECT3DEXECUTEBUFFER ARG0, LPDIRECT3DVIEWPORT ARG1, DWORD ARG2, LPD3DRECT ARG3)
{
  return self_->Pick(ARG0, ARG1, ARG2, ARG3);
}

HRESULT __stdcall proxyIDirect3DDevice::GetPickRecords(LPDWORD ARG0, LPD3DPICKRECORD ARG1)
{
  return self_->GetPickRecords(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DDevice::EnumTextureFormats(LPD3DENUMTEXTUREFORMATSCALLBACK ARG0, LPVOID ARG1)
{
  return self_->EnumTextureFormats(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DDevice::CreateMatrix(LPD3DMATRIXHANDLE ARG0)
{
  return self_->CreateMatrix(ARG0);
}

HRESULT __stdcall proxyIDirect3DDevice::SetMatrix(D3DMATRIXHANDLE ARG0, const LPD3DMATRIX ARG1)
{
  return self_->SetMatrix(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DDevice::GetMatrix(D3DMATRIXHANDLE ARG0, LPD3DMATRIX ARG1)
{
  return self_->GetMatrix(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DDevice::DeleteMatrix(D3DMATRIXHANDLE ARG0)
{
  return self_->DeleteMatrix(ARG0);
}

HRESULT __stdcall proxyIDirect3DDevice::BeginScene(void)
{
  return self_->BeginScene();
}

HRESULT __stdcall proxyIDirect3DDevice::EndScene(void)
{
  return self_->EndScene();
}

HRESULT __stdcall proxyIDirect3DDevice::GetDirect3D(LPDIRECT3D* ARG0)
{
  return self_->GetDirect3D(ARG0);
}

