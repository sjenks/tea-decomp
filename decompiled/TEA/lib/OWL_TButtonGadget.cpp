// TEA.exe — runtime / library code "OWL_TButtonGadget"
// 20 functions, 0x00488c78..0x00489bc0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00488c78  OWL::TButtonGadget::TButtonGadget   (330 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TButtonGadget's vtable at its vptr offset (+0x0) in this
int * __cdecl OWL::TButtonGadget::TButtonGadget(int *self,uint *param_2,undefined4 param_3,char param_4,undefined4 param_5, byte param_6,char param_7)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x504b3c);
  OWL::TGadget::TGadget(self,param_3);
  *self = (int)&OWL::TButtonGadget::vftable;
  self[0x11] = 0;
  self[0x13] = 0;
  self[0x14] = 0;
  *(char *)((int)self + 0x57) = param_7;
  if (param_7 == '\0') {
    if ((short)((uint)param_2 >> 0x10) != 0) {
      param_2 = (uint *)FUN_00496d48(param_2);
    }
    self[0x11] = (int)param_2;
    self[0x16] = -1;
    self[0x17] = 4;
  }
  else {
    self[0x11] = 0;
    self[0x16] = (int)param_2;
    self[0x17] = 1;
  }
  self[0x12] = 0;
  self[0x14] = 0;
  self[0x13] = 0;
  *(byte *)(self + 0x15) = param_4 << 4 | *(byte *)(self + 0x15) & 0xf;
  *(undefined1 *)(self + 0xe) = 1;
  *(byte *)(self + 0x15) = param_6 & 0xf | *(byte *)(self + 0x15) & 0xf0;
  *(byte *)((int)self + 0x56) = *(byte *)((int)self + 0x56) | 1;
  *(byte *)((int)self + 0x56) = *(byte *)((int)self + 0x56) & 0xfd;
  (**(code **)(*self + 4))();
  FUN_00488e74((int)self,2);
  *(byte *)((int)self + 0x56) = *(byte *)((int)self + 0x56) | 4;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00488dc4  OWL::TButtonGadget::~TButtonGadget   (176 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TButtonGadget::_dtor
void __cdecl OWL::TButtonGadget::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x504b70);
  if (self != (undefined4 *)0x0) {
    *self = &OWL::TButtonGadget::vftable;
    if ((undefined4 *)self[0x12] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)self[0x12])();
    }
    if ((short)((uint)self[0x11] >> 0x10) != 0) {
      operator_delete_array();
    }
    OWL::TGadget::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00488ed4  OWL::TButtonGadget::vf5   (89 bytes)   [rtti:vtable virtual slot 5]
void __cdecl OWL::TButtonGadget::vf5(int self)

