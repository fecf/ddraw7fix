#pragma once
#include <d3d.h>

interface proxyIDirect3DDevice7 : public IDirect3DDevice7
{
public:
  proxyIDirect3DDevice7(IDirect3DDevice7** ppOrigInterface);
  virtual ~proxyIDirect3DDevice7();

  virtual HRESULT __stdcall QueryInterface(REFIID riid, LPVOID * ppvObj);
  virtual ULONG __stdcall AddRef(void);
  virtual ULONG __stdcall Release(void);
  virtual HRESULT __stdcall GetCaps(LPD3DDEVICEDESC7 ARG0);
  virtual HRESULT __stdcall EnumTextureFormats(LPD3DENUMPIXELFORMATSCALLBACK ARG0, LPVOID ARG1);
  virtual HRESULT __stdcall BeginScene(void);
  virtual HRESULT __stdcall EndScene(void);
  virtual HRESULT __stdcall GetDirect3D(LPDIRECT3D7* ARG0);
  virtual HRESULT __stdcall SetRenderTarget(LPDIRECTDRAWSURFACE7 ARG0, DWORD ARG1);
  virtual HRESULT __stdcall GetRenderTarget(LPDIRECTDRAWSURFACE7 * ARG0);
  virtual HRESULT __stdcall Clear(DWORD ARG0, LPD3DRECT ARG1, DWORD ARG2, D3DCOLOR ARG3, D3DVALUE ARG4, DWORD ARG5);
  virtual HRESULT __stdcall SetTransform(D3DTRANSFORMSTATETYPE ARG0, LPD3DMATRIX ARG1);
  virtual HRESULT __stdcall GetTransform(D3DTRANSFORMSTATETYPE ARG0, LPD3DMATRIX ARG1);
  virtual HRESULT __stdcall SetViewport(LPD3DVIEWPORT7 ARG0);
  virtual HRESULT __stdcall MultiplyTransform(D3DTRANSFORMSTATETYPE ARG0, LPD3DMATRIX ARG1);
  virtual HRESULT __stdcall GetViewport(LPD3DVIEWPORT7 ARG0);
  virtual HRESULT __stdcall SetMaterial(LPD3DMATERIAL7 ARG0);
  virtual HRESULT __stdcall GetMaterial(LPD3DMATERIAL7 ARG0);
  virtual HRESULT __stdcall SetLight(DWORD ARG0, LPD3DLIGHT7 ARG1);
  virtual HRESULT __stdcall GetLight(DWORD ARG0, LPD3DLIGHT7 ARG1);
  virtual HRESULT __stdcall SetRenderState(D3DRENDERSTATETYPE ARG0, DWORD ARG1);
  virtual HRESULT __stdcall GetRenderState(D3DRENDERSTATETYPE ARG0, LPDWORD ARG1);
  virtual HRESULT __stdcall BeginStateBlock(void);
  virtual HRESULT __stdcall EndStateBlock(LPDWORD ARG0);
  virtual HRESULT __stdcall PreLoad(LPDIRECTDRAWSURFACE7 ARG0);
  virtual HRESULT __stdcall DrawPrimitive(D3DPRIMITIVETYPE ARG0, DWORD ARG1, LPVOID ARG2, DWORD ARG3, DWORD ARG4);
  virtual HRESULT __stdcall DrawIndexedPrimitive(D3DPRIMITIVETYPE ARG0, DWORD ARG1, LPVOID ARG2, DWORD ARG3, LPWORD ARG4, DWORD ARG5, DWORD ARG6);
  virtual HRESULT __stdcall SetClipStatus(LPD3DCLIPSTATUS ARG0);
  virtual HRESULT __stdcall GetClipStatus(LPD3DCLIPSTATUS ARG0);
  virtual HRESULT __stdcall DrawPrimitiveStrided(D3DPRIMITIVETYPE ARG0, DWORD ARG1, LPD3DDRAWPRIMITIVESTRIDEDDATA ARG2, DWORD ARG3, DWORD ARG4);
  virtual HRESULT __stdcall DrawIndexedPrimitiveStrided(D3DPRIMITIVETYPE ARG0, DWORD ARG1, LPD3DDRAWPRIMITIVESTRIDEDDATA ARG2, DWORD ARG3, LPWORD ARG4, DWORD ARG5, DWORD ARG6);
  virtual HRESULT __stdcall DrawPrimitiveVB(D3DPRIMITIVETYPE ARG0, LPDIRECT3DVERTEXBUFFER7 ARG1, DWORD ARG2, DWORD ARG3, DWORD ARG4);
  virtual HRESULT __stdcall DrawIndexedPrimitiveVB(D3DPRIMITIVETYPE ARG0, LPDIRECT3DVERTEXBUFFER7 ARG1, DWORD ARG2, DWORD ARG3, LPWORD ARG4, DWORD ARG5, DWORD ARG6);
  virtual HRESULT __stdcall ComputeSphereVisibility(LPD3DVECTOR ARG0, LPD3DVALUE ARG1, DWORD ARG2, DWORD ARG3, LPDWORD ARG4);
  virtual HRESULT __stdcall GetTexture(DWORD ARG0, LPDIRECTDRAWSURFACE7 * ARG1);
  virtual HRESULT __stdcall SetTexture(DWORD ARG0, LPDIRECTDRAWSURFACE7 ARG1);
  virtual HRESULT __stdcall GetTextureStageState(DWORD ARG0, D3DTEXTURESTAGESTATETYPE ARG1, LPDWORD ARG2);
  virtual HRESULT __stdcall SetTextureStageState(DWORD ARG0, D3DTEXTURESTAGESTATETYPE ARG1, DWORD ARG2);
  virtual HRESULT __stdcall ValidateDevice(LPDWORD ARG0);
  virtual HRESULT __stdcall ApplyStateBlock(DWORD ARG0);
  virtual HRESULT __stdcall CaptureStateBlock(DWORD ARG0);
  virtual HRESULT __stdcall DeleteStateBlock(DWORD ARG0);
  virtual HRESULT __stdcall CreateStateBlock(D3DSTATEBLOCKTYPE ARG0, LPDWORD ARG1);
  virtual HRESULT __stdcall Load(LPDIRECTDRAWSURFACE7 ARG0, LPPOINT ARG1, LPDIRECTDRAWSURFACE7 ARG2, LPRECT ARG3, DWORD ARG4);
  virtual HRESULT __stdcall LightEnable(DWORD ARG0, BOOL ARG1);
  virtual HRESULT __stdcall GetLightEnable(DWORD ARG0, BOOL* ARG1);
  virtual HRESULT __stdcall SetClipPlane(DWORD ARG0, D3DVALUE* ARG1);
  virtual HRESULT __stdcall GetClipPlane(DWORD ARG0, D3DVALUE* ARG1);
  virtual HRESULT __stdcall GetInfo(DWORD ARG0, LPVOID ARG1, DWORD ARG2);
  IDirect3DDevice7* self_;
};