// TSBuild.exe — runtime / library code "OWL_TScrollBar"
// 22 functions, 0x00451728..0x00451c8c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00451728  OWL::TScrollBar::Find   (69 bytes)   [owl:response-table response-table-find]
//   also: OWL::TScrollBar::vf8 [rtti:vtable]
undefined4 __cdecl OWL::TScrollBar::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_00422b68(param_1[1],(int *)&OWL::TScrollBar::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TControl::Find(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004518a4  OWL::TScrollBar::vf16   (90 bytes)   [rtti:vtable virtual slot 16]
undefined4 __cdecl OWL::TScrollBar::vf16(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    (**(code **)(*(int *)(param_1 + 0xc) + 0x24))();
    uVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x28))();
    *(undefined4 *)(param_2 + 8) = uVar1;
  }
  else if (param_3 == 1) {
    (**(code **)(*(int *)(param_1 + 0xc) + 0x2c))();
    (**(code **)(*(int *)(param_1 + 0xc) + 0x30))();
  }
  return 0xc;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451900  OWL::TScrollBar::vf26   (10 bytes)   [rtti:vtable virtual slot 26]
char * __stdcall OWL::TScrollBar::vf26(void)

{
  return "SCROLLBAR";
}

// ----------------------------------------------------------------------------------------------------
// 0x0045190c  OWL::TScrollBar::vf27   (34 bytes)   [rtti:vtable virtual slot 27]
void __cdecl OWL::TScrollBar::vf27(int *param_1)

