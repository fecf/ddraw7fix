#pragma once
#include <ddraw.h>

interface proxyIDirectDrawPalette : public IDirectDrawPalette
{
public:
  proxyIDirectDrawPalette(IDirectDrawPalette** ppOrigInterface);
  virtual ~proxyIDirectDrawPalette();

  virtual HRESULT __stdcall GetCaps(LPDWORD ARG0);
  virtual HRESULT __stdcall GetEntries(DWORD ARG0, DWORD ARG1, DWORD ARG2, LPPALETTEENTRY ARG3);
  virtual HRESULT __stdcall Initialize(LPDIRECTDRAW ARG0, DWORD ARG1, LPPALETTEENTRY ARG2);
  virtual HRESULT __stdcall SetEntries(DWORD ARG0, DWORD ARG1, DWORD ARG2, LPPALETTEENTRY ARG3);

private:
  IDirectDrawPalette* self_;
};