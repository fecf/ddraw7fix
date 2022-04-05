#pragma once
#include <d3d.h>

interface proxyIDirect3D7 : public IDirect3D7
{
public:
  proxyIDirect3D7(IDirect3D7** ppOrigInterface);
  virtual ~proxyIDirect3D7();

  virtual HRESULT __stdcall QueryInterface(REFIID riid, LPVOID * ppvObj);
  virtual ULONG __stdcall AddRef(void);
  virtual ULONG __stdcall Release(void);
  virtual HRESULT __stdcall EnumDevices(LPD3DENUMDEVICESCALLBACK7 ARG0, LPVOID ARG1);
  virtual HRESULT __stdcall CreateDevice(REFCLSID ARG0, LPDIRECTDRAWSURFACE7 ARG1, LPDIRECT3DDEVICE7* ARG2);
  virtual HRESULT __stdcall CreateVertexBuffer(LPD3DVERTEXBUFFERDESC ARG0, LPDIRECT3DVERTEXBUFFER7* ARG1, DWORD ARG2);
  virtual HRESULT __stdcall EnumZBufferFormats(REFCLSID ARG0, LPD3DENUMPIXELFORMATSCALLBACK ARG1, LPVOID ARG2);
  virtual HRESULT __stdcall EvictManagedTextures(void);

  IDirect3D7* self_;
};