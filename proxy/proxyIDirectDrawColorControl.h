#pragma once
#include <ddraw.h>

interface proxyIDirectDrawColorControl : public IDirectDrawColorControl
{
public:
  proxyIDirectDrawColorControl(IDirectDrawColorControl** ppOrigInterface);
  virtual ~proxyIDirectDrawColorControl();

  virtual HRESULT __stdcall GetColorControls(LPDDCOLORCONTROL ARG0);
  virtual HRESULT __stdcall SetColorControls(LPDDCOLORCONTROL ARG0);

private:
  IDirectDrawColorControl* self_;
};