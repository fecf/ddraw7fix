#pragma once
#include <d3d.h>

interface proxyIDirect3DMaterial3 : public IDirect3DMaterial3
{
public:
  proxyIDirect3DMaterial3(IDirect3DMaterial3** ppOrigInterface);
  virtual ~proxyIDirect3DMaterial3();

  virtual HRESULT __stdcall QueryInterface(REFIID riid, LPVOID * ppvObj);
  virtual ULONG __stdcall AddRef(void);
  virtual ULONG __stdcall Release(void);
  virtual HRESULT __stdcall SetMaterial(LPD3DMATERIAL ARG0);
  virtual HRESULT __stdcall GetMaterial(LPD3DMATERIAL ARG0);
  virtual HRESULT __stdcall GetHandle(LPDIRECT3DDEVICE3 ARG0, LPD3DMATERIALHANDLE ARG1);

private:
  IDirect3DMaterial3* self_;
};