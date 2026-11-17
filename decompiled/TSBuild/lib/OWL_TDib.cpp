// TSBuild.exe — runtime / library code "OWL_TDib"
// 4 functions, 0x0041e068..0x00440c58. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041e068  OWL::TDib::vf3   (19 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
/* WARNING: Unable to track spacebase fully for stack */
void OWL::TDib::vf3(char *param_1,int param_2,char param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  int unaff_EDI;
  undefined4 *in_FS_OFFSET;
  
  *param_1 = *param_1 + (char)param_1;
  *(char *)((int)param_1 * 2) = *(char *)((int)param_1 * 2) + param_3;
  *(char *)(unaff_EDI + 0x57) = *(char *)(unaff_EDI + 0x57) + param_3;
  iVar3 = *(int *)(param_2 + 0x20) * -0x74aaffd6;
  in((short)param_2);
  *(undefined4 *)(iVar3 + -0x30) = 0x41e090;
  __InitExceptBlockLDTC(0x47934c);
  *(undefined4 *)(unaff_EBP + -8) = *(undefined4 *)(unaff_EBP + 0xc);
  if (*(int *)(unaff_EBP + -8) != 0) {
    *(undefined4 *)(unaff_EBP + -4) = *(undefined4 *)(*(int *)(unaff_EBP + -8) + 5);
    *(undefined2 *)(unaff_EBP + -0x1c) = 0x14;
    *(undefined4 *)(iVar3 + -0x30) = 3;
    iVar1 = *(int *)(unaff_EBP + -8);
    *(int *)(iVar3 + -0x34) = iVar1;
    pcVar2 = (code *)**(undefined4 **)(iVar1 + 5);
    *(undefined4 *)(iVar3 + -0x38) = 0x41e0b6;
    (*pcVar2)();
    *(undefined2 *)(unaff_EBP + -0x1c) = 8;
  }
  *in_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x2c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044070c  OWL::TDib::~TDib   (66 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TDib::_dtor
void __cdecl OWL::TDib::_dtor(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 5) = &OWL::TDib::vftable;
    if ((*param_1 != 0) && (*(char *)((int)param_1 + 0x1f) == '\0')) {
      GlobalUnlock((HGLOBAL)*param_1);
      if ((char)param_1[1] != '\0') {
        GlobalFree((HGLOBAL)*param_1);
      }
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004408fc  OWL::TDib::vf1   (633 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TDib::vf1(int *param_1,int *param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  ushort local_5c;
  ushort local_5a;
  short local_58;
  ushort local_56;
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  short local_48;
  ushort local_46;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  short local_2c;
  int local_22;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  char local_9;
  int local_8;
  
  iVar4 = 0;
  if (param_3 != '\0') {
    iVar1 = (**(code **)*param_2)();
    if ((iVar1 != 0xe) || (local_2c != 0x4d42)) {
      FUN_00449914();
      return 0;
    }
    if (local_22 != 0) {
      iVar4 = local_22 + -0xe;
    }
  }
  iVar1 = (**(code **)*param_2)();
  if ((iVar1 == 4) && ((local_8 == 0xc || (local_8 == 0x28)))) {
    local_54 = 0x28;
    local_9 = local_8 == 0xc;
    if ((bool)local_9) {
      local_10 = 8;
      iVar1 = (**(code **)*param_2)();
      if (iVar1 != local_10) {
        FUN_00449914();
        return 0;
      }
      local_50 = (uint)local_5c;
      local_4c = (uint)local_5a;
      local_48 = local_58;
      local_46 = local_56;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
    }
    else {
      local_14 = local_8 + -4;
      iVar1 = (**(code **)*param_2)();
      if (iVar1 != local_14) {
        FUN_00449914();
        return 0;
      }
    }
    if (local_48 == 1) {
      if (local_34 == 0) {
        local_34 = FUN_004202d8(local_46);
      }
      if ((local_44 == 0) || (local_44 == 3)) {
        uVar3 = local_46 * local_50 + 0x1f & 0xffffffe0;
        if ((int)uVar3 < 0) {
          uVar3 = uVar3 + 7;
        }
        local_40 = ((int)uVar3 >> 3) * local_4c;
      }
      FUN_00440590(param_1,&local_54);
      if (*(int *)((int)param_1 + 0xd) != 0) {
        local_18 = 0xc;
        iVar1 = (**(code **)*param_2)();
        if (iVar1 != local_18) {
          GlobalUnlock((HGLOBAL)*param_1);
          return 0;
        }
      }
      if (local_9 == '\0') {
        local_1c = *(int *)((int)param_1 + 0x19) << 2;
      }
      else {
        local_1c = *(int *)((int)param_1 + 0x19) * 3;
      }
      if (*(int *)((int)param_1 + 0x11) != 0) {
        iVar1 = (**(code **)*param_2)();
        if (iVar1 != local_1c) {
          GlobalUnlock((HGLOBAL)*param_1);
          return 0;
        }
        if (local_9 != '\0') {
          iVar1 = *(int *)((int)param_1 + 0x19);
          while (iVar1 = iVar1 + -1, -1 < iVar1) {
            *(undefined1 *)(*(int *)((int)param_1 + 0x11) + 2 + iVar1 * 4) =
                 *(undefined1 *)(*(int *)((int)param_1 + 0x11) + 2 + iVar1 * 3);
            *(undefined1 *)(*(int *)((int)param_1 + 0x11) + 1 + iVar1 * 4) =
                 *(undefined1 *)(*(int *)((int)param_1 + 0x11) + 1 + iVar1 * 3);
            *(undefined1 *)(*(int *)((int)param_1 + 0x11) + iVar1 * 4) =
                 *(undefined1 *)(*(int *)((int)param_1 + 0x11) + iVar1 * 3);
            *(undefined1 *)(*(int *)((int)param_1 + 0x11) + 3 + iVar1 * 4) = 0;
          }
        }
      }
      if ((iVar4 != 0) && (0 < iVar4 - (local_8 + local_1c))) {
        (**(code **)(*param_2 + 4))();
      }
      iVar4 = (**(code **)*param_2)();
      if (iVar4 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = CONCAT31((int3)((uint)iVar4 >> 8),1);
      }
    }
    else {
      FUN_00449914();
      uVar2 = 0;
    }
  }
  else {
    FUN_00449914();
    uVar2 = 0;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00440c58  OWL::TDib::vf2   (119 bytes)   [rtti:vtable virtual slot 2]
bool __cdecl OWL::TDib::vf2(undefined4 *param_1,undefined4 *param_2,char param_3)

{
  char cVar1;
  
  GlobalSize((HGLOBAL)*param_1);
  if ((param_3 != '\0') && (cVar1 = (**(code **)*param_2)(), cVar1 == '\0')) {
    return false;
  }
  cVar1 = (**(code **)*param_2)();
  return cVar1 != '\0';
}

} // namespace tea
