#pragma once
#include <d3d.h>

interface proxyIDirect3DExecuteBuffer : public IDirect3DExecuteBuffer
{
public:
  proxyIDirect3DExecuteBuffer(IDirect3DExecuteBuffer** ppOrigInterface);
  virtual ~proxyIDirect3DExecuteBuffer();

  virtual HRESULT __stdcall QueryInterface(REFIID riid, LPVOID * ppvObj);
  virtual ULONG __stdcall AddRef(void);
  virtual ULONG __stdcall Release(void);
  virtual HRESULT __stdcall Initialize(LPDIRECT3DDEVICE ARG0, LPD3DEXECUTEBUFFERDESC ARG1);
  virtual HRESULT __stdcall Lock(LPD3DEXECUTEBUFFERDESC ARG0);
  virtual HRESULT __stdcall Unlock(void);
  virtual HRESULT __stdcall SetExecuteData(LPD3DEXECUTEDATA ARG0);
  virtual HRESULT __stdcall GetExecuteData(LPD3DEXECUTEDATA ARG0);
  virtual HRESULT __stdcall Validate(LPDWORD ARG0, LPD3DVALIDATECALLBACK ARG1, LPVOID ARG2, DWORD ARG3);
  virtual HRESULT __stdcall Optimize(DWORD ARG0);

private:
  IDirect3DExecuteBuffer* self_;
};