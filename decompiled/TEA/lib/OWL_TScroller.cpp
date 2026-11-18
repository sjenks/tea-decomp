// TEA.exe — runtime / library code "OWL_TScroller"
// 19 functions, 0x004c684c..0x004c7890. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004c684c  OWL::TScroller::TScroller   (250 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TScroller's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TScroller::TScroller(undefined4 *self,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6)

{
  undefined1 uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5117f0);
  *self = &OWL::TStreamableBase::vftable;
  *self = &OWL::TScroller::vftable;
  self[1] = param_2;
  self[3] = 0;
  self[2] = 0;
  self[8] = param_3;
  self[9] = param_4;
  self[4] = param_5;
  self[5] = param_6;
  self[6] = 0;
  self[7] = 0;
  self[10] = 1;
  self[0xb] = 1;
  self[0xc] = 1;
  self[0xd] = 1;
  *(undefined1 *)(self + 0xe) = 1;
  *(undefined1 *)((int)self + 0x39) = 1;
  *(undefined1 *)((int)self + 0x3a) = 1;
  if ((self[1] == 0) || ((*(byte *)(self[1] + 0x1a) & 0x10) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)((int)self + 0x3b) = uVar1;
  if ((self[1] == 0) || ((*(byte *)(self[1] + 0x1a) & 0x20) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(self + 0xf) = uVar1;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c6948  OWL::TScroller::~TScroller   (110 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TScroller::_dtor
void __cdecl OWL::TScroller::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x511814);
  if (self != (undefined4 *)0x0) {
    *self = &OWL::TScroller::vftable;
    if (self[1] != 0) {
      *(undefined4 *)(self[1] + 0x44) = 0;
    }
    OWL::TStreamableBase::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c69b8  OWL::TScroller::vf3   (271 bytes)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TScroller::vf3(int *self)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  tagRECT rect;
  
  if ((self[1] != 0) && (*(int *)(self[1] + 0xc) != 0)) {
    rect.left = 0;
    rect.top = 0;
    rect.right = 0;
    rect.bottom = 0;
    FUN_004a7a6c(self[1],&rect);
    iVar2 = rect.right - rect.left;
    iVar4 = rect.bottom - rect.top;
    if ((iVar2 != 0) && (0 < self[8])) {
      iVar3 = (iVar2 + 1) % self[8];
      if ((iVar2 + 1) / self[8] + -1 < 1) {
        iVar1 = 1;
      }
      else {
        iVar3 = (iVar2 + 1) % self[8];
        iVar1 = (iVar2 + 1) / self[8] + -1;
      }
      self[0xc] = iVar1;
      if ((self[6] == 0) || (self[6] <= iVar2)) {
        (**(code **)(*self + 0x40))(*self,iVar3,iVar2,self,0,self[0xc],0);
      }
      else {
        iVar3 = (iVar2 * self[4]) / self[6];
        (**(code **)(*self + 0x40))
                  (iVar3,(iVar2 * self[4]) % self[6],*self,self,0,iVar3,1);
      }
    }
    if ((iVar4 != 0) && (0 < self[9])) {
      iVar2 = (iVar4 + 1) % self[9];
      if ((iVar4 + 1) / self[9] + -1 < 1) {
        iVar3 = 1;
      }
      else {
        iVar2 = (iVar4 + 1) % self[9];
        iVar3 = (iVar4 + 1) / self[9] + -1;
      }
      self[0xd] = iVar3;
      if ((self[7] == 0) || (self[7] <= iVar4)) {
        (**(code **)(*self + 0x40))(*self,iVar2,iVar3,self,1,self[0xd],0);
      }
      else {
        iVar2 = (iVar4 * self[5]) / self[7];
        (**(code **)(*self + 0x40))
                  (iVar2,(iVar4 * self[5]) % self[7],*self,self,1,iVar2,1);
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c6ac8  OWL::TScroller::vf5   (44 bytes)   [rtti:vtable virtual slot 5]
void __cdecl OWL::TScroller::vf5(int *self,int param_2,int param_3)

{
  self[4] = param_2;
  self[5] = param_3;
  (**(code **)(*self + 0x10))();
  (**(code **)(*self + 0x2c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c6af4  OWL::TScroller::vf6   (44 bytes)   [rtti:vtable virtual slot 6]
void __cdecl OWL::TScroller::vf6(int *self,int param_2,int param_3)

{
  self[6] = param_2;
  self[7] = param_3;
  (**(code **)(*self + 0x10))();
  (**(code **)(*self + 0x2c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c6b20  OWL::TScroller::vf2   (27 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TScroller::vf2(int *self,int param_2,int param_3)

{
  self[8] = param_2;
  self[9] = param_3;
  (**(code **)(*self + 0xc))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c6b3c  OWL::TScroller::vf4   (250 bytes)   [rtti:vtable virtual slot 4]
void __cdecl OWL::TScroller::vf4(int *self)

{
  int iVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((self[1] != 0) && (*(int *)(self[1] + 0xc) != 0)) {
    if (*(char *)((int)self + 0x3b) != '\0') {
      (**(code **)(*self + 0x48))();
      if (self[4] + -1 < 0x7fff) {
        iVar1 = self[4] + -1;
      }
      else {
        iVar1 = 0x7fff;
      }
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      else if (self[4] + -1 < 0x7fff) {
        iVar1 = self[4] + -1;
      }
      else {
        iVar1 = 0x7fff;
      }
      if ((iVar1 != local_c) || (local_8 != 0)) {
        (**(code **)(*self + 0x4c))();
      }
    }
    if ((char)self[0xf] != '\0') {
      (**(code **)(*self + 0x48))();
      if (self[5] + -1 < 0x7fff) {
        iVar1 = self[5] + -1;
      }
      else {
        iVar1 = 0x7fff;
      }
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      else if (self[5] + -1 < 0x7fff) {
        iVar1 = self[5] + -1;
      }
      else {
        iVar1 = 0x7fff;
      }
      if ((iVar1 != local_14) || (local_10 != 0)) {
        (**(code **)(*self + 0x4c))();
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c6c38  OWL::TScroller::vf7   (128 bytes)   [rtti:vtable virtual slot 7]
void __cdecl OWL::TScroller::vf7(int self,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(self + 8) * *(int *)(self + 0x20);
  iVar1 = *(int *)(self + 0xc) * *(int *)(self + 0x24);
  if (((*(char *)(self + 0x3a) != '\0') && (iVar2 < 0x8000)) && (iVar1 < 0x8000)) {
    (**(code **)(*(int *)(param_2 + 5) + 0x2c))();
    FUN_00494454(param_3,iVar2,iVar1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c6cb8  OWL::TScroller::vf8   (152 bytes)   [rtti:vtable virtual slot 8]
void OWL::TScroller::vf8(undefined4 self,int param_2,int param_3,int *param_4)

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
void __cdecl OWL::TScroller::vf9(int *self,undefined4 param_2,int param_3)

{
  switch(param_2) {
  case 0:
    (**(code **)(*self + 0x2c))();
    return;
  case 1:
    (**(code **)(*self + 0x2c))();
    return;
  case 2:
    (**(code **)(*self + 0x2c))();
    return;
  case 3:
    (**(code **)(*self + 0x2c))();
    return;
  case 4:
    if (0x7fff < self[5]) {
      (**(code **)(*self + 0x2c))
                (*self,(param_3 * self[5]) % 0x7fff,0x7fff,self,self[2],
                 (param_3 * self[5]) / 0x7fff);
      return;
    }
    (**(code **)(*self + 0x2c))();
    return;
  case 5:
    break;
  case 6:
    (**(code **)(*self + 0x2c))();
    return;
  case 7:
    (**(code **)(*self + 0x2c))();
    return;
  default:
    return;
  }
  if (*(char *)((int)self + 0x39) != '\0') {
    if (self[5] < 0x8000) {
      (**(code **)(*self + 0x2c))();
    }
    else {
      (**(code **)(*self + 0x2c))
                (*self,(param_3 * self[5]) % 0x7fff,0x7fff,self,self[2],
                 (param_3 * self[5]) / 0x7fff);
    }
  }
  if (self[1] == 0) {
    return;
  }
  if ((char)self[0xf] == '\0') {
    return;
  }
  (**(code **)(*self + 0x54))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c6ea0  OWL::TScroller::vf10   (304 bytes, 2 ranges)   [rtti:vtable virtual slot 10]
void __cdecl OWL::TScroller::vf10(int *self,undefined4 param_2,int param_3)

{
  switch(param_2) {
  case 0:
    (**(code **)(*self + 0x2c))();
    return;
  case 1:
    (**(code **)(*self + 0x2c))();
    return;
  case 2:
    (**(code **)(*self + 0x2c))();
    return;
  case 3:
    (**(code **)(*self + 0x2c))();
    return;
  case 4:
    if (0x7fff < self[4]) {
      (**(code **)(*self + 0x2c))
                (*self,(param_3 * self[4]) % 0x7fff,0x7fff,self,
                 (param_3 * self[4]) / 0x7fff,self[3]);
      return;
    }
    (**(code **)(*self + 0x2c))();
    return;
  case 5:
    break;
  case 6:
    (**(code **)(*self + 0x2c))();
    return;
  case 7:
    (**(code **)(*self + 0x2c))();
    return;
  default:
    return;
  }
  if (*(char *)((int)self + 0x39) != '\0') {
    if (self[4] < 0x8000) {
      (**(code **)(*self + 0x2c))();
    }
    else {
      (**(code **)(*self + 0x2c))
                (*self,(param_3 * self[4]) % 0x7fff,0x7fff,self,
                 (param_3 * self[4]) / 0x7fff,self[3]);
    }
  }
  if (self[1] == 0) {
    return;
  }
  if (*(char *)((int)self + 0x3b) == '\0') {
    return;
  }
  (**(code **)(*self + 0x54))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c6ff0  OWL::TScroller::vf11   (275 bytes)   [rtti:vtable virtual slot 11]
void __cdecl OWL::TScroller::vf11(int self,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(self + 4) == 0) {
    return;
  }
  if (*(int *)(*(int *)(self + 4) + 0xc) == 0) {
    return;
  }
  iVar1 = param_2;
  if (*(int *)(self + 0x10) - *(int *)(self + 0x30) <= param_2) {
    iVar1 = *(int *)(self + 0x10) - *(int *)(self + 0x30);
  }
  if (iVar1 < 0) {
    param_2 = 0;
  }
  else if (*(int *)(self + 0x10) - *(int *)(self + 0x30) <= param_2) {
    param_2 = *(int *)(self + 0x10) - *(int *)(self + 0x30);
  }
  iVar1 = param_3;
  if (*(int *)(self + 0x14) - *(int *)(self + 0x34) <= param_3) {
    iVar1 = *(int *)(self + 0x14) - *(int *)(self + 0x34);
  }
  if (iVar1 < 0) {
    param_3 = 0;
  }
  else if (*(int *)(self + 0x14) - *(int *)(self + 0x34) <= param_3) {
    param_3 = *(int *)(self + 0x14) - *(int *)(self + 0x34);
  }
  if ((param_2 == *(int *)(self + 8)) && (param_3 == *(int *)(self + 0xc))) {
    return;
  }
  if (*(char *)(self + 0x3a) == '\0') {
    if (*(int *)(self + 0xc) - param_3 < 0) {
      iVar1 = -(*(int *)(self + 0xc) - param_3);
    }
    else {
      iVar1 = *(int *)(self + 0xc) - param_3;
    }
    if (iVar1 < *(int *)(self + 0x34)) {
      if (*(int *)(self + 8) - param_2 < 0) {
        iVar1 = -(*(int *)(self + 8) - param_2);
      }
      else {
        iVar1 = *(int *)(self + 8) - param_2;
      }
      if (iVar1 < *(int *)(self + 0x30)) goto LAB_004c70ba;
    }
    (**(code **)(*(int *)(*(int *)(self + 4) + 8) + 0x68))();
  }
  else {
LAB_004c70ba:
    ScrollWindow(*(HWND *)(*(int *)(self + 4) + 0xc),
                 (*(int *)(self + 8) - param_2) * *(int *)(self + 0x20),
                 (*(int *)(self + 0xc) - param_3) * *(int *)(self + 0x24),(RECT *)0x0,
                 (RECT *)0x0);
  }
  *(int *)(self + 8) = param_2;
  *(int *)(self + 0xc) = param_3;
  UpdateWindow(*(HWND *)(*(int *)(self + 4) + 0xc));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7104  OWL::TScroller::vf14   (11 bytes)   [rtti:vtable virtual slot 14]
undefined1 __cdecl OWL::TScroller::vf14(int self)

{
  return *(undefined1 *)(self + 0x38);
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7110  OWL::TScroller::vf15   (593 bytes)   [rtti:vtable virtual slot 15]
void __cdecl OWL::TScroller::vf15(int *self)

{
  tagRECT rect;
  tagPOINT pt;
  
  if (((char)self[0xe] != '\0') && (self[1] != 0)) {
    rect.left = 0;
    rect.top = 0;
    rect.right = 0;
    rect.bottom = 0;
    pt.x = 0;
    pt.y = 0;
    GetCursorPos(&pt);
    ScreenToClient(*(HWND *)(self[1] + 0xc),&pt);
    FUN_004a7a6c(self[1],&rect);
    (**(code **)(*self + 0x2c))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c73ec  OWL::TScroller::Streamer::Streamer   (102 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TScroller::Streamer's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TScroller::Streamer::Streamer(undefined4 *self,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5118b8);
  *self = &OWL::TStreamer::vftable;
  self[1] = param_2;
  *self = &OWL::TNewStreamer::vftable;
  *self = &OWL::TScroller::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_004dd744((int)param_2,iVar2,(int *)&DAT_004027f0,(int *)&DAT_00428068,0);
  self[2] = puVar1;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7454  OWL::TScroller::TScroller_4c7454   (62 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TScroller's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TScroller::TScroller_4c7454(undefined4 *self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5118d0);
  *self = &OWL::TStreamableBase::vftable;
  *self = &OWL::TScroller::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7500  OWL::TScroller::Streamer::vf1   (6 bytes)   [rtti:vtable virtual slot 1]
int __stdcall OWL::TScroller::Streamer::vf1(int self,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(self + 8);
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
void __cdecl OWL::TScroller::Streamer::vf2(int self,int *param_2)

{
  int iVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 unused;
  undefined4 unused2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 unused3;
  undefined4 unused4;
  undefined4 unused5;
  undefined1 unused6;
  undefined1 unused7;
  undefined1 unused8;
  undefined1 unused9;
  
  iVar1 = *(int *)(self + 8);
  unused9 = *(undefined1 *)(iVar1 + 0x3b);
  unused8 = *(undefined1 *)(iVar1 + 0x3a);
  unused7 = *(undefined1 *)(iVar1 + 0x39);
  unused6 = *(undefined1 *)(iVar1 + 0x38);
  unused5 = *(undefined4 *)(iVar1 + 0x30);
  unused4 = *(undefined4 *)(iVar1 + 0x2c);
  unused3 = *(undefined4 *)(iVar1 + 0x28);
  local_18 = *(undefined4 *)(iVar1 + 0x14);
  local_1c = *(undefined4 *)(iVar1 + 0x10);
  unused2 = *(undefined4 *)(iVar1 + 0x24);
  unused = *(undefined4 *)(iVar1 + 0x20);
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
