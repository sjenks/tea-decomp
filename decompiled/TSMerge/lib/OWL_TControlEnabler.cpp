// TSMerge.exe — runtime / library code "OWL_TControlEnabler"
// 3 functions, 0x00435240..0x00435308. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00435240  OWL::TControlEnabler::vf0   (62 bytes)   [rtti:vtable virtual slot 0]
void __cdecl OWL::TControlEnabler::vf0(int param_1,byte param_2)

{
  BOOL BVar1;
  
  BVar1 = IsWindowEnabled(*(HWND *)(param_1 + 8));
  if ((bool)param_2 != (BVar1 != 0)) {
    EnableWindow(*(HWND *)(param_1 + 8),(uint)param_2);
  }
  OWL::TCommandEnabler::vf0(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435280  OWL::TControlEnabler::vf1   (135 bytes)   [rtti:vtable virtual slot 1]
void __cdecl OWL::TControlEnabler::vf1(int param_1,char *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  LPSTR local_c [2];
  
  __InitExceptBlockLDTC(0x46c2bc);
  FUN_0042027c((int *)local_c,0x104);
  GetWindowTextA(*(HWND *)(param_1 + 8),local_c[0],0x104);
  iVar1 = FUN_00455b74(local_c[0],param_2);
  if (iVar1 != 0) {
    SetWindowTextA(*(HWND *)(param_1 + 8),param_2);
  }
  OWL::TTmpBufferBase::_dtor((undefined4*)local_c,0);
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435308  OWL::TControlEnabler::vf2   (52 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TControlEnabler::vf2(int param_1,WPARAM param_2)

{
  WPARAM WVar1;
  
  WVar1 = SendMessageA(*(HWND *)(param_1 + 8),0xf0,0,0);
  if (param_2 != WVar1) {
    SendMessageA(*(HWND *)(param_1 + 8),0xf1,param_2,0);
  }
  return;
}

} // namespace tea