{
  undefined **buttonGadgetEnabler [4];
  int unused;
  
  if (*(int *)(**(int **)(self + 6) + 0xc) != 0) {
    OWL::TCommandEnabler::TCommandEnabler((undefined4*)buttonGadgetEnabler,*(undefined4 *)(self + 0x3a),
                 *(undefined4 *)(**(int **)(self + 6) + 0xc));
    buttonGadgetEnabler[0] = &OWL::TButtonGadgetEnabler::vftable;
    unused = self;
    FUN_004a6094(**(int **)(self + 6),0x7fff,0,buttonGadgetEnabler);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00488f30  OWL::TButtonGadget::vf6   (99 bytes)   [rtti:vtable virtual slot 6]
void __cdecl OWL::TButtonGadget::vf6(int *self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x504bac);
  OWL::TGadget::vf6();
  if ((undefined4 *)self[0x12] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)self[0x12])();
  }
  self[0x12] = 0;
  (**(code **)(*self + 0x60))();
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00489148  OWL::TButtonGadget::vf3   (187 bytes)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TButtonGadget::vf3(int *self,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 unused;
  int local_18;
  int local_14;
  undefined4 unused2;
  
  OWL::TGadget::vf3(self,param_2);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  FUN_004906a0((int)self,&local_30);
  if (self[0x12] == 0) {
    local_18 = (**(code **)(*(int *)(*(int *)((int)self + 6) + 0x18) + 0x2c))();
    local_20 = *(int *)(local_18 + 0x15);
    unused = *(undefined4 *)(local_18 + 0x19);
    piVar1 = &local_20;
  }
  else {
    local_14 = *(int *)(self[0x12] + 0x15);
    unused2 = *(undefined4 *)(self[0x12] + 0x19);
    piVar1 = &local_14;
  }
  iVar4 = piVar1[1];
  uVar2 = (local_28 - local_30) - *piVar1;
  iVar3 = (int)uVar2 >> 1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
  }
  self[0x13] = iVar3 + local_30;
  uVar2 = (local_24 - local_2c) - iVar4;
  iVar4 = (int)uVar2 >> 1;
  if (iVar4 < 0) {
    iVar4 = iVar4 + (uint)((uVar2 & 1) != 0);
  }
  self[0x14] = iVar4 + local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00489204  OWL::TButtonGadget::vf2   (138 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TButtonGadget::vf2(int *self,int *param_2)

{
  int *piVar1;
  int local_1c;
  undefined4 unused;
  int *unused2;
  int local_10;
  int local_c;
  undefined4 unused3;
  
  OWL::TGadget::vf2((int)self,param_2);
  if ((self[0x12] == 0) && (self[0x16] < 0)) {
    (**(code **)(*self + 0x60))();
  }
  if (self[0x12] == 0) {
    local_10 = (**(code **)(*(int *)(*(int *)((int)self + 6) + 0x18) + 0x2c))();
    unused2 = (int *)(local_10 + 0x15);
    local_1c = *(int *)(local_10 + 0x15);
    unused = *(undefined4 *)(local_10 + 0x19);
    piVar1 = &local_1c;
  }
  else {
    local_c = *(int *)(self[0x12] + 0x15);
    unused3 = *(undefined4 *)(self[0x12] + 0x19);
    piVar1 = &local_c;
  }
  *param_2 = *param_2 + *piVar1;
  param_2[1] = param_2[1] + piVar1[1];
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00489290  OWL::TButtonGadget::vf22   (142 bytes)   [rtti:vtable virtual slot 22]
int * __cdecl OWL::TButtonGadget::vf22(int self)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x504bdc);
  if (*(int *)(self + 0x44) == 0) {
    piVar1 = (int *)0x0;
    *sehChainHead = sehPrevFrame;
  }
  else {
    piVar1 = (int *)operator_new();
    if (piVar1 != (int *)0x0) {
      FUN_004b1504(piVar1,*(HMODULE *)(*(int *)(**(int **)(self + 6) + 0x70) + 8),
                   *(LPCSTR *)(self + 0x44));
    }
    FUN_004b11dc((int)piVar1,0xf,(uint *)0x0);
    *sehChainHead = sehPrevFrame;
  }
  return piVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00489338  OWL::TButtonGadget::vf23   (76 bytes)   [rtti:vtable virtual slot 23; function defined from vtable-slot]
void __cdecl OWL::TButtonGadget::vf23(undefined4 self,int param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x504c0c);
  if (param_2 != 0) {
    (*(code *)**(undefined4 **)(param_2 + 5))();
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004893a4  OWL::TButtonGadget::vf24   (484 bytes)   [rtti:vtable virtual slot 24]
void __cdecl OWL::TButtonGadget::vf24(int *self)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *celArray;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  uint bitmap [2];
  uint bitmap2 [2];
  
  __InitExceptBlockLDTC(0x504c6c);
  iVar4 = (**(code **)(*self + 0x58))();
  if (iVar4 == 0) {
    *sehChainHead = sehPrevFrame;
  }
  else {
    bVar3 = true;
    if (*(char *)((int)self + 0x57) != '\0') {
      iVar6 = *(int *)(*(int *)(iVar4 + 9) + 8);
      iVar1 = *(int *)(*(int *)(iVar4 + 9) + 4);
      iVar5 = (**(code **)(*(int *)(*(int *)((int)self + 6) + 0x18) + 0x2c))();
      if ((*(int *)(iVar5 + 0x15) == iVar1) &&
         (*(int *)(iVar5 + 0x19) * *(int *)(iVar5 + 0x29) == iVar6)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        bVar3 = false;
        if (self[0x16] < 0) {
          FUN_004885cc(bitmap,iVar4,(uint *)0x0);
          iVar6 = FUN_00489ffc(iVar5,bitmap);
          self[0x16] = iVar6;
          OWL::TBitmap::_dtor(bitmap,2);
        }
        else {
          FUN_004885cc(bitmap2,iVar4,(uint *)0x0);
          FUN_0048a244(iVar5,self[0x16],bitmap2);
          OWL::TBitmap::_dtor(bitmap2,2);
        }
      }
    }
    if (bVar3) {
      if ((undefined4 *)self[0x12] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)self[0x12])();
      }
      celArray = (undefined4 *)operator_new();
      if (celArray != (undefined4 *)0x0) {
        OWL::TCelArray::TCelArray(celArray,iVar4,1,1);
      }
      self[0x12] = (int)celArray;
      self[0x16] = 0;
      *(undefined1 *)((int)self + 0x57) = 0;
    }
    (**(code **)(*self + 0x5c))();
    *sehChainHead = sehPrevFrame;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048959c  OWL::TButtonGadget::vf12   (77 bytes)   [rtti:vtable virtual slot 12]
void __cdecl OWL::TButtonGadget::vf12(int *self)

{
  int local_14 [4];
  
  (**(code **)(*self + 0x34))();
  local_14[0] = 0;
  local_14[1] = 0;
  local_14[2] = 0;
  local_14[3] = 0;
  FUN_004906a0((int)self,local_14);
  (**(code **)(*self + 0x54))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004895ec  OWL::TButtonGadget::vf13   (389 bytes)   [rtti:vtable virtual slot 13]
void __cdecl OWL::TButtonGadget::vf13(int self,undefined4 *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  bool bVar4;
  
  if ((DAT_00506c48 & 1) == 0) {
    if (((*(byte *)(self + 0x56) & 2) == 0) &&
       ((int)((uint)*(byte *)(self + 0x54) << 0x1c) >> 0x1c != 1)) {
      uVar3 = 6;
    }
    else {
      uVar3 = 7;
    }
    *(undefined4 *)(self + 0x1a) = uVar3;
    OWL::TGadget::vf13(self,param_2);
  }
  else {
    bVar4 = (*(byte *)(self + 0x42) & 1) == 0;
    if ((bVar4) ||
       (((*(byte *)(self + 0x56) & 2) == 0 &&
        ((int)((uint)*(byte *)(self + 0x54) << 0x1c) >> 0x1c != 1)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar4) ||
       ((*(char *)(self + 0x39) == '\0' && (self != *(int *)(*(int *)(self + 6) + 0x20)))))
    {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar1) {
      uVar3 = 3;
    }
    else if (bVar4) {
      uVar3 = 2;
    }
    else {
      uVar3 = 0;
    }
    *(undefined4 *)(self + 0x1a) = uVar3;
    if ((DAT_00506c48 & 0x10) == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)FUN_00489774();
    }
    if (puVar2 == (undefined4 *)0x0) {
      if (bVar1) {
        uVar3 = 3;
      }
      else if (bVar4) {
        uVar3 = 2;
      }
      else {
        uVar3 = 0;
      }
      *(undefined4 *)(self + 0x1a) = uVar3;
      OWL::TGadget::vf13(self,param_2);
    }
    else {
      (*(code *)*puVar2)();
      (*(code *)puVar2[2])();
      (*(code *)puVar2[1])();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004897e4  OWL::TButtonGadget::vf21   (394 bytes)   [rtti:vtable virtual slot 21]
void __cdecl OWL::TButtonGadget::vf21(int self,int *param_2,int *param_3)

{
  bool bVar1;
  int i;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  byte bVar7;
  undefined4 local_5c;
  undefined4 unused;
  int newStr [4];
  undefined4 unused2;
  undefined4 unused3;
  undefined4 unused4;
  int local_38 [4];
  int local_28 [4];
  int local_18;
  int local_14;
  int unused5;
  int local_c;
  int unused6;
  
  bVar7 = 0;
  if (*(int *)(self + 0x48) == 0) {
    iVar3 = (**(code **)(*(int *)(*(int *)(self + 6) + 0x18) + 0x2c))();
  }
  else {
    iVar3 = *(int *)(self + 0x48);
  }
  if ((DAT_00506c48 & 2) != 0) {
    if (*(char *)(self + 0x39) == '\0') {
      if (1 < *(int *)(iVar3 + 0x29)) {
        *(undefined4 *)(iVar3 + 0x2d) = 1;
      }
    }
    else {
      *(undefined4 *)(iVar3 + 0x2d) = 0;
    }
  }
  FUN_00489f80(local_38,iVar3,*(int *)(self + 0x58),-1);
  piVar4 = local_38;
  piVar6 = local_28;
  for (i = 4; i != 0; i = i + -1) {
    *piVar6 = *piVar4;
    piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  local_14 = *(int *)(self + 0x50) - param_3[1];
  local_18 = *(int *)(self + 0x4c) - *param_3;
  local_5c = *(undefined4 *)(iVar3 + 4);
  unused = 1;
  piVar4 = newStr;
  unused5 = local_14;
  local_c = local_18;
  unused6 = local_14;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = *param_3;
    param_3 = param_3 + (uint)bVar7 * -2 + 1;
    piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
  }
  unused2 = DAT_0051b1e0;
  unused3 = DAT_0051b1e0;
  unused4 = 0;
  uVar5 = 3;
  bVar7 = 0;
  if ((*(byte *)(self + 0x42) & 1) != 0) {
    iVar3 = (int)((uint)*(byte *)(self + 0x54) << 0x1c) >> 0x1c;
    if (iVar3 == 1) {
      if ((DAT_00506c48 & 1) == 0) {
        uVar5 = (uint)((*(byte *)(self + 0x56) & 2) != 0);
        bVar7 = *(byte *)(self + 0x56) >> 1 & 1;
      }
      else {
        if ((*(char *)(self + 0x39) == '\0') &&
           (self != *(int *)(*(int *)(self + 6) + 0x20))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        uVar5 = (uint)bVar1;
        if (bVar1) {
          bVar7 = 1;
        }
        else {
          bVar7 = *(byte *)(self + 0x56) >> 1 & 1;
        }
      }
    }
    else if (iVar3 == 2) {
      uVar5 = 2;
      bVar7 = *(byte *)(self + 0x56) >> 1 & 1;
    }
    else {
      uVar5 = 0;
      bVar7 = *(byte *)(self + 0x56) >> 1 & 1;
    }
  }
  FUN_004a12b4(&local_5c,param_2,local_28,&local_c,uVar5,bVar7,'\0');
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00489970  OWL::TButtonGadget::vf25   (65 bytes)   [rtti:vtable virtual slot 25]
void __cdecl OWL::TButtonGadget::vf25(int self)

{
  *(byte *)(self + 0x56) = *(byte *)(self + 0x56) | 2;
  *(undefined1 *)(self + 0x39) = 1;
  FUN_004903b8(self);
  FUN_00490404(self);
  if (*(char *)(*(int *)(self + 6) + 0x36) == '\x01') {
    FUN_004916ec(*(int **)(self + 6),*(int *)(self + 0x3a));
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004899b4  OWL::TButtonGadget::vf26   (66 bytes)   [rtti:vtable virtual slot 26]
void __cdecl OWL::TButtonGadget::vf26(int self,undefined4 param_2,undefined1 param_3)

{
  *(byte *)(self + 0x56) = *(byte *)(self + 0x56) & 0xfd;
  *(undefined1 *)(self + 0x39) = param_3;
  FUN_004903b8(self);
  FUN_00490404(self);
  if (*(char *)(*(int *)(self + 6) + 0x36) == '\x01') {
    FUN_004916ec(*(int **)(self + 6),-1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004899f8  OWL::TButtonGadget::vf27   (207 bytes, 2 ranges)   [rtti:vtable virtual slot 27]
void __cdecl OWL::TButtonGadget::vf27(int *self)

{
  switch((int)((uint)*(byte *)(self + 0x15) << 0x18) >> 0x1c) {
  case 1:
    if ((int)((uint)*(byte *)(self + 0x15) << 0x1c) >> 0x1c != 1) {
      FUN_00488f94(self);
    }
    break;
  case 2:
    *(byte *)(self + 0x15) =
         (*(byte *)(self + 0x15) & 0xf) == 0 | *(byte *)(self + 0x15) & 0xf0;
    break;
  case 3:
    if ((int)((uint)*(byte *)(self + 0x15) << 0x1c) >> 0x1c == 1) {
      *(byte *)(self + 0x15) = *(byte *)(self + 0x15) & 0xf0;
    }
    else {
      FUN_00488f94(self);
    }
  }
  (**(code **)(*self + 0x68))();
  if (((((int)((uint)*(byte *)(self + 0x15) << 0x18) >> 0x1c != 1) &&
       ((int)((uint)*(byte *)(self + 0x15) << 0x18) >> 0x1c != 3)) ||
      ((int)((uint)*(byte *)(self + 0x15) << 0x1c) >> 0x1c == 1)) &&
     ((*(byte *)((int)self + 0x42) & 1) != 0)) {
    PostMessageA(*(HWND *)(**(int **)((int)self + 6) + 0xc),0x111,
                 *(WPARAM *)((int)self + 0x3a),0);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00489adc  OWL::TButtonGadget::vf17   (38 bytes)   [rtti:vtable virtual slot 17]
void __cdecl OWL::TButtonGadget::vf17(int *self)

{
  OWL::TGadget::vf17((int)self);
  (**(code **)(*self + 100))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00489b04  OWL::TButtonGadget::vf14   (56 bytes)   [rtti:vtable virtual slot 14]
void __cdecl OWL::TButtonGadget::vf14(int self)

{
  OWL::TGadget::vf14(self);
  if (*(char *)(*(int *)(self + 6) + 0x36) == '\x02') {
    FUN_004916ec(*(int **)(self + 6),*(int *)(self + 0x3a));
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00489b3c  OWL::TButtonGadget::vf15   (76 bytes)   [rtti:vtable virtual slot 15]
void __cdecl OWL::TButtonGadget::vf15(int *self)

{
  char cVar1;
  
  OWL::TGadget::vf15();
  cVar1 = (**(code **)(*self + 0x2c))();
  if ((*(byte *)((int)self + 0x56) & 2) == 0) {
    if (cVar1 != '\0') {
      (**(code **)(*self + 100))();
    }
  }
  else if (cVar1 == '\0') {
    (**(code **)(*self + 0x68))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00489b88  OWL::TButtonGadget::vf16   (55 bytes)   [rtti:vtable virtual slot 16]
void __cdecl OWL::TButtonGadget::vf16(int self)

{
  OWL::TGadget::vf16(self);
  if (*(char *)(*(int *)(self + 6) + 0x36) == '\x02') {
    FUN_004916ec(*(int **)(self + 6),-1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00489bc0  OWL::TButtonGadget::vf19   (66 bytes)   [rtti:vtable virtual slot 19]
void __cdecl OWL::TButtonGadget::vf19(int *self)

{
  OWL::TGadget::vf19((int)self);
  if ((*(byte *)((int)self + 0x56) & 2) == 0) {
    if ((DAT_00506c48 & 1) != 0) {
      FUN_004903b8((int)self);
    }
  }
  else {
    (**(code **)(*self + 0x6c))();
  }
  return;
}

} // namespace tea
