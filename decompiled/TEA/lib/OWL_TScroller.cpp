// TEA.exe — runtime / library code "OWL_TScroller"
// 16 functions, 0x004c6948..0x004c7890. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004c6948  OWL::TScroller::~TScroller   (110 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TScroller::_dtor
void __cdecl OWL::TScroller::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x511814);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &OWL::TScroller::vftable;
    if (param_1[1] != 0) {
      *(undefined4 *)(param_1[1] + 0x44) = 0;
    }
    OWL::TStreamableBase::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c69b8  OWL::TScroller::vf3   (271 bytes)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TScroller::vf3(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  tagRECT local_14;
  
  if ((param_1[1] != 0) && (*(int *)(param_1[1] + 0xc) != 0)) {
    local_14.left = 0;
    local_14.top = 0;
    local_14.right = 0;
    local_14.bottom = 0;
    FUN_004a7a6c(param_1[1],&local_14);
    iVar2 = local_14.right - local_14.left;
    iVar4 = local_14.bottom - local_14.top;
    if ((iVar2 != 0) && (0 < param_1[8])) {
      iVar3 = (iVar2 + 1) % param_1[8];
      if ((iVar2 + 1) / param_1[8] + -1 < 1) {
        iVar1 = 1;
      }
      else {
        iVar3 = (iVar2 + 1) % param_1[8];
        iVar1 = (iVar2 + 1) / param_1[8] + -1;
      }
      param_1[0xc] = iVar1;
      if ((param_1[6] == 0) || (param_1[6] <= iVar2)) {
        (**(code **)(*param_1 + 0x40))(*param_1,iVar3,iVar2,param_1,0,param_1[0xc],0);
      }
      else {
        iVar3 = (iVar2 * param_1[4]) / param_1[6];
        (**(code **)(*param_1 + 0x40))
                  (iVar3,(iVar2 * param_1[4]) % param_1[6],*param_1,param_1,0,iVar3,1);
      }
    }
    if ((iVar4 != 0) && (0 < param_1[9])) {
      iVar2 = (iVar4 + 1) % param_1[9];
      if ((iVar4 + 1) / param_1[9] + -1 < 1) {
        iVar3 = 1;
      }
      else {
        iVar2 = (iVar4 + 1) % param_1[9];
        iVar3 = (iVar4 + 1) / param_1[9] + -1;
      }
      param_1[0xd] = iVar3;
      if ((param_1[7] == 0) || (param_1[7] <= iVar4)) {
        (**(code **)(*param_1 + 0x40))(*param_1,iVar2,iVar3,param_1,1,param_1[0xd],0);
      }
      else {
        iVar2 = (iVar4 * param_1[5]) / param_1[7];
        (**(code **)(*param_1 + 0x40))
                  (iVar2,(iVar4 * param_1[5]) % param_1[7],*param_1,param_1,1,iVar2,1);
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c6ac8  OWL::TScroller::vf5   (44 bytes)   [rtti:vtable virtual slot 5]
void __cdecl OWL::TScroller::vf5(int *param_1,int param_2,int param_3)

{
  param_1[4] = param_2;
  param_1[5] = param_3;
  (**(code **)(*param_1 + 0x10))();
  (**(code **)(*param_1 + 0x2c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c6af4  OWL::TScroller::vf6   (44 bytes)   [rtti:vtable virtual slot 6]
void __cdecl OWL::TScroller::vf6(int *param_1,int param_2,int param_3)

{
  param_1[6] = param_2;
  param_1[7] = param_3;
  (**(code **)(*param_1 + 0x10))();
  (**(code **)(*param_1 + 0x2c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c6b20  OWL::TScroller::vf2   (27 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TScroller::vf2(int *param_1,int param_2,int param_3)

{
  param_1[8] = param_2;
  param_1[9] = param_3;
  (**(code **)(*param_1 + 0xc))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c6b3c  OWL::TScroller::vf4   (250 bytes)   [rtti:vtable virtual slot 4]
void __cdecl OWL::TScroller::vf4(int *param_1)

{
  int iVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((param_1[1] != 0) && (*(int *)(param_1[1] + 0xc) != 0)) {
    if (*(char *)((int)param_1 + 0x3b) != '\0') {
      (**(code **)(*param_1 + 0x48))();
      if (param_1[4] + -1 < 0x7fff) {
        iVar1 = param_1[4] + -1;
      }
      else {
        iVar1 = 0x7fff;
      }
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      else if (param_1[4] + -1 < 0x7fff) {
        iVar1 = param_1[4] + -1;
      }
      else {
        iVar1 = 0x7fff;
      }
      if ((iVar1 != local_c) || (local_8 != 0)) {
        (**(code **)(*param_1 + 0x4c))();
      }
    }
    if ((char)param_1[0xf] != '\0') {
      (**(code **)(*param_1 + 0x48))();
      if (param_1[5] + -1 < 0x7fff) {
        iVar1 = param_1[5] + -1;
      }
      else {
        iVar1 = 0x7fff;
      }
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      else if (param_1[5] + -1 < 0x7fff) {
        iVar1 = param_1[5] + -1;
      }
      else {
        iVar1 = 0x7fff;
      }
      if ((iVar1 != local_14) || (local_10 != 0)) {
        (**(code **)(*param_1 + 0x4c))();
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c6c38  OWL::TScroller::vf7   (128 bytes)   [rtti:vtable virtual slot 7]
void __cdecl OWL::TScroller::vf7(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8) * *(int *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0xc) * *(int *)(param_1 + 0x24);
  if (((*(char *)(param_1 + 0x3a) != '\0') && (iVar2 < 0x8000)) && (iVar1 < 0x8000)) {
    (**(code **)(*(int *)(param_2 + 5) + 0x2c))();
    FUN_00494454(param_3,iVar2,iVar1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c6cb8  OWL::TScroller::vf8   (152 bytes)   [rtti:vtable virtual slot 8]
void OWL::TScroller::vf8(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_4[1] != 0) {
    if (*(char *)((int)param_4 + 0x3b) != '\0') {
      if (param_4[4] < 0x8000) {
        iVar1 = param_4[2];
      }
      else {
        param_3 = param_4[2];
        iVar1 = (param_3 * 0x7fff) / param_4[4];
        param_2 = (param_3 * 0x7fff) % param_4[4];
      }
      iVar2 = (**(code **)(*param_4 + 0x50))(*param_4,param_2,param_3,param_4,0);
      if (iVar1 != iVar2) {
        (**(code **)(*param_4 + 0x54))();
      }
    }
    if ((char)param_4[0xf] != '\0') {
      if (param_4[5] < 0x8000) {
        iVar1 = param_4[3];
      }
      else {
        iVar1 = (param_4[3] * 0x7fff) / param_4[5];
      }
      iVar2 = (**(code **)(*param_4 + 0x50))();
      if (iVar1 != iVar2) {
        (**(code **)(*param_4 + 0x54))();
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c6d50  OWL::TScroller::vf9   (304 bytes, 2 ranges)   [rtti:vtable virtual slot 9]
void __cdecl OWL::TScroller::vf9(int *param_1,undefined4 param_2,int param_3)

{
  switch(param_2) {
  case 0:
    (**(code **)(*param_1 + 0x2c))();
    return;
  case 1:
    (**(code **)(*param_1 + 0x2c))();
    return;
  case 2:
    (**(code **)(*param_1 + 0x2c))();
    return;
  case 3:
    (**(code **)(*param_1 + 0x2c))();
    return;
  case 4:
    if (0x7fff < param_1[5]) {
      (**(code **)(*param_1 + 0x2c))
                (*param_1,(param_3 * param_1[5]) % 0x7fff,0x7fff,param_1,param_1[2],
                 (param_3 * param_1[5]) / 0x7fff);
      return;
    }
    (**(code **)(*param_1 + 0x2c))();
    return;
  case 5:
    break;
  case 6:
    (**(code **)(*param_1 + 0x2c))();
    return;
  case 7:
    (**(code **)(*param_1 + 0x2c))();
    return;
  default:
    return;
  }
  if (*(char *)((int)param_1 + 0x39) != '\0') {
    if (param_1[5] < 0x8000) {
      (**(code **)(*param_1 + 0x2c))();
    }
    else {
      (**(code **)(*param_1 + 0x2c))
                (*param_1,(param_3 * param_1[5]) % 0x7fff,0x7fff,param_1,param_1[2],
                 (param_3 * param_1[5]) / 0x7fff);
    }
  }
  if (param_1[1] == 0) {
    return;
  }
  if ((char)param_1[0xf] == '\0') {
    return;
  }
  (**(code **)(*param_1 + 0x54))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c6ea0  OWL::TScroller::vf10   (304 bytes, 2 ranges)   [rtti:vtable virtual slot 10]
void __cdecl OWL::TScroller::vf10(int *param_1,undefined4 param_2,int param_3)

{
  switch(param_2) {
  case 0:
    (**(code **)(*param_1 + 0x2c))();
    return;
  case 1:
    (**(code **)(*param_1 + 0x2c))();
    return;
  case 2:
    (**(code **)(*param_1 + 0x2c))();
    return;
  case 3:
    (**(code **)(*param_1 + 0x2c))();
    return;
  case 4:
    if (0x7fff < param_1[4]) {
      (**(code **)(*param_1 + 0x2c))
                (*param_1,(param_3 * param_1[4]) % 0x7fff,0x7fff,param_1,
                 (param_3 * param_1[4]) / 0x7fff,param_1[3]);
      return;
    }
    (**(code **)(*param_1 + 0x2c))();
    return;
  case 5:
    break;
  case 6:
    (**(code **)(*param_1 + 0x2c))();
    return;
  case 7:
    (**(code **)(*param_1 + 0x2c))();
    return;
  default:
    return;
  }
  if (*(char *)((int)param_1 + 0x39) != '\0') {
    if (param_1[4] < 0x8000) {
      (**(code **)(*param_1 + 0x2c))();
    }
    else {
      (**(code **)(*param_1 + 0x2c))
                (*param_1,(param_3 * param_1[4]) % 0x7fff,0x7fff,param_1,
                 (param_3 * param_1[4]) / 0x7fff,param_1[3]);
    }
  }
  if (param_1[1] == 0) {
    return;
  }
  if (*(char *)((int)param_1 + 0x3b) == '\0') {
    return;
  }
  (**(code **)(*param_1 + 0x54))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c6ff0  OWL::TScroller::vf11   (275 bytes)   [rtti:vtable virtual slot 11]
void __cdecl OWL::TScroller::vf11(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  if (*(int *)(*(int *)(param_1 + 4) + 0xc) == 0) {
    return;
  }
  iVar1 = param_2;
  if (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x30) <= param_2) {
    iVar1 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x30);
  }
  if (iVar1 < 0) {
    param_2 = 0;
  }
  else if (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x30) <= param_2) {
    param_2 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x30);
  }
  iVar1 = param_3;
  if (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x34) <= param_3) {
    iVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x34);
  }
  if (iVar1 < 0) {
    param_3 = 0;
  }
  else if (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x34) <= param_3) {
    param_3 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x34);
  }
  if ((param_2 == *(int *)(param_1 + 8)) && (param_3 == *(int *)(param_1 + 0xc))) {
    return;
  }
  if (*(char *)(param_1 + 0x3a) == '\0') {
    if (*(int *)(param_1 + 0xc) - param_3 < 0) {
      iVar1 = -(*(int *)(param_1 + 0xc) - param_3);
    }
    else {
      iVar1 = *(int *)(param_1 + 0xc) - param_3;
    }
    if (iVar1 < *(int *)(param_1 + 0x34)) {
      if (*(int *)(param_1 + 8) - param_2 < 0) {
        iVar1 = -(*(int *)(param_1 + 8) - param_2);
      }
      else {
        iVar1 = *(int *)(param_1 + 8) - param_2;
      }
      if (iVar1 < *(int *)(param_1 + 0x30)) goto LAB_004c70ba;
    }
    (**(code **)(*(int *)(*(int *)(param_1 + 4) + 8) + 0x68))();
  }
  else {
LAB_004c70ba:
    ScrollWindow(*(HWND *)(*(int *)(param_1 + 4) + 0xc),
                 (*(int *)(param_1 + 8) - param_2) * *(int *)(param_1 + 0x20),
                 (*(int *)(param_1 + 0xc) - param_3) * *(int *)(param_1 + 0x24),(RECT *)0x0,
                 (RECT *)0x0);
  }
  *(int *)(param_1 + 8) = param_2;
  *(int *)(param_1 + 0xc) = param_3;
  UpdateWindow(*(HWND *)(*(int *)(param_1 + 4) + 0xc));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7104  OWL::TScroller::vf14   (11 bytes)   [rtti:vtable virtual slot 14]
undefined1 __cdecl OWL::TScroller::vf14(int param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7110  OWL::TScroller::vf15   (593 bytes)   [rtti:vtable virtual slot 15]
void __cdecl OWL::TScroller::vf15(int *param_1)

{
  tagRECT local_1c;
  tagPOINT local_c;
  
  if (((char)param_1[0xe] != '\0') && (param_1[1] != 0)) {
    local_1c.left = 0;
    local_1c.top = 0;
    local_1c.right = 0;
    local_1c.bottom = 0;
    local_c.x = 0;
    local_c.y = 0;
    GetCursorPos(&local_c);
    ScreenToClient(*(HWND *)(param_1[1] + 0xc),&local_c);
    FUN_004a7a6c(param_1[1],&local_1c);
    (**(code **)(*param_1 + 0x2c))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7500  OWL::TScroller::Streamer::vf1   (6 bytes)   [rtti:vtable virtual slot 1]
int __stdcall OWL::TScroller::Streamer::vf1(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  FUN_00499da0(param_2,iVar1 + 8,4);
  FUN_00499da0(param_2,iVar1 + 0xc,4);
  uVar2 = FUN_00499e9c(param_2);
  *(uint *)(iVar1 + 0x20) = uVar2;
  uVar2 = FUN_00499e9c(param_2);
  *(uint *)(iVar1 + 0x24) = uVar2;
  FUN_00499da0(param_2,iVar1 + 0x10,4);
  FUN_00499da0(param_2,iVar1 + 0x14,4);
  uVar2 = FUN_00499e9c(param_2);
  *(uint *)(iVar1 + 0x28) = uVar2;
  uVar2 = FUN_00499e9c(param_2);
  *(uint *)(iVar1 + 0x2c) = uVar2;
  uVar2 = FUN_00499e9c(param_2);
  *(uint *)(iVar1 + 0x30) = uVar2;
  uVar2 = FUN_00499e9c(param_2);
  *(uint *)(iVar1 + 0x34) = uVar2;
  iVar3 = FUN_00499f04(param_2);
  *(bool *)(iVar1 + 0x38) = iVar3 != 0;
  iVar3 = FUN_00499f04(param_2);
  *(bool *)(iVar1 + 0x39) = iVar3 != 0;
  iVar3 = FUN_00499f04(param_2);
  *(bool *)(iVar1 + 0x3a) = iVar3 != 0;
  iVar3 = FUN_00499f04(param_2);
  *(bool *)(iVar1 + 0x3b) = iVar3 != 0;
  iVar3 = FUN_00499f04(param_2);
  *(bool *)(iVar1 + 0x3c) = iVar3 != 0;
  *(undefined4 *)(iVar1 + 4) = 0;
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7654  OWL::TScroller::Streamer::vf2   (313 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TScroller::Streamer::vf2(int param_1,int *param_2)

{
  int iVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  iVar1 = *(int *)(param_1 + 8);
  local_5 = *(undefined1 *)(iVar1 + 0x3b);
  local_6 = *(undefined1 *)(iVar1 + 0x3a);
  local_7 = *(undefined1 *)(iVar1 + 0x39);
  local_8 = *(undefined1 *)(iVar1 + 0x38);
  local_c = *(undefined4 *)(iVar1 + 0x30);
  local_10 = *(undefined4 *)(iVar1 + 0x2c);
  local_14 = *(undefined4 *)(iVar1 + 0x28);
  local_18 = *(undefined4 *)(iVar1 + 0x14);
  local_1c = *(undefined4 *)(iVar1 + 0x10);
  local_20 = *(undefined4 *)(iVar1 + 0x24);
  local_24 = *(undefined4 *)(iVar1 + 0x20);
  local_28 = *(undefined4 *)(iVar1 + 0xc);
  local_2c = *(undefined4 *)(iVar1 + 8);
  FUN_0049a294(param_2,&local_2c,4);
  FUN_0049a294(param_2,&local_28,4);
  FUN_0049a31c(param_2);
  FUN_0049a31c(param_2);
  FUN_0049a294(param_2,&local_1c,4);
  FUN_0049a294(param_2,&local_18,4);
  FUN_0049a31c(param_2);
  FUN_0049a31c(param_2);
  FUN_0049a31c(param_2);
  FUN_0049a31c(param_2);
  FUN_0049a31c(param_2);
  FUN_0049a31c(param_2);
  FUN_0049a31c(param_2);
  FUN_0049a31c(param_2);
  FUN_0049a31c(param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7890  OWL::TScroller::Streamer::vf3   (10 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 __stdcall OWL::TScroller::Streamer::vf3(void)

{
  return 1;
}

} // namespace tea
