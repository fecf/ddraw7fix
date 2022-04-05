#include "proxyIDirectDrawPalette.h"

proxyIDirectDrawPalette::proxyIDirectDrawPalette(IDirectDrawPalette** ppOrigInterface)
{
  this->self_ = *ppOrigInterface;
}

proxyIDirectDrawPalette::~proxyIDirectDrawPalette()
{
}

HRESULT __stdcall proxyIDirectDrawPalette::GetCaps(LPDWORD ARG0)
{
  return self_->GetCaps(ARG0);
}

HRESULT __stdcall proxyIDirectDrawPalette::GetEntries(DWORD ARG0, DWORD ARG1, DWORD ARG2, LPPALETTEENTRY ARG3)
{
  return self_->GetEntries(ARG0, ARG1, ARG2, ARG3);
}

HRESULT __stdcall proxyIDirectDrawPalette::Initialize(LPDIRECTDRAW ARG0, DWORD ARG1, LPPALETTEENTRY ARG2)
{
  return self_->Initialize(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirectDrawPalette::SetEntries(DWORD ARG0, DWORD ARG1, DWORD ARG2, LPPALETTEENTRY ARG3)
{
  return self_->SetEntries(ARG0, ARG1, ARG2, ARG3);
}

