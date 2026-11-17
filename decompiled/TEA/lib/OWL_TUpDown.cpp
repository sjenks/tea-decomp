// TEA.exe — runtime / library code "OWL_TUpDown"
// 5 functions, 0x004a1ed4..0x004a2148. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004a1ed4  OWL::TUpDown::Find   (69 bytes)   [owl:response-table response-table-find]
//   also: OWL::TUpDown::vf8 [rtti:vtable]
undefined4 __cdecl OWL::TUpDown::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[1],(int *)&OWL::TUpDown::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TControl::vf8(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a20b0  OWL::TUpDown::vf9   (20 bytes)   [rtti:vtable virtual slot 9]
char * __cdecl OWL::TUpDown::vf9(int param_1)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x8000;
  return "msctls_updown32";
}

// ----------------------------------------------------------------------------------------------------
// 0x004a20c4  OWL::TUpDown::vf10   (113 bytes)   [rtti:vtable virtual slot 10]
void __cdecl OWL::TUpDown::vf10(int *param_1)

{
  undefined4 uVar1;
  
  FUN_00487178();
  uVar1 = FUN_00486ff4();
  *(undefined4 *)(*param_1 + 0xc) = uVar1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a2138  OWL::TUpDown::EvVScroll   (16 bytes)   [owl:response-table message-handler]
//   WM_VSCROLL
void __cdecl OWL::TUpDown::EvVScroll(int *param_1)

{
  FUN_004a5774(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a2148  OWL::TUpDown::EvHScroll   (16 bytes)   [owl:response-table message-handler]
//   WM_HSCROLL
void __cdecl OWL::TUpDown::EvHScroll(int *param_1)

{
  FUN_004a5774(*param_1);
  return;
}

} // namespace tea
