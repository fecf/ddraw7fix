#pragma once
#include <d3d.h>

interface proxyIDirect3DMaterial : public IDirect3DMaterial
{
public:
  proxyIDirect3DMaterial(IDirect3DMaterial** ppOrigInterface);
  virtual ~proxyIDirect3DMaterial();

  virtual HRESULT __stdcall QueryInterface(REFIID riid, LPVOID * ppvObj);
  virtual ULONG __stdcall AddRef(void);
  virtual ULONG __stdcall Release(void);
  virtual HRESULT __stdcall Initialize(LPDIRECT3D ARG0);
  virtual HRESULT __stdcall SetMaterial(LPD3DMATERIAL ARG0);
  virtual HRESULT __stdcall GetMaterial(LPD3DMATERIAL ARG0);
  virtual HRESULT __stdcall GetHandle(LPDIRECT3DDEVICE ARG0, LPD3DMATERIALHANDLE ARG1);
  virtual HRESULT __stdcall Reserve(void);
  virtual HRESULT __stdcall Unreserve(void);

private:
  IDirect3DMaterial* self_;
};