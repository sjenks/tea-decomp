// TSBuild.exe — runtime / library code "OWL_TButtonGadget"
// 20 functions, 0x0041d5d4..0x0041e908. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041d5d4  OWL::TButtonGadget::vf28   (9 bytes)   [rtti:vtable virtual slot 28; function defined from vtable-slot]
void OWL::TButtonGadget::vf28(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *param_1;
  bVar2 = (byte)param_1;
  *param_1 = *param_1 + bVar2;
  *param_1 = *param_1 + bVar2 + CARRY1(bVar1,bVar2);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0041db0c  OWL::TButtonGadget::~TButtonGadget   (176 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TButtonGadget::_dtor
void __cdecl OWL::TButtonGadget::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x4792b0);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &OWL::TButtonGadget::vftable;
    if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x12])();
    }
    if ((short)((uint)param_1[0x11] >> 0x10) != 0) {
      operator_delete_array();
    }
    OWL::TGadget::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041dc1c  OWL::TButtonGadget::vf5   (89 bytes)   [rtti:vtable virtual slot 5]
void __cdecl OWL::TButtonGadget::vf5(int param_1)

{
  undefined **local_18 [4];
  int local_8;
  
  if (*(int *)(**(int **)(param_1 + 6) + 0xc) != 0) {
    FUN_00435bb0((undefined4*)local_18,*(undefined4 *)(param_1 + 0x3a),
                 *(undefined4 *)(**(int **)(param_1 + 6) + 0xc));
    local_18[0] = &OWL::TButtonGadgetEnabler::vftable;
    local_8 = param_1;
    FUN_00436d48(**(int **)(param_1 + 6),0x7fff,0,local_18);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041dc78  OWL::TButtonGadget::vf6   (99 bytes)   [rtti:vtable virtual slot 6]
void __cdecl OWL::TButtonGadget::vf6(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x4792ec);
  OWL::TGadget::vf6();
  if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x12])();
  }
  param_1[0x12] = 0;
  (**(code **)(*param_1 + 0x60))();
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041de90  OWL::TButtonGadget::vf3   (187 bytes)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TButtonGadget::vf3(int *param_1,int *param_2)

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
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  
  OWL::TGadget::vf3(param_1,param_2);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  FUN_00424a64((int)param_1,&local_30);
  if (param_1[0x12] == 0) {
    local_18 = (**(code **)(*(int *)(*(int *)((int)param_1 + 6) + 0x18) + 0x2c))();
    local_20 = *(int *)(local_18 + 0x15);
    local_1c = *(undefined4 *)(local_18 + 0x19);
    piVar1 = &local_20;
  }
  else {
    local_14 = *(int *)(param_1[0x12] + 0x15);
    local_10 = *(undefined4 *)(param_1[0x12] + 0x19);
    piVar1 = &local_14;
  }
  iVar4 = piVar1[1];
  uVar2 = (local_28 - local_30) - *piVar1;
  iVar3 = (int)uVar2 >> 1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
  }
  param_1[0x13] = iVar3 + local_30;
  uVar2 = (local_24 - local_2c) - iVar4;
  iVar4 = (int)uVar2 >> 1;
  if (iVar4 < 0) {
    iVar4 = iVar4 + (uint)((uVar2 & 1) != 0);
  }
  param_1[0x14] = iVar4 + local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041df4c  OWL::TButtonGadget::vf2   (138 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TButtonGadget::vf2(int *param_1,int *param_2)

{
  int *piVar1;
  int local_1c;
  undefined4 local_18;
  int *local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  OWL::TGadget::vf2((int)param_1,param_2);
  if ((param_1[0x12] == 0) && (param_1[0x16] < 0)) {
    (**(code **)(*param_1 + 0x60))();
  }
  if (param_1[0x12] == 0) {
    local_10 = (**(code **)(*(int *)(*(int *)((int)param_1 + 6) + 0x18) + 0x2c))();
    local_14 = (int *)(local_10 + 0x15);
    local_1c = *(int *)(local_10 + 0x15);
    local_18 = *(undefined4 *)(local_10 + 0x19);
    piVar1 = &local_1c;
  }
  else {
    local_c = *(int *)(param_1[0x12] + 0x15);
    local_8 = *(undefined4 *)(param_1[0x12] + 0x19);
    piVar1 = &local_c;
  }
  *param_2 = *param_2 + *piVar1;
  param_2[1] = param_2[1] + piVar1[1];
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041dfd8  OWL::TButtonGadget::vf22   (142 bytes)   [rtti:vtable virtual slot 22]
int * __cdecl OWL::TButtonGadget::vf22(int param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x47931c);
  if (*(int *)(param_1 + 0x44) == 0) {
    piVar1 = (int *)0x0;
    *in_FS_OFFSET = local_2c;
  }
  else {
    piVar1 = (int *)operator_new();
    if (piVar1 != (int *)0x0) {
      FUN_00440b78(piVar1,*(HMODULE *)(*(int *)(**(int **)(param_1 + 6) + 0x70) + 8),
                   *(LPCSTR *)(param_1 + 0x44));
    }
    FUN_00440850((int)piVar1,0xf,(uint *)0x0);
    *in_FS_OFFSET = local_2c;
  }
  return piVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e080  OWL::TButtonGadget::vf23   (76 bytes)   [rtti:vtable virtual slot 23; function defined from vtable-slot]
void __cdecl OWL::TButtonGadget::vf23(undefined4 param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x47934c);
  if (param_2 != 0) {
    (*(code *)**(undefined4 **)(param_2 + 5))();
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e0ec  OWL::TButtonGadget::vf24   (484 bytes)   [rtti:vtable virtual slot 24]
void __cdecl OWL::TButtonGadget::vf24(int *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 local_44;
  uint local_14 [2];
  uint local_c [2];
  
  __InitExceptBlockLDTC(0x4793ac);
  iVar4 = (**(code **)(*param_1 + 0x58))();
  if (iVar4 == 0) {
    *in_FS_OFFSET = local_44;
  }
  else {
    bVar3 = true;
    if (*(char *)((int)param_1 + 0x57) != '\0') {
      iVar6 = *(int *)(*(int *)(iVar4 + 9) + 8);
      iVar1 = *(int *)(*(int *)(iVar4 + 9) + 4);
      iVar5 = (**(code **)(*(int *)(*(int *)((int)param_1 + 6) + 0x18) + 0x2c))();
      if ((*(int *)(iVar5 + 0x15) == iVar1) &&
         (*(int *)(iVar5 + 0x19) * *(int *)(iVar5 + 0x29) == iVar6)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        bVar3 = false;
        if (param_1[0x16] < 0) {
          FUN_0041cf04(local_14,iVar4,(uint *)0x0);
          iVar6 = FUN_0041ed44(iVar5,local_14);
          param_1[0x16] = iVar6;
          OWL::TBitmap::_dtor(local_14,2);
        }
        else {
          FUN_0041cf04(local_c,iVar4,(uint *)0x0);
          FUN_0041ef8c(iVar5,param_1[0x16],local_c);
          OWL::TBitmap::_dtor(local_c,2);
        }
      }
    }
    if (bVar3) {
      if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[0x12])();
      }
      puVar7 = (undefined4 *)operator_new();
      if (puVar7 != (undefined4 *)0x0) {
        FUN_0041e9bc(puVar7,iVar4,1,1);
      }
      param_1[0x12] = (int)puVar7;
      param_1[0x16] = 0;
      *(undefined1 *)((int)param_1 + 0x57) = 0;
    }
    (**(code **)(*param_1 + 0x5c))();
    *in_FS_OFFSET = local_44;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e2e4  OWL::TButtonGadget::vf12   (77 bytes)   [rtti:vtable virtual slot 12]
void __cdecl OWL::TButtonGadget::vf12(int *param_1)

{
  int local_14 [4];
  
  (**(code **)(*param_1 + 0x34))();
  local_14[0] = 0;
  local_14[1] = 0;
  local_14[2] = 0;
  local_14[3] = 0;
  FUN_00424a64((int)param_1,local_14);
  (**(code **)(*param_1 + 0x54))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e334  OWL::TButtonGadget::vf13   (389 bytes)   [rtti:vtable virtual slot 13]
void __cdecl OWL::TButtonGadget::vf13(int param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  bool bVar4;
  
  if ((DAT_0047b01c & 1) == 0) {
    if (((*(byte *)(param_1 + 0x56) & 2) == 0) &&
       ((int)((uint)*(byte *)(param_1 + 0x54) << 0x1c) >> 0x1c != 1)) {
      uVar3 = 6;
    }
    else {
      uVar3 = 7;
    }
    *(undefined4 *)(param_1 + 0x1a) = uVar3;
    OWL::TGadget::vf13(param_1,param_2);
  }
  else {
    bVar4 = (*(byte *)(param_1 + 0x42) & 1) == 0;
    if ((bVar4) ||
       (((*(byte *)(param_1 + 0x56) & 2) == 0 &&
        ((int)((uint)*(byte *)(param_1 + 0x54) << 0x1c) >> 0x1c != 1)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar4) ||
       ((*(char *)(param_1 + 0x39) == '\0' && (param_1 != *(int *)(*(int *)(param_1 + 6) + 0x20)))))
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
    *(undefined4 *)(param_1 + 0x1a) = uVar3;
    if ((DAT_0047b01c & 0x10) == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)FUN_0041e4bc();
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
      *(undefined4 *)(param_1 + 0x1a) = uVar3;
      OWL::TGadget::vf13(param_1,param_2);
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
// 0x0041e52c  OWL::TButtonGadget::vf21   (394 bytes)   [rtti:vtable virtual slot 21]
void __cdecl OWL::TButtonGadget::vf21(int param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  byte bVar7;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38 [4];
  int local_28 [4];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  bVar7 = 0;
  if (*(int *)(param_1 + 0x48) == 0) {
    iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 6) + 0x18) + 0x2c))();
  }
  else {
    iVar3 = *(int *)(param_1 + 0x48);
  }
  if ((DAT_0047b01c & 2) != 0) {
    if (*(char *)(param_1 + 0x39) == '\0') {
      if (1 < *(int *)(iVar3 + 0x29)) {
        *(undefined4 *)(iVar3 + 0x2d) = 1;
      }
    }
    else {
      *(undefined4 *)(iVar3 + 0x2d) = 0;
    }
  }
  FUN_0041ecc8(local_38,iVar3,*(int *)(param_1 + 0x58),-1);
  piVar4 = local_38;
  piVar6 = local_28;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = *piVar4;
    piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  local_14 = *(int *)(param_1 + 0x50) - param_3[1];
  local_18 = *(int *)(param_1 + 0x4c) - *param_3;
  local_5c = *(undefined4 *)(iVar3 + 4);
  local_58 = 1;
  piVar4 = local_54;
  local_10 = local_14;
  local_c = local_18;
  local_8 = local_14;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = *param_3;
    param_3 = param_3 + (uint)bVar7 * -2 + 1;
    piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
  }
  local_44 = DAT_0048c698;
  local_40 = DAT_0048c698;
  local_3c = 0;
  uVar5 = 3;
  bVar7 = 0;
  if ((*(byte *)(param_1 + 0x42) & 1) != 0) {
    iVar3 = (int)((uint)*(byte *)(param_1 + 0x54) << 0x1c) >> 0x1c;
    if (iVar3 == 1) {
      if ((DAT_0047b01c & 1) == 0) {
        uVar5 = (uint)((*(byte *)(param_1 + 0x56) & 2) != 0);
        bVar7 = *(byte *)(param_1 + 0x56) >> 1 & 1;
      }
      else {
        if ((*(char *)(param_1 + 0x39) == '\0') &&
           (param_1 != *(int *)(*(int *)(param_1 + 6) + 0x20))) {
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
          bVar7 = *(byte *)(param_1 + 0x56) >> 1 & 1;
        }
      }
    }
    else if (iVar3 == 2) {
      uVar5 = 2;
      bVar7 = *(byte *)(param_1 + 0x56) >> 1 & 1;
    }
    else {
      uVar5 = 0;
      bVar7 = *(byte *)(param_1 + 0x56) >> 1 & 1;
    }
  }
  FUN_00432478(&local_5c,param_2,local_28,&local_c,uVar5,bVar7,'\0');
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e6b8  OWL::TButtonGadget::vf25   (65 bytes)   [rtti:vtable virtual slot 25]
void __cdecl OWL::TButtonGadget::vf25(int param_1)

{
  *(byte *)(param_1 + 0x56) = *(byte *)(param_1 + 0x56) | 2;
  *(undefined1 *)(param_1 + 0x39) = 1;
  FUN_0042477c(param_1);
  FUN_004247c8(param_1);
  if (*(char *)(*(int *)(param_1 + 6) + 0x36) == '\x01') {
    FUN_00425990(*(int **)(param_1 + 6),*(int *)(param_1 + 0x3a));
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e6fc  OWL::TButtonGadget::vf26   (66 bytes)   [rtti:vtable virtual slot 26]
void __cdecl OWL::TButtonGadget::vf26(int param_1,undefined4 param_2,undefined1 param_3)

{
  *(byte *)(param_1 + 0x56) = *(byte *)(param_1 + 0x56) & 0xfd;
  *(undefined1 *)(param_1 + 0x39) = param_3;
  FUN_0042477c(param_1);
  FUN_004247c8(param_1);
  if (*(char *)(*(int *)(param_1 + 6) + 0x36) == '\x01') {
    FUN_00425990(*(int **)(param_1 + 6),-1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e740  OWL::TButtonGadget::vf27   (207 bytes, 2 ranges)   [rtti:vtable virtual slot 27]
void __cdecl OWL::TButtonGadget::vf27(int *param_1)

{
  switch((int)((uint)*(byte *)(param_1 + 0x15) << 0x18) >> 0x1c) {
  case 1:
    if ((int)((uint)*(byte *)(param_1 + 0x15) << 0x1c) >> 0x1c != 1) {
      FUN_0041dcdc(param_1);
    }
    break;
  case 2:
    *(byte *)(param_1 + 0x15) =
         (*(byte *)(param_1 + 0x15) & 0xf) == 0 | *(byte *)(param_1 + 0x15) & 0xf0;
    break;
  case 3:
    if ((int)((uint)*(byte *)(param_1 + 0x15) << 0x1c) >> 0x1c == 1) {
      *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) & 0xf0;
    }
    else {
      FUN_0041dcdc(param_1);
    }
  }
  (**(code **)(*param_1 + 0x68))();
  if (((((int)((uint)*(byte *)(param_1 + 0x15) << 0x18) >> 0x1c != 1) &&
       ((int)((uint)*(byte *)(param_1 + 0x15) << 0x18) >> 0x1c != 3)) ||
      ((int)((uint)*(byte *)(param_1 + 0x15) << 0x1c) >> 0x1c == 1)) &&
     ((*(byte *)((int)param_1 + 0x42) & 1) != 0)) {
    PostMessageA(*(HWND *)(**(int **)((int)param_1 + 6) + 0xc),0x111,
                 *(WPARAM *)((int)param_1 + 0x3a),0);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e824  OWL::TButtonGadget::vf17   (38 bytes)   [rtti:vtable virtual slot 17]
void __cdecl OWL::TButtonGadget::vf17(int *param_1)

{
  OWL::TGadget::vf17((int)param_1);
  (**(code **)(*param_1 + 100))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e84c  OWL::TButtonGadget::vf14   (56 bytes)   [rtti:vtable virtual slot 14]
void __cdecl OWL::TButtonGadget::vf14(int param_1)

{
  OWL::TGadget::vf14(param_1);
  if (*(char *)(*(int *)(param_1 + 6) + 0x36) == '\x02') {
    FUN_00425990(*(int **)(param_1 + 6),*(int *)(param_1 + 0x3a));
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e884  OWL::TButtonGadget::vf15   (76 bytes)   [rtti:vtable virtual slot 15]
void __cdecl OWL::TButtonGadget::vf15(int *param_1)

{
  char cVar1;
  
  OWL::TGadget::vf15();
  cVar1 = (**(code **)(*param_1 + 0x2c))();
  if ((*(byte *)((int)param_1 + 0x56) & 2) == 0) {
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 100))();
    }
  }
  else if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x68))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e8d0  OWL::TButtonGadget::vf16   (55 bytes)   [rtti:vtable virtual slot 16]
void __cdecl OWL::TButtonGadget::vf16(int param_1)

{
  OWL::TGadget::vf16(param_1);
  if (*(char *)(*(int *)(param_1 + 6) + 0x36) == '\x02') {
    FUN_00425990(*(int **)(param_1 + 6),-1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e908  OWL::TButtonGadget::vf19   (66 bytes)   [rtti:vtable virtual slot 19]
void __cdecl OWL::TButtonGadget::vf19(int *param_1)

{
  OWL::TGadget::vf19((int)param_1);
  if ((*(byte *)((int)param_1 + 0x56) & 2) == 0) {
    if ((DAT_0047b01c & 1) != 0) {
      FUN_0042477c((int)param_1);
    }
  }
  else {
    (**(code **)(*param_1 + 0x6c))();
  }
  return;
}

} // namespace tea
