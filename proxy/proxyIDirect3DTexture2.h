#pragma once
#include <d3d.h>

interface proxyIDirect3DTexture2 : public IDirect3DTexture2
{
public:
  proxyIDirect3DTexture2(IDirect3DTexture2** ppOrigInterface);
  virtual ~proxyIDirect3DTexture2();

  virtual HRESULT __stdcall QueryInterface(REFIID riid, LPVOID * ppvObj);
  virtual ULONG __stdcall AddRef(void);
  virtual ULONG __stdcall Release(void);
  virtual HRESULT __stdcall GetHandle(LPDIRECT3DDEVICE2 ARG0, LPD3DTEXTUREHANDLE ARG1);
  virtual HRESULT __stdcall PaletteChanged(DWORD ARG0, DWORD ARG1);
  virtual HRESULT __stdcall Load(LPDIRECT3DTEXTURE2 ARG0);

private:
  IDirect3DTexture2* self_;
};