#pragma once
#include <d3d.h>

interface proxyIDirect3DTexture : public IDirect3DTexture
{
public:
  proxyIDirect3DTexture(IDirect3DTexture** ppOrigInterface);
  virtual ~proxyIDirect3DTexture();

  virtual HRESULT __stdcall QueryInterface(REFIID riid, LPVOID * ppvObj);
  virtual ULONG __stdcall AddRef(void);
  virtual ULONG __stdcall Release(void);
  virtual HRESULT __stdcall Initialize(LPDIRECT3DDEVICE ARG0, LPDIRECTDRAWSURFACE ARG1);
  virtual HRESULT __stdcall GetHandle(LPDIRECT3DDEVICE ARG0, LPD3DTEXTUREHANDLE ARG1);
  virtual HRESULT __stdcall PaletteChanged(DWORD ARG0, DWORD ARG1);
  virtual HRESULT __stdcall Load(LPDIRECT3DTEXTURE ARG0);
  virtual HRESULT __stdcall Unload(void);

private:
  IDirect3DTexture* self_;
};