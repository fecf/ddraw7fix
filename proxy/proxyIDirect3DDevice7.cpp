#include "proxyIDirect3DDevice7.h"
#include "../loguru.hpp"

#define check(s) \
{ \
    HRESULT hr = ##s; \
    if (FAILED(hr)) { \
      LOG_F(ERROR, "FAILED at %s", #s); \
    } \
    return hr; \
} 

proxyIDirect3DDevice7::proxyIDirect3DDevice7(IDirect3DDevice7** ppOrigInterface)
{
  this->self_ = *ppOrigInterface;
}

proxyIDirect3DDevice7::~proxyIDirect3DDevice7()
{
}

HRESULT __stdcall proxyIDirect3DDevice7::QueryInterface(REFIID riid, LPVOID * ppvObj)
{
  check(self_->QueryInterface(riid, ppvObj));
}

ULONG __stdcall proxyIDirect3DDevice7::AddRef(void)
{
  check(self_->AddRef());
}

ULONG __stdcall proxyIDirect3DDevice7::Release(void)
{
  check(self_->Release());
}

HRESULT __stdcall proxyIDirect3DDevice7::GetCaps(LPD3DDEVICEDESC7 ARG0)
{
  check(self_->GetCaps(ARG0));
}

HRESULT __stdcall proxyIDirect3DDevice7::EnumTextureFormats(LPD3DENUMPIXELFORMATSCALLBACK ARG0, LPVOID ARG1)
{
  check(self_->EnumTextureFormats(ARG0, ARG1));
}

HRESULT __stdcall proxyIDirect3DDevice7::BeginScene(void)
{
  check(self_->BeginScene());
}

HRESULT __stdcall proxyIDirect3DDevice7::EndScene(void)
{
  check(self_->EndScene());
}

HRESULT __stdcall proxyIDirect3DDevice7::GetDirect3D(LPDIRECT3D7* ARG0)
{
  check(self_->GetDirect3D(ARG0));
}

HRESULT __stdcall proxyIDirect3DDevice7::SetRenderTarget(LPDIRECTDRAWSURFACE7 ARG0, DWORD ARG1)
{
  check(self_->SetRenderTarget(ARG0, ARG1));
}

HRESULT __stdcall proxyIDirect3DDevice7::GetRenderTarget(LPDIRECTDRAWSURFACE7 * ARG0)
{
  check(self_->GetRenderTarget(ARG0));
}

HRESULT __stdcall proxyIDirect3DDevice7::Clear(DWORD ARG0, LPD3DRECT ARG1, DWORD ARG2, D3DCOLOR ARG3, D3DVALUE ARG4, DWORD ARG5)
{
  check(self_->Clear(ARG0, ARG1, ARG2, ARG3, ARG4, ARG5));
}

HRESULT __stdcall proxyIDirect3DDevice7::SetTransform(D3DTRANSFORMSTATETYPE ARG0, LPD3DMATRIX ARG1)
{
  check(self_->SetTransform(ARG0, ARG1));
}

HRESULT __stdcall proxyIDirect3DDevice7::GetTransform(D3DTRANSFORMSTATETYPE ARG0, LPD3DMATRIX ARG1)
{
  check(self_->GetTransform(ARG0, ARG1));
}

HRESULT __stdcall proxyIDirect3DDevice7::SetViewport(LPD3DVIEWPORT7 ARG0)
{
  check(self_->SetViewport(ARG0));
}

HRESULT __stdcall proxyIDirect3DDevice7::MultiplyTransform(D3DTRANSFORMSTATETYPE ARG0, LPD3DMATRIX ARG1)
{
  check(self_->MultiplyTransform(ARG0, ARG1));
}

HRESULT __stdcall proxyIDirect3DDevice7::GetViewport(LPD3DVIEWPORT7 ARG0)
{
  check(self_->GetViewport(ARG0));
}

HRESULT __stdcall proxyIDirect3DDevice7::SetMaterial(LPD3DMATERIAL7 ARG0)
{
  check(self_->SetMaterial(ARG0));
}

HRESULT __stdcall proxyIDirect3DDevice7::GetMaterial(LPD3DMATERIAL7 ARG0)
{
  check(self_->GetMaterial(ARG0));
}

HRESULT __stdcall proxyIDirect3DDevice7::SetLight(DWORD ARG0, LPD3DLIGHT7 ARG1)
{
  check(self_->SetLight(ARG0, ARG1));
}

HRESULT __stdcall proxyIDirect3DDevice7::GetLight(DWORD ARG0, LPD3DLIGHT7 ARG1)
{
  check(self_->GetLight(ARG0, ARG1));
}

HRESULT __stdcall proxyIDirect3DDevice7::SetRenderState(D3DRENDERSTATETYPE ARG0, DWORD ARG1)
{
  check(self_->SetRenderState(ARG0, ARG1));
}

HRESULT __stdcall proxyIDirect3DDevice7::GetRenderState(D3DRENDERSTATETYPE ARG0, LPDWORD ARG1)
{
  check(self_->GetRenderState(ARG0, ARG1));
}

HRESULT __stdcall proxyIDirect3DDevice7::BeginStateBlock(void)
{
  check(self_->BeginStateBlock());
}

HRESULT __stdcall proxyIDirect3DDevice7::EndStateBlock(LPDWORD ARG0)
{
  check(self_->EndStateBlock(ARG0));
}

HRESULT __stdcall proxyIDirect3DDevice7::PreLoad(LPDIRECTDRAWSURFACE7 ARG0)
{
  check(self_->PreLoad(ARG0));
}

HRESULT __stdcall proxyIDirect3DDevice7::DrawPrimitive(D3DPRIMITIVETYPE ARG0, DWORD ARG1, LPVOID ARG2, DWORD ARG3, DWORD ARG4)
{
  check(self_->DrawPrimitive(ARG0, ARG1, ARG2, ARG3, ARG4));
}

HRESULT __stdcall proxyIDirect3DDevice7::DrawIndexedPrimitive(D3DPRIMITIVETYPE ARG0, DWORD ARG1, LPVOID ARG2, DWORD ARG3, LPWORD ARG4, DWORD ARG5, DWORD ARG6)
{
  check(self_->DrawIndexedPrimitive(ARG0, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6));
}

HRESULT __stdcall proxyIDirect3DDevice7::SetClipStatus(LPD3DCLIPSTATUS ARG0)
{
  check(self_->SetClipStatus(ARG0));
}

HRESULT __stdcall proxyIDirect3DDevice7::GetClipStatus(LPD3DCLIPSTATUS ARG0)
{
  check(self_->GetClipStatus(ARG0));
}

HRESULT __stdcall proxyIDirect3DDevice7::DrawPrimitiveStrided(D3DPRIMITIVETYPE ARG0, DWORD ARG1, LPD3DDRAWPRIMITIVESTRIDEDDATA ARG2, DWORD ARG3, DWORD ARG4)
{
  check(self_->DrawPrimitiveStrided(ARG0, ARG1, ARG2, ARG3, ARG4));
}

HRESULT __stdcall proxyIDirect3DDevice7::DrawIndexedPrimitiveStrided(D3DPRIMITIVETYPE ARG0, DWORD ARG1, LPD3DDRAWPRIMITIVESTRIDEDDATA ARG2, DWORD ARG3, LPWORD ARG4, DWORD ARG5, DWORD ARG6)
{
  check(self_->DrawIndexedPrimitiveStrided(ARG0, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6));
}

HRESULT __stdcall proxyIDirect3DDevice7::DrawPrimitiveVB(D3DPRIMITIVETYPE ARG0, LPDIRECT3DVERTEXBUFFER7 ARG1, DWORD ARG2, DWORD ARG3, DWORD ARG4)
{
  check(self_->DrawPrimitiveVB(ARG0, ARG1, ARG2, ARG3, ARG4));
}

HRESULT __stdcall proxyIDirect3DDevice7::DrawIndexedPrimitiveVB(D3DPRIMITIVETYPE ARG0, LPDIRECT3DVERTEXBUFFER7 ARG1, DWORD ARG2, DWORD ARG3, LPWORD ARG4, DWORD ARG5, DWORD ARG6)
{
  check(self_->DrawIndexedPrimitiveVB(ARG0, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6));
}

HRESULT __stdcall proxyIDirect3DDevice7::ComputeSphereVisibility(LPD3DVECTOR ARG0, LPD3DVALUE ARG1, DWORD ARG2, DWORD ARG3, LPDWORD ARG4)
{
  check(self_->ComputeSphereVisibility(ARG0, ARG1, ARG2, ARG3, ARG4));
}

HRESULT __stdcall proxyIDirect3DDevice7::GetTexture(DWORD ARG0, LPDIRECTDRAWSURFACE7 * ARG1)
{
  check(self_->GetTexture(ARG0, ARG1));
}

HRESULT __stdcall proxyIDirect3DDevice7::SetTexture(DWORD ARG0, LPDIRECTDRAWSURFACE7 ARG1)
{
  check(self_->SetTexture(ARG0, ARG1));
}

HRESULT __stdcall proxyIDirect3DDevice7::GetTextureStageState(DWORD ARG0, D3DTEXTURESTAGESTATETYPE ARG1, LPDWORD ARG2)
{
  check(self_->GetTextureStageState(ARG0, ARG1, ARG2));
}

HRESULT __stdcall proxyIDirect3DDevice7::SetTextureStageState(DWORD ARG0, D3DTEXTURESTAGESTATETYPE ARG1, DWORD ARG2)
{
  check(self_->SetTextureStageState(ARG0, ARG1, ARG2));
}

HRESULT __stdcall proxyIDirect3DDevice7::ValidateDevice(LPDWORD ARG0)
{
  check(self_->ValidateDevice(ARG0));
}

HRESULT __stdcall proxyIDirect3DDevice7::ApplyStateBlock(DWORD ARG0)
{
  check(self_->ApplyStateBlock(ARG0));
}

HRESULT __stdcall proxyIDirect3DDevice7::CaptureStateBlock(DWORD ARG0)
{
  check(self_->CaptureStateBlock(ARG0));
}

HRESULT __stdcall proxyIDirect3DDevice7::DeleteStateBlock(DWORD ARG0)
{
  check(self_->DeleteStateBlock(ARG0));
}

HRESULT __stdcall proxyIDirect3DDevice7::CreateStateBlock(D3DSTATEBLOCKTYPE ARG0, LPDWORD ARG1)
{
  check(self_->CreateStateBlock(ARG0, ARG1));
}

HRESULT __stdcall proxyIDirect3DDevice7::Load(LPDIRECTDRAWSURFACE7 ARG0, LPPOINT ARG1, LPDIRECTDRAWSURFACE7 ARG2, LPRECT ARG3, DWORD ARG4)
{
  check(self_->Load(ARG0, ARG1, ARG2, ARG3, ARG4));
}

HRESULT __stdcall proxyIDirect3DDevice7::LightEnable(DWORD ARG0, BOOL ARG1)
{
  check(self_->LightEnable(ARG0, ARG1));
}

HRESULT __stdcall proxyIDirect3DDevice7::GetLightEnable(DWORD ARG0, BOOL* ARG1)
{
  check(self_->GetLightEnable(ARG0, ARG1));
}

HRESULT __stdcall proxyIDirect3DDevice7::SetClipPlane(DWORD ARG0, D3DVALUE* ARG1)
{
  check(self_->SetClipPlane(ARG0, ARG1));
}

HRESULT __stdcall proxyIDirect3DDevice7::GetClipPlane(DWORD ARG0, D3DVALUE* ARG1)
{
  check(self_->GetClipPlane(ARG0, ARG1));
}

HRESULT __stdcall proxyIDirect3DDevice7::GetInfo(DWORD ARG0, LPVOID ARG1, DWORD ARG2)
{
  check(self_->GetInfo(ARG0, ARG1, ARG2));
}

