// TSBuild.exe — runtime / library code "OWL_TControlEnabler"
// 4 functions, 0x00440398..0x0044049c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00440398  OWL::TControlEnabler::TControlEnabler   (59 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TControlEnabler's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TControlEnabler::TControlEnabler(undefined4 *self,undefined4 param_2,undefined4 param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x480070);
  OWL::TCommandEnabler::TCommandEnabler(self,param_2,param_3);
  *self = &OWL::TControlEnabler::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004403d4  OWL::TControlEnabler::vf0   (62 bytes)   [rtti:vtable virtual slot 0]
void __cdecl OWL::TControlEnabler::vf0(int self,byte enable)

{
  BOOL ok;
  
  ok = IsWindowEnabled(*(HWND *)(self + 8));
  if ((bool)enable != (ok != 0)) {
    EnableWindow(*(HWND *)(self + 8),(uint)enable);
  }
  OWL::TCommandEnabler::vf0(self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00440414  OWL::TControlEnabler::vf1   (135 bytes)   [rtti:vtable virtual slot 1]
void __cdecl OWL::TControlEnabler::vf1(int self,char *string_)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  LPSTR tmpBufferBase [2];
  
  __InitExceptBlockLDTC(0x480098);
  FUN_0042b3f0((int *)tmpBufferBase,0x104);
  GetWindowTextA(*(HWND *)(self + 8),tmpBufferBase[0],0x104);
  iVar1 = FUN_00467724(tmpBufferBase[0],string_);
  if (iVar1 != 0) {
    SetWindowTextA(*(HWND *)(self + 8),string_);
  }
  OWL::TTmpBufferBase::_dtor((undefined4*)tmpBufferBase,0);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044049c  OWL::TControlEnabler::vf2   (52 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TControlEnabler::vf2(int self,WPARAM wParam)

{
  WPARAM wParam2;
  
  wParam2 = SendMessageA(*(HWND *)(self + 8),0xf0,0,0);
  if (wParam != wParam2) {
    SendMessageA(*(HWND *)(self + 8),0xf1,wParam,0);
  }
  return;
}

} // namespace tea
