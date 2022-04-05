#pragma once
#include <d3d.h>

interface proxyIDirect3DDevice2 : public IDirect3DDevice2
{
public:
  proxyIDirect3DDevice2(IDirect3DDevice2** ppOrigInterface);
  virtual ~proxyIDirect3DDevice2();

  virtual HRESULT __stdcall QueryInterface(REFIID riid, LPVOID * ppvObj);
  virtual ULONG __stdcall AddRef(void);
  virtual ULONG __stdcall Release(void);
  virtual HRESULT __stdcall GetCaps(LPD3DDEVICEDESC ARG0, LPD3DDEVICEDESC ARG1);
  virtual HRESULT __stdcall SwapTextureHandles(LPDIRECT3DTEXTURE2 ARG0, LPDIRECT3DTEXTURE2 ARG1);
  virtual HRESULT __stdcall GetStats(LPD3DSTATS ARG0);
  virtual HRESULT __stdcall AddViewport(LPDIRECT3DVIEWPORT2 ARG0);
  virtual HRESULT __stdcall DeleteViewport(LPDIRECT3DVIEWPORT2 ARG0);
  virtual HRESULT __stdcall NextViewport(LPDIRECT3DVIEWPORT2 ARG0, LPDIRECT3DVIEWPORT2* ARG1, DWORD ARG2);
  virtual HRESULT __stdcall EnumTextureFormats(LPD3DENUMTEXTUREFORMATSCALLBACK ARG0, LPVOID ARG1);
  virtual HRESULT __stdcall BeginScene(void);
  virtual HRESULT __stdcall EndScene(void);
  virtual HRESULT __stdcall GetDirect3D(LPDIRECT3D2* ARG0);
  virtual HRESULT __stdcall SetCurrentViewport(LPDIRECT3DVIEWPORT2 ARG0);
  virtual HRESULT __stdcall GetCurrentViewport(LPDIRECT3DVIEWPORT2 * ARG0);
  virtual HRESULT __stdcall SetRenderTarget(LPDIRECTDRAWSURFACE ARG0, DWORD ARG1);
  virtual HRESULT __stdcall GetRenderTarget(LPDIRECTDRAWSURFACE * ARG0);
  virtual HRESULT __stdcall Begin(D3DPRIMITIVETYPE ARG0, D3DVERTEXTYPE ARG1, DWORD ARG2);
  virtual HRESULT __stdcall BeginIndexed(D3DPRIMITIVETYPE ARG0, D3DVERTEXTYPE ARG1, LPVOID ARG2, DWORD ARG3, DWORD ARG4);
  virtual HRESULT __stdcall Vertex(LPVOID ARG0);
  virtual HRESULT __stdcall Index(WORD ARG0);
  virtual HRESULT __stdcall End(DWORD ARG0);
  virtual HRESULT __stdcall GetRenderState(D3DRENDERSTATETYPE ARG0, LPDWORD ARG1);
  virtual HRESULT __stdcall SetRenderState(D3DRENDERSTATETYPE ARG0, DWORD ARG1);
  virtual HRESULT __stdcall GetLightState(D3DLIGHTSTATETYPE ARG0, LPDWORD ARG1);
  virtual HRESULT __stdcall SetLightState(D3DLIGHTSTATETYPE ARG0, DWORD ARG1);
  virtual HRESULT __stdcall SetTransform(D3DTRANSFORMSTATETYPE ARG0, LPD3DMATRIX ARG1);
  virtual HRESULT __stdcall GetTransform(D3DTRANSFORMSTATETYPE ARG0, LPD3DMATRIX ARG1);
  virtual HRESULT __stdcall MultiplyTransform(D3DTRANSFORMSTATETYPE ARG0, LPD3DMATRIX ARG1);
  virtual HRESULT __stdcall DrawPrimitive(D3DPRIMITIVETYPE ARG0, D3DVERTEXTYPE ARG1, LPVOID ARG2, DWORD ARG3, DWORD ARG4);
  virtual HRESULT __stdcall DrawIndexedPrimitive(D3DPRIMITIVETYPE ARG0, D3DVERTEXTYPE ARG1, LPVOID ARG2, DWORD ARG3, LPWORD ARG4, DWORD ARG5, DWORD ARG6);
  virtual HRESULT __stdcall SetClipStatus(LPD3DCLIPSTATUS ARG0);
  virtual HRESULT __stdcall GetClipStatus(LPD3DCLIPSTATUS ARG0);

private:
  IDirect3DDevice2* self_;
};