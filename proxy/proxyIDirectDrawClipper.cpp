#include "proxyIDirectDrawClipper.h"

proxyIDirectDrawClipper::proxyIDirectDrawClipper(IDirectDrawClipper** ppOrigInterface)
{
  this->self_ = *ppOrigInterface;
}

proxyIDirectDrawClipper::~proxyIDirectDrawClipper()
{
}

HRESULT __stdcall proxyIDirectDrawClipper::GetClipList(LPRECT ARG0, LPRGNDATA ARG1, LPDWORD ARG2)
{
  return self_->GetClipList(ARG0, ARG1, ARG2);
}

HRESULT __stdcall proxyIDirectDrawClipper::GetHWnd(HWND * ARG0)
{
  return self_->GetHWnd(ARG0);
}

HRESULT __stdcall proxyIDirectDrawClipper::Initialize(LPDIRECTDRAW ARG0, DWORD ARG1)
{
  return self_->Initialize(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawClipper::IsClipListChanged(BOOL * ARG0)
{
  return self_->IsClipListChanged(ARG0);
}

HRESULT __stdcall proxyIDirectDrawClipper::SetClipList(LPRGNDATA ARG0, DWORD ARG1)
{
  return self_->SetClipList(ARG0, ARG1);
}

HRESULT __stdcall proxyIDirectDrawClipper::SetHWnd(DWORD ARG0, HWND ARG1)
{
  return self_->SetHWnd(ARG0, ARG1);
}

