#pragma once
#include <d3d.h>

interface proxyIDirect3DViewport : public IDirect3DViewport
{
public:
  proxyIDirect3DViewport(IDirect3DViewport** ppOrigInterface);
  virtual ~proxyIDirect3DViewport();

  virtual HRESULT __stdcall QueryInterface(REFIID riid, LPVOID * ppvObj);
  virtual ULONG __stdcall AddRef(void);
  virtual ULONG __stdcall Release(void);
  virtual HRESULT __stdcall Initialize(LPDIRECT3D ARG0);
  virtual HRESULT __stdcall GetViewport(LPD3DVIEWPORT ARG0);
  virtual HRESULT __stdcall SetViewport(LPD3DVIEWPORT ARG0);
  virtual HRESULT __stdcall TransformVertices(DWORD ARG0, LPD3DTRANSFORMDATA ARG1, DWORD ARG2, LPDWORD ARG3);
  virtual HRESULT __stdcall LightElements(DWORD ARG0, LPD3DLIGHTDATA ARG1);
  virtual HRESULT __stdcall SetBackground(D3DMATERIALHANDLE ARG0);
  virtual HRESULT __stdcall GetBackground(LPD3DMATERIALHANDLE ARG0, LPBOOL ARG1);
  virtual HRESULT __stdcall SetBackgroundDepth(LPDIRECTDRAWSURFACE ARG0);
  virtual HRESULT __stdcall GetBackgroundDepth(LPDIRECTDRAWSURFACE* ARG0, LPBOOL ARG1);
  virtual HRESULT __stdcall Clear(DWORD ARG0, LPD3DRECT ARG1, DWORD ARG2);
  virtual HRESULT __stdcall AddLight(LPDIRECT3DLIGHT ARG0);
  virtual HRESULT __stdcall DeleteLight(LPDIRECT3DLIGHT ARG0);
  virtual HRESULT __stdcall NextLight(LPDIRECT3DLIGHT ARG0, LPDIRECT3DLIGHT* ARG1, DWORD ARG2);

private:
  IDirect3DViewport* self_;
};