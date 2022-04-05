#pragma once
#include <ddraw.h>

interface proxyIDirectDrawClipper : public IDirectDrawClipper
{
public:
  proxyIDirectDrawClipper(IDirectDrawClipper** ppOrigInterface);
  virtual ~proxyIDirectDrawClipper();

  virtual HRESULT __stdcall GetClipList(LPRECT ARG0, LPRGNDATA ARG1, LPDWORD ARG2);
  virtual HRESULT __stdcall GetHWnd(HWND * ARG0);
  virtual HRESULT __stdcall Initialize(LPDIRECTDRAW ARG0, DWORD ARG1);
  virtual HRESULT __stdcall IsClipListChanged(BOOL * ARG0);
  virtual HRESULT __stdcall SetClipList(LPRGNDATA ARG0, DWORD ARG1);
  virtual HRESULT __stdcall SetHWnd(DWORD ARG0, HWND ARG1);

private:
  IDirectDrawClipper* self_;
};