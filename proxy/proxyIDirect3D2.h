#pragma once
#include <d3d.h>

interface proxyIDirect3D2 : public IDirect3D2
{
public:
  proxyIDirect3D2(IDirect3D2** ppOrigInterface);
  virtual ~proxyIDirect3D2();

  virtual HRESULT __stdcall QueryInterface(REFIID riid, LPVOID * ppvObj);
  virtual ULONG __stdcall AddRef(void);
  virtual ULONG __stdcall Release(void);
  virtual HRESULT __stdcall EnumDevices(LPD3DENUMDEVICESCALLBACK ARG0, LPVOID ARG1);
  virtual HRESULT __stdcall CreateLight(LPDIRECT3DLIGHT* ARG0, IUnknown* ARG1);
  virtual HRESULT __stdcall CreateMaterial(LPDIRECT3DMATERIAL2* ARG0, IUnknown* ARG1);
  virtual HRESULT __stdcall CreateViewport(LPDIRECT3DVIEWPORT2* ARG0, IUnknown* ARG1);
  virtual HRESULT __stdcall FindDevice(LPD3DFINDDEVICESEARCH ARG0, LPD3DFINDDEVICERESULT ARG1);
  virtual HRESULT __stdcall CreateDevice(REFCLSID ARG0, LPDIRECTDRAWSURFACE ARG1, LPDIRECT3DDEVICE2* ARG2);

private:
  IDirect3D2* self_;
};