#pragma once
#include <d3d.h>

interface proxyIDirect3D : public IDirect3D
{
public:
  proxyIDirect3D(IDirect3D** ppOrigInterface);
  virtual ~proxyIDirect3D();

  virtual HRESULT __stdcall QueryInterface(REFIID riid, LPVOID * ppvObj);
  virtual ULONG __stdcall AddRef(void);
  virtual ULONG __stdcall Release(void);
  virtual HRESULT __stdcall Initialize(REFCLSID ARG0);
  virtual HRESULT __stdcall EnumDevices(LPD3DENUMDEVICESCALLBACK ARG0, LPVOID ARG1);
  virtual HRESULT __stdcall CreateLight(LPDIRECT3DLIGHT* ARG0, IUnknown* ARG1);
  virtual HRESULT __stdcall CreateMaterial(LPDIRECT3DMATERIAL* ARG0, IUnknown* ARG1);
  virtual HRESULT __stdcall CreateViewport(LPDIRECT3DVIEWPORT* ARG0, IUnknown* ARG1);
  virtual HRESULT __stdcall FindDevice(LPD3DFINDDEVICESEARCH ARG0, LPD3DFINDDEVICERESULT ARG1);

private:
  IDirect3D* self_;
};