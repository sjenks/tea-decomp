// TEA.exe — runtime / library code "OWL_TTextGadget"
// 5 functions, 0x00498b64..0x0049ee80. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00498b64  OWL::TTextGadget::vf21   (16 bytes)   [rtti:vtable virtual slot 21]
void __cdecl OWL::TTextGadget::vf21(undefined4 *self)

{
  *self = DAT_0051b1ec;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049eb84  OWL::TTextGadget::TTextGadget   (228 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TTextGadget's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TTextGadget::TTextGadget(undefined4 *self,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,uint *param_6,undefined4 param_7)

{
  int metric;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50965c);
  OWL::TGadget::TGadget(self,param_2);
  *self = &OWL::TTextGadget::vftable;
  self[0x15] = param_7;
  self[0x16] = 0;
  self[0x17] = 0;
  metric = GetSystemMetrics(DAT_00509df8);
  *(char *)((int)self + 0x33) = (char)metric;
  *(undefined1 *)((int)self + 0x32) = *(undefined1 *)((int)self + 0x33);
  self[0x13] = param_4;
  self[0x14] = param_5;
  self[0x11] = 0;
  self[0x12] = 0;
  FUN_0049f044((int)self);
  FUN_0049f058((int)self);
  FUN_0048fe6c((int)self,0,1);
  FUN_0049ed44((int)self,param_6);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049ec68  OWL::TTextGadget::~TTextGadget   (153 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TTextGadget::_dtor
void __cdecl OWL::TTextGadget::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x509690);
  if (self != (undefined4 *)0x0) {
    *self = &OWL::TTextGadget::vftable;
    operator_delete_array();
    if ((uint *)self[0x15] != (uint *)0x0) {
      OWL::TGdiObject::_dtor((uint *)self[0x15],0);
      operator_delete();
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
// 0x0049edbc  OWL::TTextGadget::vf2   (194 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TTextGadget::vf2(int self,int *param_2)

{
  int iVar1;
  int local_90 [14];
  LONG local_58 [6];
  int local_40;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c [2];
  
  OWL::TGadget::vf2(self,param_2);
  iVar1 = *(int *)(self + 0x54);
  if (iVar1 == 0) {
    iVar1 = *(int *)(*(int *)(self + 6) + 0x1c);
  }
  if (iVar1 != 0) {
    if (*(char *)(self + 0x36) == '\0') {
      FUN_004905e8(self,&local_10,&local_14,&local_18,&local_1c);
      FUN_0048f8fc(local_58,iVar1);
      local_20 = local_40 * *(int *)(self + 0x50);
      *param_2 = *param_2 +
                 ((local_20 + local_10 + local_14) -
                 (*(int *)(self + 0x12) - *(int *)(self + 10)));
    }
    else {
      FUN_0048f980(local_c,iVar1,*(uint **)(self + 0x44));
      *param_2 = *param_2 + local_c[0];
    }
    if (*(char *)(self + 0x37) != '\0') {
      FUN_0048f8fc(local_90,iVar1);
      param_2[1] = param_2[1] + local_90[0] + 2;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049ee80  OWL::TTextGadget::vf12   (449 bytes)   [rtti:vtable virtual slot 12]
void __cdecl OWL::TTextGadget::vf12(int *self,int *param_2)

{
  uint uVar1;
  bool bVar2;
  undefined4 *puVar3;
  int i;
  int *piVar5;
  int *piVar6;
  byte bVar7;
  int local_68 [6];
  undefined4 unused;
  int unused2;
  uint unused3;
  int local_44;
  undefined4 local_40;
  undefined4 unused4;
  undefined4 unused5;
  int local_28;
  undefined4 unused6;
  int *local_20;
  uint local_1c [5];
  undefined4 unused7;
  
  bVar7 = 0;
  (**(code **)(*self + 0x34))();
  local_44 = 0;
  local_40 = 0;
  unused4 = 0;
  unused5 = 0;
  FUN_004906a0((int)self,&local_44);
  if (self[0x15] == 0) {
    (**(code **)(*(int *)((int)param_2 + 5) + 0x14))();
  }
  else {
    (**(code **)(*(int *)((int)param_2 + 5) + 0x14))();
  }
  (**(code **)(*self + 0x54))();
  if ((*(byte *)((int)self + 0x42) & 1) == 0) {
    bVar2 = FUN_004875a8();
    if (bVar2) {
      puVar3 = &DAT_0051b1f4;
    }
    else {
      puVar3 = &DAT_0051b1e8;
    }
    unused7 = *puVar3;
  }
  if (self[0x11] == 0) {
    (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    (**(code **)(*(int *)((int)param_2 + 5) + 0x48))();
    (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    goto LAB_0049f032;
  }
  local_1c[0] = DAT_00509640;
  local_1c[1] = DAT_00509644;
  local_1c[2] = DAT_00509648;
  uVar1 = local_1c[self[0x13]];
  local_20 = self + 0x16;
  local_68[0] = self[0x11];
  local_68[1] = 0;
  piVar5 = &local_44;
  piVar6 = local_68 + 2;
  for (i = 4; i != 0; i = i + -1) {
    *piVar6 = *piVar5;
    piVar5 = piVar5 + (uint)bVar7 * -2 + 1;
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  unused = (*(undefined4 *)&DAT_0051b19c);
  unused2 = *local_20;
  local_28 = local_44;
  unused6 = local_40;
  unused3 = uVar1 | 0x24;
  (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
  (**(code **)(*(int *)((int)param_2 + 5) + 0x24))();
  if ((*(byte *)((int)self + 0x42) & 1) == 0) {
    bVar2 = FUN_004875a8();
    if (!bVar2) goto LAB_0049f009;
    FUN_004a1174(local_68,param_2,&local_28,3,'\0','\x01');
  }
  else {
LAB_0049f009:
    FUN_004a1174(local_68,param_2,&local_28,0,'\0','\x01');
  }
  (**(code **)(*(int *)((int)param_2 + 5) + 0x24))();
LAB_0049f032:
  (**(code **)(*(int *)((int)param_2 + 5) + 0x1c))();
  return;
}

} // namespace tea
