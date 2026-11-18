// TSMerge.exe — runtime / library code "OWL_TDib"
// 4 functions, 0x00413044..0x00435ac4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00413044  OWL::TDib::vf3   (19 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
/* WARNING: Unable to track spacebase fully for stack */
void OWL::TDib::vf3(char *self,int param_2,char param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  undefined4 *sehChainHead;
  int in_stack_00000000;
  
  *self = *self + (char)self;
  *(char *)((int)self * 2) = *(char *)((int)self * 2) + param_3;
  *(int *)(in_stack_00000000 + -5) = in_stack_00000000 + -1;
  iVar3 = *(int *)(param_2 + 0x20) * -0x74aaffd6;
  in((short)param_2);
  *(undefined4 *)(iVar3 + -0x30) = 0x41306c;
  __InitExceptBlockLDTC(0x465598);
  *(undefined4 *)(unaff_EBP + -8) = *(undefined4 *)(unaff_EBP + 0xc);
  if (*(int *)(unaff_EBP + -8) != 0) {
    *(undefined4 *)(unaff_EBP + -4) = *(undefined4 *)(*(int *)(unaff_EBP + -8) + 5);
    *(undefined2 *)(unaff_EBP + -0x1c) = 0x14;
    *(undefined4 *)(iVar3 + -0x30) = 3;
    iVar1 = *(int *)(unaff_EBP + -8);
    *(int *)(iVar3 + -0x34) = iVar1;
    pcVar2 = (code *)**(undefined4 **)(iVar1 + 5);
    *(undefined4 *)(iVar3 + -0x38) = 0x413092;
    (*pcVar2)();
    *(undefined2 *)(unaff_EBP + -0x1c) = 8;
  }
  *sehChainHead = *(undefined4 *)(unaff_EBP + -0x2c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435578  OWL::TDib::~TDib   (66 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TDib::_dtor
void __cdecl OWL::TDib::_dtor(int *self,byte dtorFlags)

{
  if (self != (int *)0x0) {
    *(undefined ***)((int)self + 5) = &OWL::TDib::vftable;
    if ((*self != 0) && (*(char *)((int)self + 0x1f) == '\0')) {
      GlobalUnlock((HGLOBAL)*self);
      if ((char)self[1] != '\0') {
        GlobalFree((HGLOBAL)*self);
      }
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435768  OWL::TDib::vf1   (633 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TDib::vf1(int *self,int *param_2,char param_3)

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
  int unused;
  undefined4 unused2;
  undefined4 unused3;
  int local_34;
  undefined4 unused4;
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
      FUN_0043e780();
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
        FUN_0043e780();
        return 0;
      }
      local_50 = (uint)local_5c;
      local_4c = (uint)local_5a;
      local_48 = local_58;
      local_46 = local_56;
      local_44 = 0;
      unused = 0;
      unused2 = 0;
      unused3 = 0;
      local_34 = 0;
      unused4 = 0;
    }
    else {
      local_14 = local_8 + -4;
      iVar1 = (**(code **)*param_2)();
      if (iVar1 != local_14) {
        FUN_0043e780();
        return 0;
      }
    }
    if (local_48 == 1) {
      if (local_34 == 0) {
        local_34 = FUN_004152b4(local_46);
      }
      if ((local_44 == 0) || (local_44 == 3)) {
        uVar3 = local_46 * local_50 + 0x1f & 0xffffffe0;
        if ((int)uVar3 < 0) {
          uVar3 = uVar3 + 7;
        }
        unused = ((int)uVar3 >> 3) * local_4c;
      }
      FUN_004353fc(self,&local_54);
      if (*(int *)((int)self + 0xd) != 0) {
        local_18 = 0xc;
        iVar1 = (**(code **)*param_2)();
        if (iVar1 != local_18) {
          GlobalUnlock((HGLOBAL)*self);
          return 0;
        }
      }
      if (local_9 == '\0') {
        local_1c = *(int *)((int)self + 0x19) << 2;
      }
      else {
        local_1c = *(int *)((int)self + 0x19) * 3;
      }
      if (*(int *)((int)self + 0x11) != 0) {
        iVar1 = (**(code **)*param_2)();
        if (iVar1 != local_1c) {
          GlobalUnlock((HGLOBAL)*self);
          return 0;
        }
        if (local_9 != '\0') {
          iVar1 = *(int *)((int)self + 0x19);
          while (iVar1 = iVar1 + -1, -1 < iVar1) {
            *(undefined1 *)(*(int *)((int)self + 0x11) + 2 + iVar1 * 4) =
                 *(undefined1 *)(*(int *)((int)self + 0x11) + 2 + iVar1 * 3);
            *(undefined1 *)(*(int *)((int)self + 0x11) + 1 + iVar1 * 4) =
                 *(undefined1 *)(*(int *)((int)self + 0x11) + 1 + iVar1 * 3);
            *(undefined1 *)(*(int *)((int)self + 0x11) + iVar1 * 4) =
                 *(undefined1 *)(*(int *)((int)self + 0x11) + iVar1 * 3);
            *(undefined1 *)(*(int *)((int)self + 0x11) + 3 + iVar1 * 4) = 0;
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
      FUN_0043e780();
      uVar2 = 0;
    }
  }
  else {
    FUN_0043e780();
    uVar2 = 0;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435ac4  OWL::TDib::vf2   (119 bytes)   [rtti:vtable virtual slot 2]
bool __cdecl OWL::TDib::vf2(undefined4 *self,undefined4 *param_2,char param_3)

{
  char cVar1;
  
  GlobalSize((HGLOBAL)*self);
  if ((param_3 != '\0') && (cVar1 = (**(code **)*param_2)(), cVar1 == '\0')) {
    return false;
  }
  cVar1 = (**(code **)*param_2)();
  return cVar1 != '\0';
}

} // namespace tea
