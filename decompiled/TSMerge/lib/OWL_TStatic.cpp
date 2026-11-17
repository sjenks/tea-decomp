// TSMerge.exe — runtime / library code "OWL_TStatic"
// 7 functions, 0x00447844..0x00447e3c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00447844  OWL::TStatic::Find   (69 bytes)   [owl:response-table response-table-find]
//   also: OWL::TStatic::vf8 [rtti:vtable]
undefined4 __cdecl OWL::TStatic::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_004179f4(param_1[1],(int *)&OWL::TStatic::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TControl::Find(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004479c0  OWL::TStatic::EvSize   (40 bytes)   [owl:response-table message-handler]
//   WM_SIZE
void __cdecl OWL::TStatic::EvSize(int *param_1,int param_2)

{
  (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
  OWL::TWindow::EvSize(*param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004479e8  OWL::TStatic::vf11   (31 bytes)   [rtti:vtable virtual slot 11]
char * __cdecl OWL::TStatic::vf11(int *param_1)

{
  if (*(char *)(*(int *)(*param_1 + 0x6c) + 0x4d) != '\0') {
    return "BorStatic";
  }
  return "STATIC";
}

// ----------------------------------------------------------------------------------------------------
// 0x00447a08  OWL::TStatic::vf10   (56 bytes)   [rtti:vtable virtual slot 10]
int __cdecl OWL::TStatic::vf10(int *param_1,LPSTR param_2,int param_3)

{
  if (param_3 == 0) {
    GetWindowTextA(*(HWND *)(*param_1 + 0xc),param_2,param_1[5]);
  }
  else if (param_3 == 1) {
    SetWindowTextA(*(HWND *)(*param_1 + 0xc),param_2);
  }
  return param_1[5];
}

// ----------------------------------------------------------------------------------------------------
// 0x00447a40  OWL::TStatic::vf9   (23 bytes)   [rtti:vtable virtual slot 9]
void __cdecl OWL::TStatic::vf9(int *param_1)

{
  SetWindowTextA(*(HWND *)(*param_1 + 0xc),"BorStatic" + 9);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00447d00  OWL::TStatic::Streamer::vf2   (45 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TStatic::Streamer::vf2(int param_1,int *param_2)

{
  FUN_00431cc8(*(int *)(param_1 + 8),param_2);
  FUN_00422d88(param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00447e3c  OWL::TStatic::Streamer::vf3   (10 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 __stdcall OWL::TStatic::Streamer::vf3(void)

{
  return 1;
}

} // namespace tea
