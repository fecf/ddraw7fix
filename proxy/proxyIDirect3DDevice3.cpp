#include "proxyIDirect3DDevice3.h"

proxyIDirect3DDevice3::proxyIDirect3DDevice3(IDirect3DDevice3** ppOrigInterface)
{
  this->self_ = *ppOrigInterface;
}

proxyIDirect3DDevice3::~proxyIDirect3DDevice3()
{
}

HRESULT __stdcall proxyIDirect3DDevice3::QueryInterface(REFIID riid, LPVOID * ppvObj)
{
  return self_->QueryInterface(riid, ppvObj);
}

ULONG __stdcall proxyIDirect3DDevice3::AddRef(void)
{
  return self_->AddRef();
}

ULONG __stdcall proxyIDirect3DDevice3::Release(void)
{
  return self_->Release();
}

HRESULT __stdcall proxyIDirect3DDevice3::GetCaps(LPD3DDEVICEDESC ARG0, LPD3DDEVICEDESC ARG1)
{
  return self_->GetCaps(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DDevice3::GetStats(LPD3DSTATS ARG0)
{
  return self_->GetStats(ARG0);
}

HRESULT __stdcall proxyIDirect3DDevice3::AddViewport(LPDIRECT3DVIEWPORT3 ARG0)
{
  return self_->AddViewport(ARG0);
}

HRESULT __stdcall proxyIDirect3DDevice3::DeleteViewport(LPDIRECT3DVIEWPORT3 ARG0)
{
  return self_->DeleteViewport(ARG0);
}

HRESULT __stdcall proxyIDirect3DDevice3::NextViewport(LPDIRECT3DVIEWPORT3 ARG0, LPDIRECT3DVIEWPORT3* ARG1, DWORD ARG2)
{
  return self_->NextViewport(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirect3DDevice3::EnumTextureFormats(LPD3DENUMPIXELFORMATSCALLBACK ARG0, LPVOID ARG1)
{
  return self_->EnumTextureFormats(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DDevice3::BeginScene(void)
{
  return self_->BeginScene();
}

HRESULT __stdcall proxyIDirect3DDevice3::EndScene(void)
{
  return self_->EndScene();
}

HRESULT __stdcall proxyIDirect3DDevice3::GetDirect3D(LPDIRECT3D3* ARG0)
{
  return self_->GetDirect3D(ARG0);
}

HRESULT __stdcall proxyIDirect3DDevice3::SetCurrentViewport(LPDIRECT3DVIEWPORT3 ARG0)
{
  return self_->SetCurrentViewport(ARG0);
}

HRESULT __stdcall proxyIDirect3DDevice3::GetCurrentViewport(LPDIRECT3DVIEWPORT3 * ARG0)
{
  return self_->GetCurrentViewport(ARG0);
}

HRESULT __stdcall proxyIDirect3DDevice3::SetRenderTarget(LPDIRECTDRAWSURFACE4 ARG0, DWORD ARG1)
{
  return self_->SetRenderTarget(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DDevice3::GetRenderTarget(LPDIRECTDRAWSURFACE4 * ARG0)
{
  return self_->GetRenderTarget(ARG0);
}

HRESULT __stdcall proxyIDirect3DDevice3::Begin(D3DPRIMITIVETYPE ARG0, DWORD ARG1, DWORD ARG2)
{
  return self_->Begin(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirect3DDevice3::BeginIndexed(D3DPRIMITIVETYPE ARG0, DWORD ARG1, LPVOID ARG2, DWORD ARG3, DWORD ARG4)
{
  return self_->BeginIndexed(ARG0, ARG1, ARG2, ARG3, ARG4);
}

HRESULT __stdcall proxyIDirect3DDevice3::Vertex(LPVOID ARG0)
{
  return self_->Vertex(ARG0);
}

HRESULT __stdcall proxyIDirect3DDevice3::Index(WORD ARG0)
{
  return self_->Index(ARG0);
}

HRESULT __stdcall proxyIDirect3DDevice3::End(DWORD ARG0)
{
  return self_->End(ARG0);
}

HRESULT __stdcall proxyIDirect3DDevice3::GetRenderState(D3DRENDERSTATETYPE ARG0, LPDWORD ARG1)
{
  return self_->GetRenderState(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DDevice3::SetRenderState(D3DRENDERSTATETYPE ARG0, DWORD ARG1)
{
  return self_->SetRenderState(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DDevice3::GetLightState(D3DLIGHTSTATETYPE ARG0, LPDWORD ARG1)
{
  return self_->GetLightState(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DDevice3::SetLightState(D3DLIGHTSTATETYPE ARG0, DWORD ARG1)
{
  return self_->SetLightState(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DDevice3::SetTransform(D3DTRANSFORMSTATETYPE ARG0, LPD3DMATRIX ARG1)
{
  return self_->SetTransform(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DDevice3::GetTransform(D3DTRANSFORMSTATETYPE ARG0, LPD3DMATRIX ARG1)
{
  return self_->GetTransform(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DDevice3::MultiplyTransform(D3DTRANSFORMSTATETYPE ARG0, LPD3DMATRIX ARG1)
{
  return self_->MultiplyTransform(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DDevice3::DrawPrimitive(D3DPRIMITIVETYPE ARG0, DWORD ARG1, LPVOID ARG2, DWORD ARG3, DWORD ARG4)
{
  return self_->DrawPrimitive(ARG0, ARG1, ARG2, ARG3, ARG4);
}

HRESULT __stdcall proxyIDirect3DDevice3::DrawIndexedPrimitive(D3DPRIMITIVETYPE ARG0, DWORD ARG1, LPVOID ARG2, DWORD ARG3, LPWORD ARG4, DWORD ARG5, DWORD ARG6)
{
  return self_->DrawIndexedPrimitive(ARG0, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6);
}

HRESULT __stdcall proxyIDirect3DDevice3::SetClipStatus(LPD3DCLIPSTATUS ARG0)
{
  return self_->SetClipStatus(ARG0);
}

HRESULT __stdcall proxyIDirect3DDevice3::GetClipStatus(LPD3DCLIPSTATUS ARG0)
{
  return self_->GetClipStatus(ARG0);
}

HRESULT __stdcall proxyIDirect3DDevice3::DrawPrimitiveStrided(D3DPRIMITIVETYPE ARG0, DWORD ARG1, LPD3DDRAWPRIMITIVESTRIDEDDATA ARG2, DWORD ARG3, DWORD ARG4)
{
  return self_->DrawPrimitiveStrided(ARG0, ARG1, ARG2, ARG3, ARG4);
}

HRESULT __stdcall proxyIDirect3DDevice3::DrawIndexedPrimitiveStrided(D3DPRIMITIVETYPE ARG0, DWORD ARG1, LPD3DDRAWPRIMITIVESTRIDEDDATA ARG2, DWORD ARG3, LPWORD ARG4, DWORD ARG5, DWORD ARG6)
{
  return self_->DrawIndexedPrimitiveStrided(ARG0, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6);
}

HRESULT __stdcall proxyIDirect3DDevice3::DrawPrimitiveVB(D3DPRIMITIVETYPE ARG0, LPDIRECT3DVERTEXBUFFER ARG1, DWORD ARG2, DWORD ARG3, DWORD ARG4)
{
  return self_->DrawPrimitiveVB(ARG0, ARG1, ARG2, ARG3, ARG4);
}

HRESULT __stdcall proxyIDirect3DDevice3::DrawIndexedPrimitiveVB(D3DPRIMITIVETYPE ARG0, LPDIRECT3DVERTEXBUFFER ARG1, LPWORD ARG2, DWORD ARG3, DWORD ARG4)
{
  return self_->DrawIndexedPrimitiveVB(ARG0, ARG1, ARG2, ARG3, ARG4);
}

HRESULT __stdcall proxyIDirect3DDevice3::ComputeSphereVisibility(LPD3DVECTOR ARG0, LPD3DVALUE ARG1, DWORD ARG2, DWORD ARG3, LPDWORD ARG4)
{
  return self_->ComputeSphereVisibility(ARG0, ARG1, ARG2, ARG3, ARG4);
}

HRESULT __stdcall proxyIDirect3DDevice3::GetTexture(DWORD ARG0, LPDIRECT3DTEXTURE2 * ARG1)
{
  return self_->GetTexture(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DDevice3::SetTexture(DWORD ARG0, LPDIRECT3DTEXTURE2 ARG1)
{
  return self_->SetTexture(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DDevice3::GetTextureStageState(DWORD ARG0, D3DTEXTURESTAGESTATETYPE ARG1, LPDWORD ARG2)
{
  return self_->GetTextureStageState(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirect3DDevice3::SetTextureStageState(DWORD ARG0, D3DTEXTURESTAGESTATETYPE ARG1, DWORD ARG2)
{
  return self_->SetTextureStageState(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirect3DDevice3::ValidateDevice(LPDWORD ARG0)
{
  return self_->ValidateDevice(ARG0);
}

