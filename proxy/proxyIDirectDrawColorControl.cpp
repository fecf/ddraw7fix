#include "proxyIDirectDrawColorControl.h"

proxyIDirectDrawColorControl::proxyIDirectDrawColorControl(IDirectDrawColorControl** ppOrigInterface)
{
  this->self_ = *ppOrigInterface;
}

proxyIDirectDrawColorControl::~proxyIDirectDrawColorControl()
{
}

HRESULT __stdcall proxyIDirectDrawColorControl::GetColorControls(LPDDCOLORCONTROL ARG0)
{
  return self_->GetColorControls(ARG0);
}

HRESULT __stdcall proxyIDirectDrawColorControl::SetColorControls(LPDDCOLORCONTROL ARG0)
{
  return self_->SetColorControls(ARG0);
}

