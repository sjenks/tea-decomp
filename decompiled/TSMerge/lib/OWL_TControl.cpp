// TSMerge.exe — runtime / library code "OWL_TControl"
// 17 functions, 0x00432228..0x00432c08. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00432228  OWL::TControl::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: OWL::TControl::vf8 [rtti:vtable]
undefined4 __cdecl OWL::TControl::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_004179f4(param_1[1],(int *)&OWL::TControl::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') &&
     (uVar1 = OWL::TWindow::Find((undefined4 *)*param_1,param_2,param_3), (char)uVar1 == '\0')) {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00432570  OWL::TControl::~TControl   (193 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TControl::_dtor
void __cdecl OWL::TControl::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46bce0);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&OWL::TControl::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_0046bc0c;
    *(undefined ***)param_1[2] = &PTR_LAB_0046bc18;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046bc24;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 9,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 7,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00432634  OWL::TControl::EvPaint   (44 bytes)   [owl:response-table message-handler]
//   WM_PAINT
void __cdecl OWL::TControl::EvPaint(int *param_1)

{
  if ((*(byte *)(*param_1 + 0x74) & 0x80) != 0) {
    FUN_0042b294(*param_1);
    return;
  }
  OWL::TWindow::EvPaint(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00432660  OWL::TControl::EvCompareitem   (21 bytes)   [owl:response-table message-handler]
//   WM_COMPAREITEM
void __cdecl OWL::TControl::EvCompareitem(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00432678  OWL::TControl::vf1   (68 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TControl::vf1(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if ((*(int *)(*param_1 + 0xc) != 0) && (*(int *)(param_2 + 0x10) != *(int *)(param_2 + 0x18))) {
    if (*(int *)(param_2 + 0x10) != 0) {
      puVar3 = *(undefined4 **)(param_2 + 0x10);
      piVar1 = FUN_0042dd74(puVar3);
      if (piVar1 != (int *)0x0) {
        uVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,*piVar1,puVar3,piVar1,param_2);
        return uVar2;
      }
    }
    return 0;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004326bc  OWL::TControl::EvDeleteitem   (21 bytes)   [owl:response-table message-handler]
//   WM_DELETEITEM
void __cdecl OWL::TControl::EvDeleteitem(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 8))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004326d4  OWL::TControl::vf2   (5 bytes)   [rtti:vtable virtual slot 2]
void __stdcall OWL::TControl::vf2(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004326dc  OWL::TControl::EvMeasureItem   (21 bytes)   [owl:response-table message-handler]
//   WM_MEASUREITEM
void __cdecl OWL::TControl::EvMeasureItem(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0xc))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004326f4  OWL::TControl::vf3   (39 bytes)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TControl::vf3(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 extraout_EDX;
  undefined4 *puVar2;
  
  if (*(int *)(param_2 + 0x14) != 0) {
    puVar2 = *(undefined4 **)(param_2 + 0x14);
    piVar1 = FUN_0042dd74(puVar2);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(*piVar1,extraout_EDX,puVar2,piVar1,param_2);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043271c  OWL::TControl::EvDrawItem   (21 bytes)   [owl:response-table message-handler]
//   WM_DRAWITEM
void __cdecl OWL::TControl::EvDrawItem(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x10))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00432734  OWL::TControl::vf4   (64 bytes)   [rtti:vtable virtual slot 4]
void __cdecl OWL::TControl::vf4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 == 1) {
    (**(code **)(*(int *)(param_1 + 0xc) + 0x14))();
    return;
  }
  if (iVar1 != 2) {
    if (iVar1 != 4) {
      return;
    }
    (**(code **)(*(int *)(param_1 + 0xc) + 0x18))();
    return;
  }
  (**(code **)(*(int *)(param_1 + 0xc) + 0x1c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00432774  OWL::TControl::vf5   (48 bytes)   [rtti:vtable virtual slot 5]
void __cdecl OWL::TControl::vf5(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 extraout_EDX;
  undefined4 *puVar2;
  
  if ((*(int *)(param_2 + 0x2c) != 0) && (*(int *)(param_2 + 8) != 0xffff)) {
    puVar2 = *(undefined4 **)(param_2 + 0x2c);
    piVar1 = FUN_0042dd74(puVar2);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(*piVar1,extraout_EDX,puVar2,piVar1,param_2);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004327a4  OWL::TControl::vf6   (39 bytes)   [rtti:vtable virtual slot 6]
void __cdecl OWL::TControl::vf6(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 extraout_EDX;
  undefined4 *puVar2;
  
  if (*(int *)(param_2 + 0x2c) != 0) {
    puVar2 = *(undefined4 **)(param_2 + 0x2c);
    piVar1 = FUN_0042dd74(puVar2);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(*piVar1,extraout_EDX,puVar2,piVar1,param_2);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004327cc  OWL::TControl::vf7   (39 bytes)   [rtti:vtable virtual slot 7]
void __cdecl OWL::TControl::vf7(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 extraout_EDX;
  undefined4 *puVar2;
  
  if (*(int *)(param_2 + 0x2c) != 0) {
    puVar2 = *(undefined4 **)(param_2 + 0x2c);
    piVar1 = FUN_0042dd74(puVar2);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(*piVar1,extraout_EDX,puVar2,piVar1,param_2);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004329e0  OWL::TControl::Streamer::vf1   (56 bytes)   [rtti:vtable virtual slot 1]
int * __cdecl OWL::TControl::Streamer::vf1(int param_1,int *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  FUN_00432a18(iVar2,param_2);
  if (1 < param_3) {
    uVar3 = FUN_00422908(param_2);
    piVar1[4] = uVar3;
  }
  return piVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00432a70  OWL::TControl::Streamer::vf2   (53 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TControl::Streamer::vf2(int param_1,int *param_2)

{
  int iVar1;
  
  if (*(int **)(param_1 + 8) == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = **(int **)(param_1 + 8);
  }
  FUN_00432aa8(iVar1,param_2);
  FUN_00422d88(param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00432c08  OWL::TControl::Streamer::vf3   (10 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 __stdcall OWL::TControl::Streamer::vf3(void)

{
  return 2;
}

} // namespace tea
