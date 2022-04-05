#pragma once
#include <d3d.h>

interface proxyIDirect3DDevice : public IDirect3DDevice
{
public:
  proxyIDirect3DDevice(IDirect3DDevice** ppOrigInterface);
  virtual ~proxyIDirect3DDevice();

  virtual HRESULT __stdcall QueryInterface(REFIID riid, LPVOID * ppvObj);
  virtual ULONG __stdcall AddRef(void);
  virtual ULONG __stdcall Release(void);
  virtual HRESULT __stdcall Initialize(LPDIRECT3D ARG0, LPGUID ARG1, LPD3DDEVICEDESC ARG2);
  virtual HRESULT __stdcall GetCaps(LPD3DDEVICEDESC ARG0, LPD3DDEVICEDESC ARG1);
  virtual HRESULT __stdcall SwapTextureHandles(LPDIRECT3DTEXTURE ARG0, LPDIRECT3DTEXTURE ARG1);
  virtual HRESULT __stdcall CreateExecuteBuffer(LPD3DEXECUTEBUFFERDESC ARG0, LPDIRECT3DEXECUTEBUFFER* ARG1, IUnknown* ARG2);
  virtual HRESULT __stdcall GetStats(LPD3DSTATS ARG0);
  virtual HRESULT __stdcall Execute(LPDIRECT3DEXECUTEBUFFER ARG0, LPDIRECT3DVIEWPORT ARG1, DWORD ARG2);
  virtual HRESULT __stdcall AddViewport(LPDIRECT3DVIEWPORT ARG0);
  virtual HRESULT __stdcall DeleteViewport(LPDIRECT3DVIEWPORT ARG0);
  virtual HRESULT __stdcall NextViewport(LPDIRECT3DVIEWPORT ARG0, LPDIRECT3DVIEWPORT* ARG1, DWORD ARG2);
  virtual HRESULT __stdcall Pick(LPDIRECT3DEXECUTEBUFFER ARG0, LPDIRECT3DVIEWPORT ARG1, DWORD ARG2, LPD3DRECT ARG3);
  virtual HRESULT __stdcall GetPickRecords(LPDWORD ARG0, LPD3DPICKRECORD ARG1);
  virtual HRESULT __stdcall EnumTextureFormats(LPD3DENUMTEXTUREFORMATSCALLBACK ARG0, LPVOID ARG1);
  virtual HRESULT __stdcall CreateMatrix(LPD3DMATRIXHANDLE ARG0);
  virtual HRESULT __stdcall SetMatrix(D3DMATRIXHANDLE ARG0, const LPD3DMATRIX ARG1);
  virtual HRESULT __stdcall GetMatrix(D3DMATRIXHANDLE ARG0, LPD3DMATRIX ARG1);
  virtual HRESULT __stdcall DeleteMatrix(D3DMATRIXHANDLE ARG0);
  virtual HRESULT __stdcall BeginScene(void);
  virtual HRESULT __stdcall EndScene(void);
  virtual HRESULT __stdcall GetDirect3D(LPDIRECT3D* ARG0);

private:
  IDirect3DDevice* self_;
};