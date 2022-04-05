#pragma once
#include <d3d.h>

interface proxyIDirect3DLight : public IDirect3DLight
{
public:
  proxyIDirect3DLight(IDirect3DLight** ppOrigInterface);
  virtual ~proxyIDirect3DLight();

  virtual HRESULT __stdcall QueryInterface(REFIID riid, LPVOID * ppvObj);
  virtual ULONG __stdcall AddRef(void);
  virtual ULONG __stdcall Release(void);
  virtual HRESULT __stdcall Initialize(LPDIRECT3D ARG0);
  virtual HRESULT __stdcall SetLight(LPD3DLIGHT ARG0);
  virtual HRESULT __stdcall GetLight(LPD3DLIGHT ARG0);

private:
  IDirect3DLight* self_;
};