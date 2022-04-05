#pragma once
#include <d3d.h>

interface proxyIDirect3DMaterial2 : public IDirect3DMaterial2
{
public:
  proxyIDirect3DMaterial2(IDirect3DMaterial2** ppOrigInterface);
  virtual ~proxyIDirect3DMaterial2();

  virtual HRESULT __stdcall QueryInterface(REFIID riid, LPVOID * ppvObj);
  virtual ULONG __stdcall AddRef(void);
  virtual ULONG __stdcall Release(void);
  virtual HRESULT __stdcall SetMaterial(LPD3DMATERIAL ARG0);
  virtual HRESULT __stdcall GetMaterial(LPD3DMATERIAL ARG0);
  virtual HRESULT __stdcall GetHandle(LPDIRECT3DDEVICE2 ARG0, LPD3DMATERIALHANDLE ARG1);

private:
  IDirect3DMaterial2* self_;
};