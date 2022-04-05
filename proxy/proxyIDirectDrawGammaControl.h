#pragma once
#include <ddraw.h>

interface proxyIDirectDrawGammaControl : public IDirectDrawGammaControl
{
public:
  proxyIDirectDrawGammaControl(IDirectDrawGammaControl** ppOrigInterface);
  virtual ~proxyIDirectDrawGammaControl();

  virtual HRESULT __stdcall GetGammaRamp(DWORD ARG0, LPDDGAMMARAMP ARG1);
  virtual HRESULT __stdcall SetGammaRamp(DWORD ARG0, LPDDGAMMARAMP ARG1);

private:
  IDirectDrawGammaControl* self_;
};