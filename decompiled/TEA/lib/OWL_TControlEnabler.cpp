// TEA.exe — runtime / library code "OWL_TControlEnabler"
// 3 functions, 0x004b0d60..0x004b0e28. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004b0d60  OWL::TControlEnabler::vf0   (62 bytes)   [rtti:vtable virtual slot 0]
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
// 0x004b0da0  OWL::TControlEnabler::vf1   (135 bytes)   [rtti:vtable virtual slot 1]
void __cdecl OWL::TControlEnabler::vf1(int param_1,char *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  LPSTR local_c [2];
  
  __InitExceptBlockLDTC(0x50cfd8);
  FUN_00497298((int *)local_c,0x104);
  GetWindowTextA(*(HWND *)(param_1 + 8),local_c[0],0x104);
  iVar1 = FUN_004dc978(local_c[0],param_2);
  if (iVar1 != 0) {
    SetWindowTextA(*(HWND *)(param_1 + 8),param_2);
  }
  OWL::TTmpBufferBase::_dtor((undefined4*)local_c,0);
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b0e28  OWL::TControlEnabler::vf2   (52 bytes)   [rtti:vtable virtual slot 2]
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
