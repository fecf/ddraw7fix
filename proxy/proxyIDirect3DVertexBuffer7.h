#pragma once
#include <d3d.h>

interface proxyIDirect3DVertexBuffer7 : public IDirect3DVertexBuffer7
{
public:
  proxyIDirect3DVertexBuffer7(IDirect3DVertexBuffer7** ppOrigInterface);
  virtual ~proxyIDirect3DVertexBuffer7();

  virtual HRESULT __stdcall QueryInterface(REFIID riid, LPVOID * ppvObj);
  virtual ULONG __stdcall AddRef(void);
  virtual ULONG __stdcall Release(void);
  virtual HRESULT __stdcall Lock(DWORD ARG0, LPVOID* ARG1, LPDWORD ARG2);
  virtual HRESULT __stdcall Unlock(void);
  virtual HRESULT __stdcall ProcessVertices(DWORD ARG0, DWORD ARG1, DWORD ARG2, LPDIRECT3DVERTEXBUFFER7 ARG3, DWORD ARG4, LPDIRECT3DDEVICE7 ARG5, DWORD ARG6);
  virtual HRESULT __stdcall GetVertexBufferDesc(LPD3DVERTEXBUFFERDESC ARG0);
  virtual HRESULT __stdcall Optimize(LPDIRECT3DDEVICE7 ARG0, DWORD ARG1);
  virtual HRESULT __stdcall ProcessVerticesStrided(DWORD ARG0, DWORD ARG1, DWORD ARG2, LPD3DDRAWPRIMITIVESTRIDEDDATA ARG3, DWORD ARG4, LPDIRECT3DDEVICE7 ARG5, DWORD ARG6);

private:
  IDirect3DVertexBuffer7* self_;
};