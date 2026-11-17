// TSBuild.exe — runtime / library code "OWL_TGadgetWindow"
// 37 functions, 0x00421318..0x00427604. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00421318  OWL::TGadgetWindow::vf3   (11 bytes)   [rtti:vtable virtual slot 3]
undefined4 __cdecl OWL::TGadgetWindow::vf3(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3b);
}

// ----------------------------------------------------------------------------------------------------
// 0x004251dc  OWL::TGadgetWindow::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: OWL::TGadgetWindow::vf26 [rtti:vtable]
undefined4 __cdecl OWL::TGadgetWindow::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_00422b68(param_1[4],(int *)&OWL::TGadgetWindow::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') &&
     (uVar1 = OWL::TWindow::Find((undefined4 *)*param_1,param_2,param_3), (char)uVar1 == '\0')) {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425710  OWL::TGadgetWindow::~TGadgetWindow   (325 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TGadgetWindow::_dtor
void __cdecl OWL::TGadgetWindow::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  
  __InitExceptBlockLDTC(0x47b128);
  if (param_1 != (int *)0x0) {
    param_1[6] = (int)&OWL::TGadgetWindow::vftable;
    param_1[1] = (int)&PTR_LAB_0047b3d0;
    *(undefined ***)param_1[4] = &PTR_LAB_0047b3f0;
    *(undefined ***)param_1[5] = &PTR_LAB_0047b3fc;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_0047b408;
    if ((uint *)param_1[7] != (uint *)0x0) {
      OWL::TGdiObject::_dtor((uint *)param_1[7],0);
      operator_delete();
    }
    if (*(undefined4 **)((int)param_1 + 0x37) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)param_1 + 0x37))();
    }
    OWL::TGadgetList::_dtor(param_1 + 1,0);
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 0x96;
      OWL::TWindow::_dtor((undefined4 *)((int)param_1 + 0x5d),0);
      *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -0x96;
      OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0x55),0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425858  OWL::TGadgetWindow::EvSysColorChange   (31 bytes)   [owl:response-table message-handler]