{
  (**(code **)(param_1[3] + 0x2c))();
  OWL::TWindow::vf30(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451930  OWL::TScrollBar::vf15   (29 bytes)   [rtti:vtable virtual slot 15]
void __cdecl OWL::TScrollBar::vf15(int *param_1,LPCSCROLLINFO param_2,byte param_3)

{
  SetScrollInfo(*(HWND *)(*param_1 + 0xc),2,param_2,(uint)param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451950  OWL::TScrollBar::vf14   (23 bytes)   [rtti:vtable virtual slot 14]
void __cdecl OWL::TScrollBar::vf14(int *param_1,LPSCROLLINFO param_2)

{
  GetScrollInfo(*(HWND *)(*param_1 + 0xc),2,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451968  OWL::TScrollBar::vf10   (62 bytes)   [rtti:vtable virtual slot 10]
undefined4 __cdecl OWL::TScrollBar::vf10(int param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_c;
  
  memset(&local_20,0,0x1c);
  local_20 = 0x1c;
  local_1c = 4;
  (**(code **)(*(int *)(param_1 + 0xc) + 0x38))();
  return local_c;
}

// ----------------------------------------------------------------------------------------------------
// 0x004519a8  OWL::TScrollBar::vf12   (119 bytes)   [rtti:vtable virtual slot 12]
void __cdecl OWL::TScrollBar::vf12(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_28;
  undefined4 local_24;
  int local_14;
  int local_c;
  int local_8;
  
  (**(code **)(*(int *)(param_1 + 0xc) + 0x24))();
  iVar2 = local_c;
  if ((param_2 <= local_c) && (iVar2 = param_2, param_2 < local_8)) {
    iVar2 = local_8;
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x28))();
  if (iVar2 != iVar1) {
    memset(&local_28,0,0x1c);
    local_28 = 0x1c;
    local_24 = 4;
    local_14 = iVar2;
    (**(code **)(*(int *)(param_1 + 0xc) + 0x3c))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451a20  OWL::TScrollBar::vf9   (75 bytes)   [rtti:vtable virtual slot 9]
void __cdecl OWL::TScrollBar::vf9(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  memset(&local_20,0,0x1c);
  local_20 = 0x1c;
  local_1c = 1;
  (**(code **)(*(int *)(param_1 + 0xc) + 0x38))();
  *param_2 = local_18;
  *param_3 = local_14;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451a6c  OWL::TScrollBar::vf11   (75 bytes)   [rtti:vtable virtual slot 11]
void __cdecl OWL::TScrollBar::vf11(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  memset(&local_20,0,0x1c);
  local_20 = 0x1c;
  local_1c = 1;
  local_18 = param_2;
  local_14 = param_3;
  (**(code **)(*(int *)(param_1 + 0xc) + 0x3c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451ab8  OWL::TScrollBar::vf13   (50 bytes)   [rtti:vtable virtual slot 13]
void __cdecl OWL::TScrollBar::vf13(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 != 0) {
    uVar3 = 1;
    iVar2 = param_1;
    iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x28))();
    (**(code **)(*(int *)(param_1 + 0xc) + 0x30))
              (iVar1,*(int *)(param_1 + 0xc),iVar2,param_1,param_2 + iVar1,uVar3);
  }
  (**(code **)(*(int *)(param_1 + 0xc) + 0x28))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451aec  OWL::TScrollBar::vf17   (24 bytes)   [rtti:vtable virtual slot 17]
void __cdecl OWL::TScrollBar::vf17(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x34))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451b04  OWL::TScrollBar::vf18   (21 bytes)   [rtti:vtable virtual slot 18]
void __cdecl OWL::TScrollBar::vf18(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x34))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451b1c  OWL::TScrollBar::vf19   (24 bytes)   [rtti:vtable virtual slot 19]
void __cdecl OWL::TScrollBar::vf19(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x34))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451b34  OWL::TScrollBar::vf20   (21 bytes)   [rtti:vtable virtual slot 20]
void __cdecl OWL::TScrollBar::vf20(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x34))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451b4c  OWL::TScrollBar::vf21   (23 bytes)   [rtti:vtable virtual slot 21]
void __cdecl OWL::TScrollBar::vf21(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x30))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451b64  OWL::TScrollBar::vf22   (23 bytes)   [rtti:vtable virtual slot 22]
void __cdecl OWL::TScrollBar::vf22(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x30))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451b7c  OWL::TScrollBar::vf23   (48 bytes)   [rtti:vtable virtual slot 23]
void __cdecl OWL::TScrollBar::vf23(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x24))();
  (**(code **)(*(int *)(param_1 + 0xc) + 0x30))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451bac  OWL::TScrollBar::vf24   (48 bytes)   [rtti:vtable virtual slot 24]
void __cdecl OWL::TScrollBar::vf24(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x24))();
  (**(code **)(*(int *)(param_1 + 0xc) + 0x30))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451bdc  OWL::TScrollBar::vf25   (5 bytes)   [rtti:vtable virtual slot 25]
void __stdcall OWL::TScrollBar::vf25(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451be4  OWL::TScrollBar::EvHScroll   (129 bytes, 2 ranges)   [owl:response-table message-handler]
//   WM_HSCROLL
void __cdecl OWL::TScrollBar::EvHScroll(int param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    (**(code **)(*(int *)(param_1 + 0xc) + 0x44))();
    return;
  case 1:
    (**(code **)(*(int *)(param_1 + 0xc) + 0x48))();
    return;
  case 2:
    (**(code **)(*(int *)(param_1 + 0xc) + 0x4c))();
    return;
  case 3:
    (**(code **)(*(int *)(param_1 + 0xc) + 0x50))();
    return;
  case 4:
    (**(code **)(*(int *)(param_1 + 0xc) + 0x54))();
    return;
  case 5:
    (**(code **)(*(int *)(param_1 + 0xc) + 0x58))();
    return;
  case 6:
    (**(code **)(*(int *)(param_1 + 0xc) + 0x5c))();
    return;
  case 7:
    (**(code **)(*(int *)(param_1 + 0xc) + 0x60))();
    return;
  case 8:
    (**(code **)(*(int *)(param_1 + 0xc) + 100))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451c8c  OWL::TScrollBar::EvVScroll   (26 bytes)   [owl:response-table message-handler]
//   WM_VSCROLL
void __cdecl OWL::TScrollBar::EvVScroll(int param_1,undefined4 param_2)

{
  OWL::TScrollBar::EvHScroll(param_1,param_2);
  return;
}

} // namespace tea
