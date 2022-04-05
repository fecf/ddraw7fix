#include "proxyIDirect3DDevice2.h"

proxyIDirect3DDevice2::proxyIDirect3DDevice2(IDirect3DDevice2** ppOrigInterface)
{
  this->self_ = *ppOrigInterface;
}

proxyIDirect3DDevice2::~proxyIDirect3DDevice2()
{
}

HRESULT __stdcall proxyIDirect3DDevice2::QueryInterface(REFIID riid, LPVOID * ppvObj)
{
  return self_->QueryInterface(riid, ppvObj);
}

ULONG __stdcall proxyIDirect3DDevice2::AddRef(void)
{
  return self_->AddRef();
}

ULONG __stdcall proxyIDirect3DDevice2::Release(void)
{
  return self_->Release();
}

HRESULT __stdcall proxyIDirect3DDevice2::GetCaps(LPD3DDEVICEDESC ARG0, LPD3DDEVICEDESC ARG1)
{
  return self_->GetCaps(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DDevice2::SwapTextureHandles(LPDIRECT3DTEXTURE2 ARG0, LPDIRECT3DTEXTURE2 ARG1)
{
  return self_->SwapTextureHandles(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DDevice2::GetStats(LPD3DSTATS ARG0)
{
  return self_->GetStats(ARG0);
}

HRESULT __stdcall proxyIDirect3DDevice2::AddViewport(LPDIRECT3DVIEWPORT2 ARG0)
{
  return self_->AddViewport(ARG0);
}

HRESULT __stdcall proxyIDirect3DDevice2::DeleteViewport(LPDIRECT3DVIEWPORT2 ARG0)
{
  return self_->DeleteViewport(ARG0);
}

HRESULT __stdcall proxyIDirect3DDevice2::NextViewport(LPDIRECT3DVIEWPORT2 ARG0, LPDIRECT3DVIEWPORT2* ARG1, DWORD ARG2)
{
  return self_->NextViewport(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirect3DDevice2::EnumTextureFormats(LPD3DENUMTEXTUREFORMATSCALLBACK ARG0, LPVOID ARG1)
{
  return self_->EnumTextureFormats(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DDevice2::BeginScene(void)
{
  return self_->BeginScene();
}

HRESULT __stdcall proxyIDirect3DDevice2::EndScene(void)
{
  return self_->EndScene();
}

HRESULT __stdcall proxyIDirect3DDevice2::GetDirect3D(LPDIRECT3D2* ARG0)
{
  return self_->GetDirect3D(ARG0);
}

HRESULT __stdcall proxyIDirect3DDevice2::SetCurrentViewport(LPDIRECT3DVIEWPORT2 ARG0)
{
  return self_->SetCurrentViewport(ARG0);
}

HRESULT __stdcall proxyIDirect3DDevice2::GetCurrentViewport(LPDIRECT3DVIEWPORT2 * ARG0)
{
  return self_->GetCurrentViewport(ARG0);
}

HRESULT __stdcall proxyIDirect3DDevice2::SetRenderTarget(LPDIRECTDRAWSURFACE ARG0, DWORD ARG1)
{
  return self_->SetRenderTarget(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DDevice2::GetRenderTarget(LPDIRECTDRAWSURFACE * ARG0)
{
  return self_->GetRenderTarget(ARG0);
}

HRESULT __stdcall proxyIDirect3DDevice2::Begin(D3DPRIMITIVETYPE ARG0, D3DVERTEXTYPE ARG1, DWORD ARG2)
{
  return self_->Begin(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirect3DDevice2::BeginIndexed(D3DPRIMITIVETYPE ARG0, D3DVERTEXTYPE ARG1, LPVOID ARG2, DWORD ARG3, DWORD ARG4)
{
  return self_->BeginIndexed(ARG0, ARG1, ARG2, ARG3, ARG4);
}

HRESULT __stdcall proxyIDirect3DDevice2::Vertex(LPVOID ARG0)
{
  return self_->Vertex(ARG0);
}

HRESULT __stdcall proxyIDirect3DDevice2::Index(WORD ARG0)
{
  return self_->Index(ARG0);
}

HRESULT __stdcall proxyIDirect3DDevice2::End(DWORD ARG0)
{
  return self_->End(ARG0);
}

HRESULT __stdcall proxyIDirect3DDevice2::GetRenderState(D3DRENDERSTATETYPE ARG0, LPDWORD ARG1)
{
  return self_->GetRenderState(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DDevice2::SetRenderState(D3DRENDERSTATETYPE ARG0, DWORD ARG1)
{
  return self_->SetRenderState(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DDevice2::GetLightState(D3DLIGHTSTATETYPE ARG0, LPDWORD ARG1)
{
  return self_->GetLightState(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DDevice2::SetLightState(D3DLIGHTSTATETYPE ARG0, DWORD ARG1)
{
  return self_->SetLightState(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DDevice2::SetTransform(D3DTRANSFORMSTATETYPE ARG0, LPD3DMATRIX ARG1)
{
  return self_->SetTransform(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DDevice2::GetTransform(D3DTRANSFORMSTATETYPE ARG0, LPD3DMATRIX ARG1)
{
  return self_->GetTransform(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DDevice2::MultiplyTransform(D3DTRANSFORMSTATETYPE ARG0, LPD3DMATRIX ARG1)
{
  return self_->MultiplyTransform(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirect3DDevice2::DrawPrimitive(D3DPRIMITIVETYPE ARG0, D3DVERTEXTYPE ARG1, LPVOID ARG2, DWORD ARG3, DWORD ARG4)
{
  return self_->DrawPrimitive(ARG0, ARG1, ARG2, ARG3, ARG4);
}

HRESULT __stdcall proxyIDirect3DDevice2::DrawIndexedPrimitive(D3DPRIMITIVETYPE ARG0, D3DVERTEXTYPE ARG1, LPVOID ARG2, DWORD ARG3, LPWORD ARG4, DWORD ARG5, DWORD ARG6)
{
  return self_->DrawIndexedPrimitive(ARG0, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6);
}

HRESULT __stdcall proxyIDirect3DDevice2::SetClipStatus(LPD3DCLIPSTATUS ARG0)
{
  return self_->SetClipStatus(ARG0);
}

HRESULT __stdcall proxyIDirect3DDevice2::GetClipStatus(LPD3DCLIPSTATUS ARG0)
{
  return self_->GetClipStatus(ARG0);
}