//   WM_SYSCOLORCHANGE
void OWL::TGadgetWindow::EvSysColorChange(undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_4 + 8); piVar1 != (int *)0x0; piVar1 = *(int **)((int)piVar1 + 0x3e)
      ) {
    (**(code **)(*piVar1 + 0x18))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425878  OWL::TGadgetWindow::vf12   (145 bytes)   [rtti:vtable virtual slot 12]
void __cdecl OWL::TGadgetWindow::vf12(int *param_1,int param_2)

{
  int *piVar1;
  POINT Point;
  HWND pHVar2;
  tagPOINT local_c;
  
  if ((param_2 == 0) && (param_1[9] != 0)) {
    local_c.x = 0;
    local_c.y = 0;
    GetCursorPos(&local_c);
    Point.y = local_c.y;
    Point.x = local_c.x;
    pHVar2 = WindowFromPoint(Point);
    if (pHVar2 != *(HWND *)(*param_1 + 0xc)) {
      FUN_00436d48(*param_1,0x200,0,0xffffffff);
    }
  }
  for (piVar1 = (int *)param_1[2]; piVar1 != (int *)0x0; piVar1 = *(int **)((int)piVar1 + 0x3e)) {
    (**(code **)(*piVar1 + 0x10))();
  }
  OWL::TWindow::vf11(*param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425a50  OWL::TGadgetWindow::vf13   (55 bytes)   [rtti:vtable virtual slot 13]
void __cdecl OWL::TGadgetWindow::vf13(int *param_1)

{
  if (*(int *)(*param_1 + 0xc) != 0) {
    (**(code **)(param_1[6] + 0x48))();
    (**(code **)(*(int *)(*param_1 + 8) + 0x6c))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425a88  OWL::TGadgetWindow::vf14   (204 bytes)   [rtti:vtable virtual slot 14]
void __cdecl OWL::TGadgetWindow::vf14(int *param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  
  __InitExceptBlockLDTC(0x47b18c);
  _vector_new_ldtc_((int *)0x0,0x10,param_1[3],1,(undefined*)FUN_00425b54);
  if ((*(char *)((int)param_1 + 0x31) != '\0') || (*(char *)((int)param_1 + 0x32) != '\0')) {
    (**(code **)(param_1[6] + 0x44))();
  }
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    *param_2 = *(undefined4 *)(*param_1 + 0x28);
  }
  else {
    *param_2 = 0;
  }
  if (*(char *)((int)param_1 + 0x32) == '\0') {
    param_2[1] = *(undefined4 *)(*param_1 + 0x2c);
  }
  else if (param_1[3] == 0) {
    param_2[1] = 0;
  }
  else {
    param_2[1] = 0;
  }
  operator_delete_array();
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425c40  OWL::TGadgetWindow::vf1   (25 bytes)   [rtti:vtable virtual slot 1]
void __cdecl OWL::TGadgetWindow::vf1(int *param_1)

{
  FUN_00425bf0(param_1);
  OWL::TWindow::vf4(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425c5c  OWL::TGadgetWindow::vf2   (131 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TGadgetWindow::vf2(int *param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if ((param_2 != *(char *)((int)param_1 + 0x35)) || ((char)param_1[0xd] != '\0')) {
    if (param_2 != *(char *)((int)param_1 + 0x35)) {
      uVar1 = *(undefined1 *)((int)param_1 + 0x31);
      *(undefined1 *)((int)param_1 + 0x31) = *(undefined1 *)((int)param_1 + 0x32);
      *(undefined1 *)((int)param_1 + 0x32) = uVar1;
      *(char *)((int)param_1 + 0x35) = (char)param_2;
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
    piVar3 = param_1;
    uVar2 = FUN_00425bf0(param_1);
    (**(code **)(param_1[6] + 0x34))(uVar2,param_1[6],piVar3,param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425ce0  OWL::TGadgetWindow::vf16   (182 bytes)   [rtti:vtable virtual slot 16]
void __cdecl OWL::TGadgetWindow::vf16(int *param_1,int *param_2)

{
  int iVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  FUN_00423fac(param_1 + 10,&local_8,&local_c,&local_10,&local_14,(uint)*(byte *)(param_1 + 0xc));
  if (*(int *)(*param_1 + 0x28) == 0) {
    *param_2 = 0;
    param_2[2] = 0;
  }
  else {
    *param_2 = local_8;
    param_2[2] = *(int *)(*param_1 + 0x28) - local_c;
    if ((*(byte *)(*param_1 + 0x1a) & 0x80) != 0) {
      iVar1 = GetSystemMetrics(DAT_0047d520);
      param_2[2] = param_2[2] + iVar1 * -2;
    }
  }
  if (*(int *)(*param_1 + 0x2c) == 0) {
    param_2[1] = 0;
    param_2[3] = 0;
  }
  else {
    param_2[1] = local_10;
    param_2[3] = *(int *)(*param_1 + 0x2c) - local_14;
    if ((*(byte *)(*param_1 + 0x1a) & 0x80) != 0) {
      iVar1 = GetSystemMetrics(DAT_0047d518);
      param_2[3] = param_2[3] + iVar1 * -2;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425d98  OWL::TGadgetWindow::vf20   (70 bytes)   [rtti:vtable virtual slot 20]
void __cdecl OWL::TGadgetWindow::vf20(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  
  if ((*(int *)(param_2 + 0x1a) == 1) && (*(int *)(param_3 + 0x1a) == 1)) {
    if (*(char *)(param_1 + 0x35) == '\0') {
      iVar1 = GetSystemMetrics(DAT_0047d518);
      *param_4 = *param_4 - iVar1;
    }
    else {
      iVar1 = GetSystemMetrics(DAT_0047d520);
      param_4[1] = param_4[1] - iVar1;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425de0  OWL::TGadgetWindow::vf18   (402 bytes)   [rtti:vtable virtual slot 18]
int * __cdecl OWL::TGadgetWindow::vf18(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  byte bVar7;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_24;
  int local_18;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  bVar7 = 0;
  __InitExceptBlockLDTC(0x47b1f0);
  local_24 = 8;
  local_10 = 0;
  local_c = 0;
  local_8 = _vector_new_ldtc_((int *)0x0,0x10,*(int *)(param_2 + 0xc),1,(undefined*)FUN_00425b54);
  local_18 = local_18 + 2;
  local_24 = 0x2c;
  (**(code **)(*(int *)(param_2 + 0x18) + 0x44))();
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  iVar3 = 0;
  for (piVar5 = *(int **)(param_2 + 8); piVar5 != (int *)0x0; piVar5 = *(int **)((int)piVar5 + 0x3e)
      ) {
    piVar4 = (int *)((int)piVar5 + 10);
    piVar6 = &local_5c;
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar6 = *piVar4;
      piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    local_24 = 0x2c;
    piVar4 = local_8 + iVar3 * 4;
    piVar6 = &local_6c;
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar6 = *piVar4;
      piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    if ((((local_5c == local_6c) && (local_58 == local_68)) && (local_54 == local_64)) &&
       (local_50 == local_60)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      (**(code **)(*piVar5 + 0xc))();
      local_3c = 0;
      local_38 = 0;
      if ((local_5c == 0) && (local_58 == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_00428984(&local_4c,&local_5c);
      }
      FUN_00428984(&local_4c,&local_6c);
    }
    iVar3 = iVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x34) = 0;
  piVar5 = &local_4c;
  piVar4 = param_1;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = *piVar5;
    piVar5 = piVar5 + (uint)bVar7 * -2 + 1;
    piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
  }
  local_18 = local_18 + -2;
  operator_delete_array();
  *in_FS_OFFSET = local_34;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426880  OWL::TGadgetWindow::vf17   (57 bytes)   [rtti:vtable virtual slot 17]
void __cdecl OWL::TGadgetWindow::vf17(int param_1,int param_2,int *param_3)

{
  if (param_2 == 0) {
    FUN_00425f74(param_1,param_3);
    return;
  }
  if (param_2 != 1) {
    FUN_0042652c(param_1,param_3);
    return;
  }
  FUN_00426244(param_1,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004268cc  OWL::TGadgetWindow::vf5   (38 bytes)   [rtti:vtable virtual slot 5]
void __cdecl OWL::TGadgetWindow::vf5(int *param_1,int param_2,int param_3,int param_4)

{
  OWL::TGadgetList::vf1(param_1 + 1,param_2,param_3,param_4);
  FUN_00425bf0(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004268f4  OWL::TGadgetWindow::vf6   (38 bytes)   [rtti:vtable virtual slot 6]
void OWL::TGadgetWindow::vf6(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5 ,int param_6,int param_7)

{
  OWL::TGadgetList::vf2((int)(param_4 + 1),param_2,param_3,param_4 + 1,param_5,param_6,param_7);
  FUN_00425bf0(param_4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042691c  OWL::TGadgetWindow::vf8   (63 bytes)   [rtti:vtable virtual slot 8]
void __cdecl OWL::TGadgetWindow::vf8(int *param_1,int *param_2)

{
  *(int **)((int)param_2 + 6) = param_1;
  (**(code **)(*param_2 + 0x20))();
  if (*(int *)(*param_1 + 0xc) != 0) {
    (**(code **)(*param_2 + 0x1c))();
  }
  if (*(char *)((int)param_2 + 5) != '\0') {
    *(char *)((int)param_1 + 0x33) = *(char *)((int)param_1 + 0x33) + '\x01';
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042695c  OWL::TGadgetWindow::vf7   (33 bytes)   [rtti:vtable virtual slot 7]
int __cdecl OWL::TGadgetWindow::vf7(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != *(int *)(param_2 + 6)) {
    return 0;
  }
  iVar1 = OWL::TGadgetList::vf3((int *)(param_1 + 4),param_2);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426980  OWL::TGadgetWindow::vf9   (127 bytes)   [rtti:vtable virtual slot 9]
void __cdecl OWL::TGadgetWindow::vf9(int param_1,int *param_2)

{
  if (*(char *)((int)param_2 + 5) != '\0') {
    *(char *)(param_1 + 0x33) = *(char *)(param_1 + 0x33) + -1;
  }
  if (param_2 == *(int **)(param_1 + 0x24)) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  FUN_00425974(param_1,(int)param_2);
  (**(code **)(*param_2 + 0x28))();
  *(undefined4 *)((int)param_2 + 6) = 0;
  *(undefined4 *)((int)param_2 + 0x3e) = 0;
  FUN_00428898((int *)((int)param_2 + 10),-*(int *)((int)param_2 + 10),-*(int *)((int)param_2 + 0xe)
              );
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426a00  OWL::TGadgetWindow::vf10   (86 bytes)   [rtti:vtable virtual slot 10]
void __cdecl OWL::TGadgetWindow::vf10(int param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x47b244);
  if (*(undefined4 **)(param_1 + 0x37) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x37))();
  }
  *(undefined4 *)(param_1 + 0x37) = param_2;
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426a58  OWL::TGadgetWindow::vf11   (151 bytes)   [rtti:vtable virtual slot 11]
undefined4 __cdecl OWL::TGadgetWindow::vf11(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  undefined4 *local_8;
  
  __InitExceptBlockLDTC(0x47b274);
  if (*(int *)(param_1 + 0x37) == 0) {
    if (param_2 == 0) {
      param_2 = 10;
    }
    if (param_3 == 0) {
      param_3 = 10;
    }
    local_8 = (undefined4 *)operator_new();
    if (local_8 != (undefined4 *)0x0) {
      local_1c = 0x14;
      local_3c = param_2;
      local_38 = param_3;
      local_34 = param_2;
      local_30 = param_3;
      FUN_0041eb38(local_8,&local_3c,1,10,5,1);
    }
    *(undefined4 **)(param_1 + 0x37) = local_8;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x37);
  *in_FS_OFFSET = local_2c;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426af0  OWL::TGadgetWindow::vf21   (193 bytes)   [rtti:vtable virtual slot 21]
bool __cdecl OWL::TGadgetWindow::vf21(int *param_1)

{
  BOOL BVar1;
  
  OWL::TWindow::vf30(*param_1);
  if ((char)param_1[0x12] != '\0') {
    FUN_0042590c(param_1);
  }
  if ((char)param_1[0xd] != '\0') {
    (**(code **)(param_1[6] + 0x34))();
  }
  (**(code **)(param_1[6] + 0x38))();
  if (*(char *)((int)param_1 + 0x31) == '\0') {
LAB_00426b45:
    if ((*(char *)((int)param_1 + 0x32) == '\0') || (*(int *)(*param_1 + 0x2c) == 0))
    goto LAB_00426b91;
  }
  else if (*(int *)(*param_1 + 0x28) == 0) goto LAB_00426b45;
  if (*(char *)((int)param_1 + 0x31) != '\0') {
    *(undefined4 *)(*param_1 + 0x28) = 0;
  }
  if (*(char *)((int)param_1 + 0x32) != '\0') {
    *(undefined4 *)(*param_1 + 0x2c) = 0;
  }
  (**(code **)(param_1[6] + 0x34))();
  FUN_00438730(*param_1,(HWND)0x0,0,0,0,0,0x16);
LAB_00426b91:
  BVar1 = PostMessageA(*(HWND *)(*param_1 + 0xc),0x7ef2,0,0);
  return BVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426bb4  OWL::TGadgetWindow::vf22   (105 bytes)   [rtti:vtable virtual slot 22]
void __cdecl OWL::TGadgetWindow::vf22(int *param_1)

{
  BOOL BVar1;
  
  if (*(int *)((int)param_1 + 0x49) != 0) {
    BVar1 = KillTimer(*(HWND *)(*param_1 + 0xc),*(UINT_PTR *)((int)param_1 + 0x49));
    if (BVar1 != 0) {
      *(undefined4 *)((int)param_1 + 0x49) = 0;
    }
  }
  if (param_1[9] != 0) {
    (**(code **)(*(int *)param_1[9] + 0x40))();
    param_1[9] = 0;
  }
  OWL::TWindow::vf31();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426c20  OWL::TGadgetWindow::vf23   (134 bytes)   [rtti:vtable virtual slot 23]
void __cdecl OWL::TGadgetWindow::vf23(int *param_1,LPMSG param_2)

{
  BOOL BVar1;
  
  if (*(int *)((int)param_1 + 0x3b) != 0) {
    BVar1 = IsWindow(*(HWND *)(**(int **)((int)param_1 + 0x3b) + 0xc));
    if (BVar1 != 0) {
      if (*(HWND *)(*param_1 + 0xc) != param_2->hwnd) {
        BVar1 = IsChild(*(HWND *)(*param_1 + 0xc),param_2->hwnd);
        if (BVar1 == 0) goto LAB_00426c96;
      }
      if ((0x1ff < param_2->message) && (param_2->message < 0x20e)) {
        FUN_00438338(**(int **)((int)param_1 + 0x3b),0x407,0,(LPARAM)param_2);
      }
    }
  }
LAB_00426c96:
  OWL::TWindow::vf10(*param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426ca8  OWL::TGadgetWindow::EvMsg_7ef2   (49 bytes)   [owl:response-table message-handler]
//   message 0x7ef2
void __cdecl OWL::TGadgetWindow::EvMsg_7ef2(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0x3f) != '\0') {
    (**(code **)(*(int *)(param_1 + 0x18) + 0x10))();
  }
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = *(int **)((int)piVar1 + 0x3e)
      ) {
    (**(code **)(*piVar1 + 0x1c))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426cdc  OWL::TGadgetWindow::EvWindowPosChanging   (129 bytes)   [owl:response-table message-handler]
//   WM_WINDOWPOSCHANGING
void __cdecl OWL::TGadgetWindow::EvWindowPosChanging(int *param_1,int param_2)

{
  FUN_00436428(*param_1);
  if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
    *(undefined4 *)(*param_1 + 0x28) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x14);
    if (((char)param_1[0xd] != '\0') || (*(char *)((int)param_1 + 0x33) != '\0')) {
      (**(code **)(param_1[6] + 0x48))();
      (**(code **)(*(int *)(*param_1 + 8) + 0x6c))();
    }
    FUN_00425bf0(param_1);
    if (*(char *)((int)param_1 + 0x31) != '\0') {
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(*param_1 + 0x28);
    }
    if (*(char *)((int)param_1 + 0x32) != '\0') {
      *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(*param_1 + 0x2c);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426d60  OWL::TGadgetWindow::vf15   (313 bytes)   [rtti:vtable virtual slot 15]
void __cdecl OWL::TGadgetWindow::vf15(int param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  bool bVar2;
  HDC hdc;
  undefined4 *in_FS_OFFSET;
  tagPOINT *lppoint;
  tagPOINT local_40;
  LONG local_38;
  LONG local_34;
  undefined4 local_30;
  undefined2 local_20;
  int local_14;
  HRGN local_c [2];
  
  __InitExceptBlockLDTC(0x47b2b4);
  local_40.x = 0;
  local_40.y = 0;
  lppoint = &local_40;
  hdc = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  GetViewportOrgEx(hdc,lppoint);
  local_38 = local_40.x;
  local_34 = local_40.y;
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = *(int **)((int)piVar1 + 0x3e)
      ) {
    if ((((*(int *)((int)piVar1 + 10) < param_4[2]) && (*param_4 < *(int *)((int)piVar1 + 0x12))) &&
        (*(int *)((int)piVar1 + 0xe) < param_4[3])) && (param_4[1] < *(int *)((int)piVar1 + 0x16)))
    {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x2c))();
      if ((char)piVar1[1] == '\0') {
        (**(code **)(*piVar1 + 0x30))();
      }
      else {
        local_20 = 8;
        FUN_0042f998((int *)local_c);
        local_14 = local_14 + 1;
        local_20 = 0x14;
        GetClipRgn((HDC)*param_2,local_c[0]);
        IntersectClipRect((HDC)*param_2,*(int *)((int)piVar1 + 10),*(int *)((int)piVar1 + 0xe),
                          *(int *)((int)piVar1 + 0x12),*(int *)((int)piVar1 + 0x16));
        (**(code **)(*piVar1 + 0x30))();
        SelectClipRgn((HDC)*param_2,local_c[0]);
        local_14 = local_14 + -1;
        OWL::TRegion::_dtor((undefined4*)local_c,2);
        local_20 = 0;
      }
    }
  }
  (**(code **)(*(int *)((int)param_2 + 5) + 0x2c))();
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426ef4  OWL::TGadgetWindow::vf19   (46 bytes)   [rtti:vtable virtual slot 19]
void __cdecl OWL::TGadgetWindow::vf19(int param_1,int param_2)

{
  (**(code **)(*(int *)(param_2 + 5) + 0x14))();
  (**(code **)(*(int *)(param_1 + 0x18) + 0x3c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426f24  OWL::TGadgetWindow::EvLButtonDown   (125 bytes)   [owl:response-table message-handler]
//   WM_LBUTTONDOWN
void __cdecl OWL::TGadgetWindow::EvLButtonDown(int *param_1)

{
  int *piVar1;
  
  if (param_1[8] == 0) {
    piVar1 = FUN_0042503c((int)(param_1 + 1));
  }
  else {
    piVar1 = (int *)param_1[8];
  }
  if ((piVar1 != (int *)0x0) && (((*(byte *)((int)piVar1 + 0x42) & 1) != 0 || (param_1[8] != 0)))) {
    (**(code **)(*piVar1 + 0x44))();
  }
  OWL::TWindow::EvLButtonDown(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426fa4  OWL::TGadgetWindow::EvLButtonUp   (109 bytes)   [owl:response-table message-handler]
//   WM_LBUTTONUP
void __cdecl OWL::TGadgetWindow::EvLButtonUp(int *param_1)

{
  int *piVar1;
  
  if (param_1[8] == 0) {
    piVar1 = FUN_0042503c((int)(param_1 + 1));
  }
  else {
    piVar1 = (int *)param_1[8];
  }
  if ((piVar1 != (int *)0x0) && (((*(byte *)((int)piVar1 + 0x42) & 1) != 0 || (param_1[8] != 0)))) {
    (**(code **)(*piVar1 + 0x4c))();
  }
  FUN_00436428(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427014  OWL::TGadgetWindow::EvLButtonDblClk   (42 bytes)   [owl:response-table message-handler]
//   WM_LBUTTONDBLCLK
void __cdecl OWL::TGadgetWindow::EvLButtonDblClk(int *param_1)

{
  OWL::TGadgetWindow::EvLButtonUp(param_1);
  OWL::TGadgetWindow::EvLButtonDown(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427040  OWL::TGadgetWindow::EvRButtonDown   (119 bytes)   [owl:response-table message-handler]
//   WM_RBUTTONDOWN
void __cdecl OWL::TGadgetWindow::EvRButtonDown(int *param_1)

{
  int *piVar1;
  
  if (param_1[8] == 0) {
    piVar1 = FUN_0042503c((int)(param_1 + 1));
  }
  else {
    piVar1 = (int *)param_1[8];
  }
  if ((piVar1 != (int *)0x0) && (((*(byte *)((int)piVar1 + 0x42) & 1) != 0 || (param_1[8] != 0)))) {
    (**(code **)(*piVar1 + 0x48))();
  }
  FUN_00436428(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004270b8  OWL::TGadgetWindow::EvRButtonUp   (109 bytes)   [owl:response-table message-handler]
//   WM_RBUTTONUP
void __cdecl OWL::TGadgetWindow::EvRButtonUp(int *param_1)

{
  int *piVar1;
  
  if (param_1[8] == 0) {
    piVar1 = FUN_0042503c((int)(param_1 + 1));
  }
  else {
    piVar1 = (int *)param_1[8];
  }
  if ((piVar1 != (int *)0x0) && (((*(byte *)((int)piVar1 + 0x42) & 1) != 0 || (param_1[8] != 0)))) {
    (**(code **)(*piVar1 + 0x50))();
  }
  FUN_00436428(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427128  OWL::TGadgetWindow::EvMouseMove   (298 bytes)   [owl:response-table message-handler]
//   WM_MOUSEMOVE
void __cdecl OWL::TGadgetWindow::EvMouseMove(int *param_1)

{
  int *piVar1;
  
  if (param_1[8] == 0) {
    piVar1 = FUN_0042503c((int)(param_1 + 1));
    if (piVar1 != (int *)param_1[9]) {
      if (param_1[9] != 0) {
        (*(code *)PTR_FUN_0047af14)();
      }
      param_1[9] = (int)piVar1;
      if (param_1[9] != 0) {
        (*(code *)PTR_FUN_0047af20)();
      }
    }
  }
  else if (param_1[8] != 0) {
    (*(code *)PTR_FUN_0047af08)();
  }
  FUN_00436428(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427278  OWL::TGadgetWindow::vf4   (178 bytes)   [rtti:vtable virtual slot 4]
void __cdecl OWL::TGadgetWindow::vf4(int *param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x47b2e4);
  if (*(int *)((int)param_1 + 0x3b) == 0) {
    iVar2 = *param_1;
    do {
      if (*(int *)(iVar2 + 0x14) == 0) break;
      iVar2 = *(int *)(iVar2 + 0x14);
    } while ((*(byte *)(iVar2 + 0x74) & 0x10) == 0);
    piVar1 = (int *)operator_new();
    if (piVar1 != (int *)0x0) {
      FUN_00430958(piVar1,0,iVar2,'\x01',0);
    }
    FUN_00427348(param_1,piVar1);
  }
  else if (*(int *)(**(int **)((int)param_1 + 0x3b) + 0xc) != 0) {
    FUN_00438338(**(int **)((int)param_1 + 0x3b),0x401,(uint)param_2,0);
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427428  OWL::TGadgetWindow::vf24   (203 bytes)   [rtti:vtable virtual slot 24]
undefined4 __cdecl OWL::TGadgetWindow::vf24(int *param_1,int param_2,HWND param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *unaff_ESI;
  undefined4 local_14;
  int local_10;
  undefined4 local_8;
  
  local_14 = 0;
  local_10 = param_2;
  local_8 = 0;
  cVar2 = (**(code **)(param_1[6] + 0x68))();
  if (cVar2 == '\0') {
    for (iVar1 = *(int *)(*param_1 + 0x14); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14)) {
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar1 + 8);
      }
      unaff_ESI = FUN_00468488(iVar1,iVar4,(int *)&DAT_00403c70,(int *)&DAT_00403a74,0);
      if ((unaff_ESI != (undefined4 *)0x0) || (*(int *)(iVar1 + 0x14) == 0)) break;
    }
    if ((iVar1 == 0) ||
       ((unaff_ESI != (undefined4 *)0x0 &&
        (iVar4 = (**(code **)(unaff_ESI[3] + 0x24))(), iVar4 == *(int *)(*param_1 + 0xc))))) {
      uVar3 = OWL::TWindow::vf18((undefined4 *)*param_1,param_2,param_3,param_4);
    }
    else {
      uVar3 = (**(code **)(*(int *)(iVar1 + 8) + 0x48))();
    }
  }
  else {
    FUN_00422b40(param_1[4],(int)&local_14);
    uVar3 = 0;
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004274f4  OWL::TGadgetWindow::vf25   (147 bytes)   [rtti:vtable virtual slot 25]
void __cdecl OWL::TGadgetWindow::vf25(int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  local_10 = *(undefined4 *)(param_2 + 4);
  local_14 = 0x7fff;
  local_8 = 0;
  cVar2 = (**(code **)(param_1[6] + 0x68))();
  if (cVar2 == '\0') {
    iVar1 = *(int *)(*param_1 + 0x14);
    if ((iVar1 != 0) && (*(int *)(*param_1 + 0xc) == *(int *)(param_2 + 8))) {
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar1 + 0xc);
      (**(code **)(*(int *)(iVar1 + 8) + 0x50))();
      if ((*(byte *)(param_2 + 0xc) & 1) != 0) {
        return;
      }
    }
    OWL::TWindow::vf20((undefined4 *)*param_1,param_2);
  }
  else {
    FUN_00422b40(param_1[4],(int)&local_14);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427604  OWL::TGadgetWindow::TLayoutInfo::~TLayoutInfo   (67 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TGadgetWindow::TLayoutInfo::_dtor
void __cdecl OWL::TGadgetWindow::TLayoutInfo::_dtor(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47b33c);
  if (param_1 != 0) {
    operator_delete_array();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
