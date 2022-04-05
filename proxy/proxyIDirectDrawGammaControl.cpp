#include "proxyIDirectDrawGammaControl.h"

proxyIDirectDrawGammaControl::proxyIDirectDrawGammaControl(IDirectDrawGammaControl** ppOrigInterface)
{
  this->self_ = *ppOrigInterface;
}

proxyIDirectDrawGammaControl::~proxyIDirectDrawGammaControl()
{
}

HRESULT __stdcall proxyIDirectDrawGammaControl::GetGammaRamp(DWORD ARG0, LPDDGAMMARAMP ARG1)
{
  return self_->GetGammaRamp(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawGammaControl::SetGammaRamp(DWORD ARG0, LPDDGAMMARAMP ARG1)
{
  return self_->SetGammaRamp(ARG0, ARG1);
}

