// TEACON.exe — runtime / library code "code_0x00418000"
// 92 functions, 0x00418080..0x0041bff4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00418080  FUN_00418080   (358 bytes)   [unnamed]
int * __cdecl FUN_00418080(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x42fecc);
  operator_delete();
  operator_delete();
  puVar2 = (undefined4 *)operator_new();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00417d8c(puVar2,0);
  }
  param_1[0xe] = (int)puVar2;
  puVar2 = (undefined4 *)operator_new();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00417d8c(puVar2,0);
  }
  param_1[0xf] = (int)puVar2;
  param_1[0xd] = 0;
  bVar1 = FUN_004181ec(param_1,param_1[9]);
  if ((bVar1) && (iVar3 = FUN_00417ee0(), iVar3 != param_1[9])) {
    if (*(char *)((int)param_1 + 0x29) != '\0') {
      FUN_004181e8();
      (**(code **)(*param_1 + 0x24))();
    }
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined1 *)((int)param_1 + 0x29) = 0;
    param_1[0xb] = 0;
    *in_FS_OFFSET = local_30;
  }
  else {
    iVar3 = FUN_00417ee0();
    if (iVar3 == param_1[9]) {
      param_1 = (int *)0x0;
      *in_FS_OFFSET = local_30;
    }
    else {
      if (*(char *)((int)param_1 + 0x29) != '\0') {
        FUN_004181e8();
        (**(code **)(*param_1 + 0x24))();
      }
      operator_delete_array();
      param_1[0x10] = 0;
      *(undefined1 *)(param_1 + 10) = 0;
      *(undefined1 *)((int)param_1 + 0x29) = 0;
      param_1[0xb] = 0;
      iVar3 = FUN_004181fc(param_1,param_1[9]);
      if (iVar3 == -1) {
        param_1 = (int *)0x0;
        *in_FS_OFFSET = local_30;
      }
      else {
        iVar3 = FUN_00417ee0();
        param_1[9] = iVar3;
        *in_FS_OFFSET = local_30;
      }
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004181e8  FUN_004181e8   (4 bytes)   [unnamed]
undefined4 __stdcall FUN_004181e8(void)

{
  return 0xffffffff;
}

// ----------------------------------------------------------------------------------------------------
// 0x004181ec  FUN_004181ec   (15 bytes)   [unnamed]
bool __cdecl FUN_004181ec(undefined4 param_1,int param_2)

{
  return param_2 < 3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004181fc  FUN_004181fc   (15 bytes)   [unnamed]
undefined4 __cdecl FUN_004181fc(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_0041ffdc(param_2);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004182a4  FUN_004182a4   (77 bytes)   [unnamed]
undefined4 * __cdecl FUN_004182a4(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x42ff38);
  FUN_0041ca64(param_1);
  *param_1 = &std::basic_ios_char::vftable;
  FUN_0041830c((int)param_1,0);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041830c  FUN_0041830c   (79 bytes)   [unnamed]
void __cdecl FUN_0041830c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 4) = 0x1002;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 6;
  uVar1 = FUN_0041835c(param_1);
  *(char *)(param_1 + 0x2c) = (char)uVar1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041835c  FUN_0041835c   (99 bytes)   [unnamed]
undefined4 __cdecl FUN_0041835c(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  int local_8;
  
  __InitExceptBlockLDTC(0x42ff5c);
  FUN_00416a80(&local_8,param_1);
  piVar1 = (int *)FUN_00416920(&local_8);
  uVar2 = FUN_004183c0(piVar1);
  std::locale::_dtor(&local_8,2);
  *in_FS_OFFSET = local_2c;
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004183c0  FUN_004183c0   (21 bytes)   [unnamed]
undefined4 __cdecl FUN_004183c0(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x18))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004183d8  FUN_004183d8   (21 bytes)   [unnamed]
void __cdecl FUN_004183d8(int param_1,uint param_2)

{
  FUN_004183f0(param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004183f0  FUN_004183f0   (637 bytes)   [unnamed]
void __cdecl FUN_004183f0(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_388 [240];
  undefined1 local_298 [240];
  undefined1 local_1a8 [240];
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  undefined4 local_a0;
  undefined2 local_90;
  int local_84;
  undefined1 local_7c [16];
  undefined4 local_6c [6];
  undefined1 local_54 [16];
  undefined4 local_44 [6];
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  __InitExceptBlockLDTC(0x42fff4);
  if (*(int *)(param_1 + 0x24) == 0) {
    param_2 = param_2 | 1;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
  }
  *(uint *)(param_1 + 0x30) = param_2;
  uVar1 = FUN_00418730(param_1);
  uVar2 = FUN_0041873c(param_1);
  if ((uVar1 & uVar2) != 0) {
    uVar1 = FUN_00418730(param_1);
    uVar2 = FUN_0041873c(param_1);
    if ((uVar1 & uVar2 & 4) != 0) {
      *(uint *)(param_1 + 0x30) = param_2;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar1 = 1;
      puVar7 = &LAB_004186d8;
      uVar6 = 0;
      local_90 = 0x14;
      FUN_004168f8(local_a8);
      puVar3 = FUN_0041ea4c(local_1a8,PTR_s_iostream_object_has_failbit_set_00430ba8);
      puVar4 = (uint *)FUN_00416de0(puVar3);
      iVar5 = std::string::string_from_cstr((int)local_2c,puVar4);
      local_84 = local_84 + 1;
      FUN_0041c778(local_1c,iVar5);
      local_84 = local_84 + 2;
      std::string::_dtor((int)local_2c,2);
      local_90 = 8;
      FUN_004280a0((uint *)&DAT_00418670,local_1c,uVar6,puVar7,uVar1,uVar8,uVar9,uVar10);
    }
    uVar1 = FUN_00418730(param_1);
    uVar2 = FUN_0041873c(param_1);
    if ((uVar1 & uVar2 & 1) != 0) {
      *(uint *)(param_1 + 0x30) = param_2;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar1 = 1;
      puVar7 = &LAB_004186d8;
      uVar6 = 0;
      local_90 = 0x2c;
      FUN_004168f8(local_b0);
      puVar3 = FUN_0041ea4c(local_298,PTR_s_iostream_object_has_badbit_set_00430bac);
      puVar4 = (uint *)FUN_00416de0(puVar3);
      iVar5 = std::string::string_from_cstr((int)local_54,puVar4);
      local_84 = local_84 + 1;
      FUN_0041c778(local_44,iVar5);
      local_84 = local_84 + 2;
      std::string::_dtor((int)local_54,2);
      local_90 = 0x20;
      FUN_004280a0((uint *)&DAT_00418670,local_44,uVar6,puVar7,uVar1,uVar8,uVar9,uVar10);
    }
    uVar1 = FUN_00418730(param_1);
    uVar2 = FUN_0041873c(param_1);
    if ((uVar1 & uVar2 & 2) != 0) {
      *(uint *)(param_1 + 0x30) = param_2;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar1 = 1;
      puVar7 = &LAB_004186d8;
      uVar6 = 0;
      local_90 = 0x44;
      FUN_004168f8(local_b8);
      puVar3 = FUN_0041ea4c(local_388,PTR_s_iostream_object_has_eofbit_set_00430bb0);
      puVar4 = (uint *)FUN_00416de0(puVar3);
      iVar5 = std::string::string_from_cstr((int)local_7c,puVar4);
      local_84 = local_84 + 1;
      FUN_0041c778(local_6c,iVar5);
      local_84 = local_84 + 2;
      std::string::_dtor((int)local_7c,2);
      local_90 = 0x38;
      FUN_004280a0((uint *)&DAT_00418670,local_6c,uVar6,puVar7,uVar1,uVar8,uVar9,uVar10);
    }
  }
  *in_FS_OFFSET = local_a0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418730  FUN_00418730   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_00418730(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}

// ----------------------------------------------------------------------------------------------------
// 0x0041873c  FUN_0041873c   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0041873c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}

// ----------------------------------------------------------------------------------------------------
// 0x00418748  FUN_00418748   (25 bytes)   [unnamed]
DWORD __cdecl FUN_00418748(undefined4 param_1,uint param_2,LONG param_3,int param_4)

{
  DWORD DVar1;
  
  DVar1 = thunk_FUN_0042010c(param_2,param_3,param_4);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418764  FUN_00418764   (24 bytes)   [unnamed]
void __cdecl FUN_00418764(int param_1,uint param_2)

{
  FUN_004183d8(param_1,*(uint *)(param_1 + 0x30) | param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004188cc  FUN_004188cc   (175 bytes)   [unnamed]
int * __cdecl FUN_004188cc(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4300c0);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 3);
    FUN_004182a4(param_1 + 3);
  }
  param_1[1] = (int)&std::basic_istream_char::vftable;
  *(undefined ***)*param_1 = &PTR_LAB_00430b1c;
  param_1[2] = 0;
  if (param_3 == 0) {
    FUN_0041830c(*param_1,0);
  }
  else {
    uVar1 = FUN_0041897c(param_3);
    if ((uVar1 & 4) == 0) {
      FUN_0041830c(*param_1,0);
    }
    else {
      FUN_0041830c(*param_1,param_3);
    }
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041897c  FUN_0041897c   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0041897c(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x00418988  FUN_00418988   (166 bytes)   [unnamed]
int * __cdecl FUN_00418988(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4300e4);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 2);
    FUN_004182a4(param_1 + 2);
  }
  param_1[1] = (int)&std::basic_ostream_char::vftable;
  *(undefined ***)*param_1 = &PTR_LAB_00430b00;
  if (param_3 == 0) {
    FUN_0041830c(*param_1,0);
  }
  else {
    uVar1 = FUN_0041897c(param_3);
    if ((uVar1 & 8) == 0) {
      FUN_0041830c(*param_1,0);
    }
    else {
      FUN_0041830c(*param_1,param_3);
    }
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418a30  FUN_00418a30   (385 bytes)   [unnamed]
undefined4 * __cdecl FUN_00418a30(undefined4 *param_1,int *param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  int local_8;
  
  __InitExceptBlockLDTC(0x430118);
  local_1c = 8;
  *param_1 = param_2;
  bVar1 = FUN_00418c18(*param_2);
  if (!bVar1) {
    FUN_00418764(*param_2,4);
    *(undefined1 *)(param_1 + 1) = 0;
    goto LAB_00418b9e;
  }
  iVar2 = FUN_00418c2c(*param_2);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_00418c2c(*param_2);
    FUN_00418c38(piVar3);
  }
  if (param_3 == '\0') {
    uVar4 = FUN_00418bb4(*param_2);
    if ((uVar4 & 0x1000) != 0) {
      local_1c = 0x14;
      FUN_00416a80(&local_8,*param_2);
      local_10 = local_10 + 1;
      iVar2 = FUN_00416920(&local_8);
      local_1c = 8;
      do {
        piVar3 = (int *)FUN_00418c84(*param_2);
        local_30 = FUN_00418c90(piVar3);
        local_34 = FUN_004181e8();
        bVar1 = FUN_00418bc0(&local_30,&local_34);
        if (bVar1) {
LAB_00418b2d:
          bVar1 = false;
        }
        else {
          bVar1 = FUN_00418bd8(iVar2,1,(byte)local_30);
          if (!bVar1) goto LAB_00418b2d;
          bVar1 = true;
        }
        if (!bVar1) goto code_r0x00418b3a;
        piVar3 = (int *)FUN_00418c84(*param_2);
        FUN_00418cec(piVar3);
      } while( true );
    }
  }
  goto LAB_00418b74;
code_r0x00418b3a:
  local_38 = FUN_004181e8();
  bVar1 = FUN_00418bc0(&local_30,&local_38);
  if (bVar1) {
    FUN_00418764(*param_2,2);
  }
  local_10 = local_10 + -1;
  std::locale::_dtor(&local_8,2);
LAB_00418b74:
  bVar1 = FUN_00418c18(*param_2);
  if (bVar1) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    FUN_00418764(*param_2,4);
    *(undefined1 *)(param_1 + 1) = 0;
  }
LAB_00418b9e:
  *in_FS_OFFSET = local_2c;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418bb4  FUN_00418bb4   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_00418bb4(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x00418bc0  FUN_00418bc0   (21 bytes)   [unnamed]
bool __cdecl FUN_00418bc0(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418bd8  FUN_00418bd8   (28 bytes)   [unnamed]
bool __cdecl FUN_00418bd8(int param_1,uint param_2,byte param_3)

{
  return (*(uint *)(*(int *)(param_1 + 0x20) + (uint)param_3 * 4) & param_2) != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418c18  FUN_00418c18   (18 bytes)   [unnamed]
bool __cdecl FUN_00418c18(int param_1)

{
  return *(int *)(param_1 + 0x30) == 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418c2c  FUN_00418c2c   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_00418c2c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}

// ----------------------------------------------------------------------------------------------------
// 0x00418c38  FUN_00418c38   (57 bytes)   [unnamed]
int * __cdecl FUN_00418c38(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00418c84(*param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00418c84(*param_1);
    iVar1 = FUN_00418c74(piVar2);
    if (iVar1 == -1) {
      FUN_00418764(*param_1,1);
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418c74  FUN_00418c74   (15 bytes)   [unnamed]
undefined4 __cdecl FUN_00418c74(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x30))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418c84  FUN_00418c84   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_00418c84(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}

// ----------------------------------------------------------------------------------------------------
// 0x00418c90  FUN_00418c90   (55 bytes)   [unnamed]
undefined4 __cdecl FUN_00418c90(int *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined3 extraout_var;
  undefined4 extraout_EDX;
  int *piVar6;
  
  uVar2 = FUN_00418cd4((int)param_1);
  piVar6 = param_1;
  uVar3 = FUN_00418ce0((int)param_1);
  if (uVar2 < uVar3) {
    puVar5 = (undefined1 *)FUN_00418cd4((int)param_1);
    uVar1 = FUN_00418cc8(puVar5);
    uVar4 = CONCAT31(extraout_var,uVar1);
  }
  else {
    uVar4 = (**(code **)(*param_1 + 0x1c))(*param_1,extraout_EDX,piVar6,param_1);
  }
  return uVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418cc8  FUN_00418cc8   (11 bytes)   [unnamed]
undefined1 __cdecl FUN_00418cc8(undefined1 *param_1)

{
  return *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418cd4  FUN_00418cd4   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_00418cd4(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// ----------------------------------------------------------------------------------------------------
// 0x00418ce0  FUN_00418ce0   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_00418ce0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}

// ----------------------------------------------------------------------------------------------------
// 0x00418cec  FUN_00418cec   (67 bytes)   [unnamed]
void __cdecl FUN_00418cec(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int local_c;
  int local_8;
  
  local_c = FUN_004181e8();
  piVar2 = &local_c;
  local_8 = FUN_00418d30(param_1);
  bVar1 = FUN_00418bc0(&local_8,piVar2);
  if (bVar1) {
    FUN_004181e8();
  }
  else {
    FUN_00418c90(param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418d30  FUN_00418d30   (76 bytes)   [unnamed]
undefined4 __cdecl FUN_00418d30(int *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined3 extraout_var;
  undefined4 uStack_8;
  
  uVar2 = FUN_00418cd4((int)param_1);
  uVar3 = FUN_00418ce0((int)param_1);
  if (uVar2 < uVar3) {
    puVar5 = (undefined1 *)FUN_00418cd4((int)param_1);
    uStack_8 = CONCAT13(*puVar5,(undefined3)uStack_8);
    FUN_00418d7c((int)param_1,1);
    uVar1 = FUN_00418cc8((undefined1 *)((int)&uStack_8 + 3));
    uVar4 = CONCAT31(extraout_var,uVar1);
  }
  else {
    uVar4 = (**(code **)(*param_1 + 0x20))();
  }
  return uVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418d7c  FUN_00418d7c   (14 bytes)   [unnamed]
void __cdecl FUN_00418d7c(int param_1,int param_2)

{
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418da8  FUN_00418da8   (26 bytes)   [unnamed]
void __cdecl FUN_00418da8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_4;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418dc4  FUN_00418dc4   (23 bytes)   [unnamed]
void __cdecl FUN_00418dc4(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418ddc  FUN_00418ddc   (14 bytes)   [unnamed]
void __cdecl FUN_00418ddc(int param_1,int param_2)

{
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418dec  FUN_00418dec   (465 bytes)   [unnamed]
int __cdecl FUN_00418dec(int param_1,undefined4 *param_2,uint param_3)

{
  undefined1 *puVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  code *pcVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_27c [16];
  undefined1 local_26c [240];
  undefined1 local_17c [240];
  int local_8c;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined4 local_78;
  undefined2 local_68;
  int local_5c;
  undefined1 local_54 [16];
  undefined4 local_44 [6];
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  __InitExceptBlockLDTC(0x4301a0);
  local_68 = 8;
  FUN_00416fc4(param_1,0);
  if (param_2 == (undefined4 *)0x0) {
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 1;
    pcVar6 = FUN_004133f0;
    uVar5 = 0;
    local_68 = 0x2c;
    FUN_004168f8(local_80);
    puVar1 = FUN_0041ea4c(local_17c,PTR_s_unexpected_NULL_pointer_in_funct_00431a88);
    puVar2 = (uint *)FUN_00416de0(puVar1);
    std::string::string_from_cstr((int)local_2c,puVar2);
    local_5c = local_5c + 1;
    FUN_00416de8(local_1c,(int)local_2c);
    local_5c = local_5c + 2;
    std::string::_dtor((int)local_2c,2);
    local_68 = 0x20;
    FUN_004280a0((uint *)&DAT_004079c4,local_1c,uVar5,(undefined*)pcVar6,uVar8,uVar9,uVar10,uVar11);
  }
  if (param_3 == (*(uint *)&DAT_0042fce8)) {
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 1;
    puVar7 = &LAB_00405f50;
    uVar5 = 0;
    local_68 = 0x44;
    FUN_004168f8(local_88);
    puVar1 = FUN_0041ea4c(local_26c,PTR_s_invalid_string_size_parameter_in_00431a78);
    puVar2 = (uint *)FUN_00416de0(puVar1);
    std::string::string_from_cstr((int)local_54,puVar2);
    local_5c = local_5c + 1;
    FUN_00417760(local_44,(int)local_54);
    local_5c = local_5c + 3;
    std::string::_dtor((int)local_54,2);
    local_68 = 0x38;
    FUN_004280a0((uint *)&DAT_00405ef4,local_44,uVar5,puVar7,uVar8,uVar9,uVar10,uVar11);
  }
  piVar3 = std::string::__getRep(param_1,param_3,param_3);
  local_8c = FUN_004172ec((int)piVar3);
  FUN_004168a0((int)local_27c,param_1,&local_8c);
  puVar4 = (undefined4 *)FUN_00416734(param_1);
  FUN_00416fa4(puVar4,param_2,param_3);
  *in_FS_OFFSET = local_78;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418fc0  FUN_00418fc0   (71 bytes)   [unnamed]
undefined4 * __cdecl FUN_00418fc0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x430984);
  FUN_00416a38(param_1,param_2,0x20);
  *param_1 = &PTR_FUN_00430a8c;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419008  FUN_00419008   (226 bytes)   [unnamed]
int __cdecl FUN_00419008(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  int local_3c;
  undefined4 local_38;
  undefined1 local_34 [8];
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  __InitExceptBlockLDTC(0x430200);
  local_18 = 8;
  FUN_004168f8(local_34);
  local_2c = 0;
  FUN_00417c04(param_1,&local_2c);
  piVar1 = (int *)FUN_00416740(param_2);
  iVar2 = FUN_00416754(piVar1);
  if (iVar2 < 1) {
    uVar3 = FUN_0041687c(param_2);
    piVar1 = std::string::__getRep(param_1,uVar3,uVar3);
    local_3c = FUN_004172ec((int)piVar1);
    FUN_004168a0((int)local_5c,param_1,&local_3c);
    puVar4 = (undefined4 *)FUN_00416c58(param_2);
    puVar5 = (undefined4 *)FUN_00416734(param_1);
    FUN_00416fa4(puVar5,puVar4,uVar3);
  }
  else {
    local_38 = FUN_00416734(param_2);
    FUN_004168a0((int)local_4c,param_1,&local_38);
    piVar1 = (int *)FUN_00416740(param_1);
    FUN_00416c40(piVar1);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004190ec  FUN_004190ec   (129 bytes)   [unnamed]
int __cdecl FUN_004190ec(int *param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)operator_new_array();
  uVar2 = param_2;
  if ((uint)param_1[1] < param_2) {
    uVar2 = param_1[1];
  }
  puVar3 = puVar1;
  for (puVar4 = (undefined4 *)*param_1; puVar4 != (undefined4 *)(*param_1 + uVar2 * 4);
      puVar4 = puVar4 + 1) {
    *puVar3 = *puVar4;
    puVar3 = puVar3 + 1;
  }
  puVar4 = puVar1 + uVar2;
  for (; uVar2 < param_2; uVar2 = uVar2 + 1) {
    *puVar4 = param_3;
    puVar4 = puVar4 + 1;
  }
  if (*param_1 != 0) {
    operator_delete_array();
  }
  *param_1 = (int)puVar1;
  param_1[1] = param_2;
  return *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419170  FUN_00419170   (53 bytes)   [unnamed]
void __cdecl FUN_00419170(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 == 0) {
    FUN_004191a8();
    return;
  }
  if (param_1 == 1) {
    FUN_00419230();
    return;
  }
  FUN_00419248(0,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004191a8  FUN_004191a8   (79 bytes)   [unnamed]
undefined4 * __stdcall FUN_004191a8(void)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x430230);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00418fc0(puVar1,1);
  }
  *in_FS_OFFSET = local_2c;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419230  FUN_00419230   (22 bytes)   [unnamed]
void __stdcall FUN_00419230(void)

{
  FUN_00419248(0,&DAT_0042edd9,1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419248  FUN_00419248   (81 bytes)   [unnamed]
undefined4 * __cdecl FUN_00419248(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x430260);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00418fc0(puVar1,param_3);
  }
  *in_FS_OFFSET = local_2c;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041929c  FUN_0041929c   (10 bytes)   [unnamed]
undefined1 __cdecl FUN_0041929c(undefined1 *param_1)

{
  return *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419738  FUN_00419738   (15 bytes)   [unnamed]
undefined4 __cdecl FUN_00419738(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x18))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419748  FUN_00419748   (19 bytes)   [unnamed]
undefined4 * __cdecl FUN_00419748(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != param_2) {
    *param_1 = *param_2;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041975c  FUN_0041975c   (47 bytes)   [unnamed]
undefined4 __cdecl FUN_0041975c(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041978c  FUN_0041978c   (21 bytes)   [unnamed]
int __cdecl FUN_0041978c(int *param_1)

{
  if (*param_1 == -1) {
    return 0;
  }
  return *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004197a4  FUN_004197a4   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_004197a4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}

// ----------------------------------------------------------------------------------------------------
// 0x004197b0  FUN_004197b0   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_004197b0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}

// ----------------------------------------------------------------------------------------------------
// 0x004197bc  FUN_004197bc   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_004197bc(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x004197c8  FUN_004197c8   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_004197c8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}

// ----------------------------------------------------------------------------------------------------
// 0x004197d4  FUN_004197d4   (75 bytes)   [unnamed]
undefined4 __cdecl FUN_004197d4(int *param_1,undefined1 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined3 extraout_var;
  undefined1 *puVar5;
  
  uVar2 = FUN_004197a4((int)param_1);
  uVar3 = FUN_004197c8((int)param_1);
  if (uVar2 < uVar3) {
    puVar5 = (undefined1 *)param_1[6];
    param_1[6] = param_1[6] + 1;
    *puVar5 = param_2;
    uVar1 = FUN_00418cc8(&param_2);
    uVar4 = CONCAT31(extraout_var,uVar1);
  }
  else {
    puVar5 = &param_2;
    uVar1 = FUN_00418cc8(puVar5);
    uVar4 = (**(code **)(*param_1 + 0x24))(uVar1,*param_1,puVar5,param_1,uVar1);
  }
  return uVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419820  FUN_00419820   (66 bytes)   [unnamed]
int * __cdecl FUN_00419820(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4302d0);
  FUN_00419864(param_1,(int *)(param_2 + 0x20));
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419864  FUN_00419864   (56 bytes)   [unnamed]
int * __cdecl FUN_00419864(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4309a8);
  iVar1 = *param_2;
  *param_1 = iVar1;
  FUN_0041c158(iVar1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004198b8  FUN_004198b8   (58 bytes)   [unnamed]
int * __cdecl FUN_004198b8(int *param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = FUN_0041695c((undefined4 *)&DAT_0043187c);
  piVar2 = (int *)FUN_00416968(param_1,uVar1);
  if (piVar2 == (int *)0x0) {
    piVar2 = FUN_0041e54c(param_1,(uint *)&DAT_0043187c,'\x01',0x20,(undefined*)FUN_00419170);
  }
  return piVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004198f4  FUN_004198f4   (49 bytes)   [unnamed]
bool __cdecl FUN_004198f4(undefined4 param_1,uint param_2,char *param_3,int param_4,int param_5)

{
  uint uVar1;
  
  uVar1 = thunk_FUN_0042051c(param_2,param_3,param_4 * param_5);
  return uVar1 == param_4 * param_5;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419cd8  FUN_00419cd8   (81 bytes)   [unnamed]
int * __cdecl FUN_00419cd8(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4302e4);
  *param_1 = param_2;
  puVar1 = FUN_00417d8c(&local_2c,0);
  FUN_00419d2c(param_1 + 1,puVar1);
  *(undefined1 *)(param_1 + 2) = 1;
  if (param_2 == -1) {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419d2c  FUN_00419d2c   (43 bytes)   [unnamed]
undefined4 * __cdecl FUN_00419d2c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4309bc);
  *param_1 = *param_2;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419d58  FUN_00419d58   (10 bytes)   [unnamed]
undefined4 __cdecl FUN_00419d58(undefined4 *param_1)

{
  return *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419d64  FUN_00419d64   (23 bytes)   [unnamed]
bool __cdecl FUN_00419d64(int *param_1,int *param_2)

{
  return *param_2 < *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419d7c  FUN_00419d7c   (80 bytes)   [unnamed]
undefined4 * __cdecl FUN_00419d7c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4302ec);
  FUN_00417d8c(param_1 + 1,0);
  *param_1 = *param_2;
  FUN_00419748(param_1 + 1,param_2 + 1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419dcc  FUN_00419dcc   (74 bytes)   [unnamed]
undefined4 __cdecl FUN_00419dcc(int *param_1,int *param_2)

{
  bool bVar1;
  undefined4 in_EAX;
  undefined4 uVar2;
  
  if (((char)param_1[2] == '\0') && ((char)param_2[2] == '\0')) {
    uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  else {
    if ((*param_1 == *param_2) &&
       ((bVar1 = FUN_00419e18(param_1 + 1,param_2 + 1), bVar1 &&
        ((char)param_1[2] == (char)param_2[2])))) {
      return 1;
    }
    uVar2 = 0;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419e18  FUN_00419e18   (23 bytes)   [unnamed]
bool __cdecl FUN_00419e18(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a274  FUN_0041a274   (47 bytes)   [unnamed]
undefined4 __cdecl FUN_0041a274(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0xc))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a2a4  FUN_0041a2a4   (13 bytes)   [unnamed]
void __cdecl FUN_0041a2a4(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a2b4  FUN_0041a2b4   (40 bytes)   [unnamed]
char * __cdecl FUN_0041a2b4(undefined4 param_1,uint param_2,char *param_3,int param_4,int param_5)

{
  char *pcVar1;
  
  pcVar1 = thunk_FUN_004203ec(param_2,param_3,(char *)(param_4 * param_5));
  if ((int)pcVar1 < 0) {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a2dc  FUN_0041a2dc   (156 bytes)   [unnamed]
int __cdecl FUN_0041a2dc(int param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  int local_8;
  
  __InitExceptBlockLDTC(0x430344);
  if ((*(byte *)(param_1 + 4) & 2) == 0) {
    FUN_00419820(&local_8,param_1);
    piVar3 = (int *)FUN_00416920(&local_8);
    uVar4 = FUN_004183c0(piVar3);
    std::locale::_dtor(&local_8,2);
    iVar2 = 0;
    while (param_2 != param_3) {
      cVar1 = *param_2;
      param_2 = param_2 + 1;
      if ((char)uVar4 == cVar1) {
        iVar2 = iVar2 + 2;
      }
      else {
        iVar2 = iVar2 + 1;
      }
    }
    *in_FS_OFFSET = local_2c;
  }
  else {
    iVar2 = (int)param_3 - (int)param_2;
    *in_FS_OFFSET = local_2c;
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a5b0  FUN_0041a5b0   (60 bytes)   [unnamed]
int __cdecl FUN_0041a5b0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_00418cd4((int)param_1);
  uVar2 = FUN_00418ce0((int)param_1);
  if (uVar1 < uVar2) {
    iVar3 = FUN_00418ce0((int)param_1);
    iVar4 = FUN_00418cd4((int)param_1);
    iVar3 = iVar3 - iVar4;
  }
  else {
    iVar3 = (**(code **)(*param_1 + 0x14))();
  }
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a664  FUN_0041a664   (11 bytes)   [unnamed]
undefined1 __cdecl FUN_0041a664(int param_1)

{
  return *(undefined1 *)(param_1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a7fc  FUN_0041a7fc   (110 bytes)   [unnamed]
void __cdecl FUN_0041a7fc(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_18 [16];
  int local_8;
  
  uVar1 = FUN_0041687c(param_1);
  uVar2 = FUN_0041687c(param_1);
  piVar3 = std::string::__getRep(param_1,uVar2,uVar1);
  uVar1 = FUN_0041687c(param_1);
  puVar4 = (undefined4 *)FUN_004177ec(param_1);
  puVar5 = (undefined4 *)FUN_004172ec((int)piVar3);
  FUN_00416fa4(puVar5,puVar4,uVar1);
  FUN_0041669c(param_1);
  local_8 = FUN_004172ec((int)piVar3);
  FUN_004168a0((int)local_18,param_1,&local_8);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a86c  FUN_0041a86c   (413 bytes, 2 ranges)   [unnamed]
int * __cdecl FUN_0041a86c(int *param_1,undefined1 *param_2,int param_3,char param_4)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  int local_5c;
  int local_58;
  int local_54;
  undefined1 *local_50;
  uint local_4c;
  undefined4 local_48;
  undefined2 local_38;
  int local_2c;
  undefined4 local_24 [8];
  
  __InitExceptBlockLDTC(0x4303c4);
  local_4c = 0;
  param_1[2] = 0;
  if (param_2 == (undefined1 *)0x0) {
    local_4c = 1;
  }
  else {
    local_38 = 0x14;
    FUN_00418a30(local_24,param_1,'\x01');
    local_2c = local_2c + 1;
    local_38 = 0x20;
    cVar1 = FUN_0041a664((int)local_24);
    if (cVar1 != '\0') {
      local_50 = param_2;
      local_54 = 0;
      while (param_3 = param_3 + -1, 0 < param_3) {
        local_58 = FUN_004181e8();
        piVar4 = &local_58;
        piVar3 = (int *)FUN_00418c84(*param_1);
        local_54 = FUN_00418c90(piVar3);
        bVar2 = FUN_00418bc0(&local_54,piVar4);
        if (bVar2) break;
        param_1[2] = param_1[2] + 1;
        piVar4 = (int *)FUN_00418c84(*param_1);
        FUN_00418d30(piVar4);
        if (param_4 == local_54) break;
        *param_2 = (undefined1)local_54;
        param_2 = param_2 + 1;
      }
      *param_2 = 0;
      local_5c = FUN_004181e8();
      bVar2 = FUN_00418bc0(&local_54,&local_5c);
      if (bVar2) {
        if (param_2 == local_50) {
          local_4c = 6;
        }
        else {
          local_4c = 2;
        }
      }
      else if (param_4 != local_54) {
        piVar4 = (int *)FUN_00418c84(*param_1);
        iVar5 = FUN_00418c90(piVar4);
        if (iVar5 == param_4) {
          piVar4 = (int *)FUN_00418c84(*param_1);
          FUN_00418d30(piVar4);
        }
        else if (param_3 == 0) {
          local_4c = local_4c | 4;
        }
      }
    }
    *param_2 = 0;
    local_2c = local_2c + -1;
    std::basic_istream_char::sentry::_dtor((int)local_24,2);
  }
  local_38 = 0;
  if (local_4c != 0) {
    FUN_00418764(*param_1,local_4c);
  }
  *in_FS_OFFSET = local_48;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041aa58  FUN_0041aa58   (19 bytes)   [unnamed]
undefined4 __cdecl FUN_0041aa58(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ab68  std::string::append   (274 bytes)   [analysis (usage pattern)]
int __cdecl std::string::append(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined1 local_148 [240];
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  __InitExceptBlockLDTC(0x430448);
  iVar1 = FUN_0041687c(param_2);
  uVar6 = DAT_0042fce8 - iVar1;
  uVar2 = FUN_0041687c(param_1);
  if (uVar6 <= uVar2) {
    uVar12 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar2 = 1;
    puVar8 = &LAB_00405f50;
    uVar7 = 0;
    local_40 = 0x14;
    FUN_004168f8(local_58);
    FUN_0041687c(param_2);
    FUN_0041687c(param_1);
    puVar3 = FUN_0041ea4c(local_148,PTR_s_resulting_length_is_invalid_in_f_00431a80);
    puVar4 = (uint *)FUN_00416de0(puVar3);
    std::string::string_from_cstr((int)local_2c,puVar4);
    local_34 = local_34 + 1;
    FUN_00417760(local_1c,(int)local_2c);
    local_34 = local_34 + 3;
    std::string::_dtor((int)local_2c,2);
    local_40 = 8;
    FUN_004280a0((uint *)&DAT_00405ef4,local_1c,uVar7,puVar8,uVar2,uVar9,uVar10,uVar12);
  }
  uVar2 = FUN_0041687c(param_2);
  uVar6 = FUN_004177ec(param_2);
  uVar11 = 0;
  uVar5 = FUN_0041687c(param_1);
  FUN_004172f8(param_1,uVar5,uVar11,uVar6,uVar2);
  *in_FS_OFFSET = local_50;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ac7c  std::string::assign   (33 bytes)   [analysis (usage pattern, less certain)]
void __cdecl std::string::assign(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0041687c(param_1);
  FUN_0041aca0(param_1,0,uVar1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041aca0  FUN_0041aca0   (60 bytes)   [unnamed]
int __cdecl FUN_0041aca0(int param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FUN_0041687c(param_4);
  uVar4 = 0;
  uVar2 = FUN_0041687c(param_4);
  uVar3 = FUN_004177ec(param_4);
  FUN_00417320(param_1,param_2,param_3,uVar3,uVar2,uVar4,uVar1);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041acdc  FUN_0041acdc   (434 bytes)   [unnamed]
void __cdecl FUN_0041acdc(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_268 [240];
  undefined1 local_178 [240];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined4 local_78;
  undefined2 local_68;
  int local_5c;
  undefined1 local_54 [16];
  undefined4 local_44 [6];
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  __InitExceptBlockLDTC(0x4304c0);
  uVar1 = FUN_0041687c(param_1);
  if (uVar1 < param_2) {
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar1 = 1;
    puVar7 = &LAB_004060a8;
    uVar6 = 0;
    local_68 = 0x14;
    FUN_004168f8(local_80);
    FUN_0041687c(param_1);
    puVar2 = FUN_0041ea4c(local_178,PTR_s_string_index_out_of_range_in_fun_00431a84);
    puVar3 = (uint *)FUN_00416de0(puVar2);
    std::string::string_from_cstr((int)local_2c,puVar3);
    local_5c = local_5c + 1;
    FUN_00417718(local_1c,(int)local_2c);
    local_5c = local_5c + 3;
    std::string::_dtor((int)local_2c,2);
    local_68 = 8;
    FUN_004280a0((uint *)&DAT_0040604c,local_1c,uVar6,puVar7,uVar1,uVar8,uVar9,uVar10);
  }
  iVar4 = FUN_0041687c(param_3);
  uVar5 = DAT_0042fce8 - iVar4;
  uVar1 = FUN_0041687c(param_1);
  if (uVar5 <= uVar1) {
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar1 = 1;
    puVar7 = &LAB_00405f50;
    uVar6 = 0;
    local_68 = 0x2c;
    FUN_004168f8(local_88);
    FUN_0041687c(param_3);
    FUN_0041687c(param_1);
    puVar2 = FUN_0041ea4c(local_268,PTR_s_resulting_length_is_invalid_in_f_00431a80);
    puVar3 = (uint *)FUN_00416de0(puVar2);
    std::string::string_from_cstr((int)local_54,puVar3);
    local_5c = local_5c + 1;
    FUN_00417760(local_44,(int)local_54);
    local_5c = local_5c + 3;
    std::string::_dtor((int)local_54,2);
    local_68 = 0x20;
    FUN_004280a0((uint *)&DAT_00405ef4,local_44,uVar6,puVar7,uVar1,uVar8,uVar9,uVar10);
  }
  FUN_0041aca0(param_1,param_2,0,param_3);
  *in_FS_OFFSET = local_78;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ae90  std::string::replace_fill   (899 bytes)   [analysis (usage pattern)]
//   replace(pos, n1, n2, ch); with pos=size,n1=0 it appends n2 copies of ch
int __cdecl std::string::replace_fill(int param_1,uint param_2,uint param_3,uint param_4,undefined1 param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 local_2a0 [16];
  undefined1 local_290 [16];
  undefined1 local_280 [240];
  undefined1 local_190 [240];
  int local_a0;
  int *local_9c;
  uint local_98;
  int local_94;
  uint local_90;
  undefined1 local_8c [8];
  uint local_84;
  undefined1 local_80 [8];
  undefined4 local_78;
  undefined2 local_68;
  int local_5c;
  undefined1 local_54 [16];
  undefined4 local_44 [6];
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  __InitExceptBlockLDTC(0x430550);
  uVar1 = FUN_0041687c(param_1);
  if (uVar1 < param_2) {
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar1 = 1;
    puVar9 = &LAB_004060a8;
    uVar8 = 0;
    local_68 = 0x14;
    FUN_004168f8(local_80);
    FUN_0041687c(param_1);
    puVar2 = FUN_0041ea4c(local_190,PTR_s_string_index_out_of_range_in_fun_00431a84);
    puVar3 = (uint *)FUN_00416de0(puVar2);
    std::string::string_from_cstr((int)local_2c,puVar3);
    local_5c = local_5c + 1;
    FUN_00417718(local_1c,(int)local_2c);
    local_5c = local_5c + 3;
    std::string::_dtor((int)local_2c,2);
    local_68 = 8;
    FUN_004280a0((uint *)&DAT_0040604c,local_1c,uVar8,puVar9,uVar1,uVar10,uVar11,uVar12);
  }
  iVar4 = FUN_0041687c(param_1);
  local_84 = iVar4 - param_2;
  if (param_3 < local_84) {
    local_84 = param_3;
  }
  iVar4 = FUN_0041687c(param_1);
  if (DAT_0042fce8 - param_4 <= iVar4 - local_84) {
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar1 = 1;
    puVar9 = &LAB_00405f50;
    uVar8 = 0;
    local_68 = 0x2c;
    FUN_004168f8(local_8c);
    FUN_0041687c(param_1);
    puVar2 = FUN_0041ea4c(local_280,PTR_s_resulting_length_is_invalid_in_f_00431a80);
    puVar3 = (uint *)FUN_00416de0(puVar2);
    std::string::string_from_cstr((int)local_54,puVar3);
    local_5c = local_5c + 1;
    FUN_00417760(local_44,(int)local_54);
    local_5c = local_5c + 3;
    std::string::_dtor((int)local_54,2);
    local_68 = 0x20;
    FUN_004280a0((uint *)&DAT_00405ef4,local_44,uVar8,puVar9,uVar1,uVar10,uVar11,uVar12);
  }
  iVar4 = FUN_0041687c(param_1);
  local_90 = (iVar4 - local_84) + param_4;
  if (local_90 == 0) {
    FUN_0041669c(param_1);
    piVar5 = FUN_00416784();
    FUN_00416c40(piVar5);
    puVar6 = FUN_00416784();
    local_94 = FUN_004172ec((int)puVar6);
    FUN_004168a0((int)local_290,param_1,&local_94);
  }
  else {
    iVar4 = FUN_0041687c(param_1);
    local_98 = (iVar4 - local_84) - param_2;
    piVar5 = (int *)FUN_00416740(param_1);
    iVar4 = FUN_00416754(piVar5);
    if ((iVar4 < 2) && (uVar1 = FUN_004177c8(param_1), local_90 <= uVar1)) {
      if (local_98 != 0) {
        uVar1 = local_98;
        iVar4 = FUN_00416734(param_1);
        puVar6 = (undefined4 *)(iVar4 + param_2 + param_3);
        iVar4 = FUN_00416734(param_1);
        FUN_004177a8((undefined4 *)(iVar4 + param_2 + param_4),puVar6,uVar1);
      }
      if (param_4 != 0) {
        iVar4 = FUN_00416734(param_1);
        FUN_0041b214((undefined4 *)(iVar4 + param_2),param_4,param_5);
      }
      iVar4 = FUN_00416740(param_1);
      uVar1 = local_90;
      *(uint *)(iVar4 + 8) = local_90;
      iVar4 = FUN_00416734(param_1);
      puVar2 = (undefined1 *)(iVar4 + uVar1);
      uVar8 = FUN_004172e8();
      *puVar2 = (char)uVar8;
    }
    else {
      local_9c = std::string::__getRep(param_1,local_90,local_90);
      if (param_2 != 0) {
        uVar1 = param_2;
        puVar6 = (undefined4 *)FUN_00416734(param_1);
        puVar7 = (undefined4 *)FUN_004172ec((int)local_9c);
        FUN_00416fa4(puVar7,puVar6,uVar1);
      }
      if (param_4 != 0) {
        uVar1 = param_4;
        iVar4 = FUN_004172ec((int)local_9c);
        FUN_0041b214((undefined4 *)(iVar4 + param_2),uVar1,param_5);
      }
      if (local_98 != 0) {
        uVar1 = local_98;
        iVar4 = FUN_00416734(param_1);
        puVar6 = (undefined4 *)(iVar4 + param_2 + param_3);
        iVar4 = FUN_004172ec((int)local_9c);
        FUN_00416fa4((undefined4 *)(iVar4 + param_2 + param_4),puVar6,uVar1);
      }
      FUN_0041669c(param_1);
      local_a0 = FUN_004172ec((int)local_9c);
      FUN_004168a0((int)local_2a0,param_1,&local_a0);
    }
  }
  *in_FS_OFFSET = local_78;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b214  FUN_0041b214   (30 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041b214(undefined4 *param_1,uint param_2,undefined1 param_3)

{
  memset(param_1,param_3,param_2);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b234  FUN_0041b234   (305 bytes)   [unnamed]
int __cdecl FUN_0041b234(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  int *local_38;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x4305b8);
  piVar1 = (int *)operator_new_array();
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = _vector_new_ldtc_(piVar1,0x10,param_2,0x211,(undefined*)FUN_00416664);
  }
  uVar3 = param_2;
  if ((uint)param_1[1] < param_2) {
    uVar3 = param_1[1];
  }
  local_38 = piVar1;
  for (iVar2 = *param_1; iVar2 != *param_1 + uVar3 * 0x10; iVar2 = iVar2 + 0x10) {
    FUN_00416bd0((int)local_38,iVar2);
    local_38 = local_38 + 4;
  }
  for (; uVar3 < param_2; uVar3 = uVar3 + 1) {
    FUN_00416bd0((int)(piVar1 + uVar3 * 4),(int)&GHIDRA_STACK(0x0000000c));
  }
  if (*param_1 != 0) {
    _vector_delete_ldtc_(*param_1,0x10,0,0x19,(undefined*)std::string::_dtor);
  }
  *param_1 = (int)piVar1;
  param_1[1] = param_2;
  iVar2 = *param_1;
  std::string::_dtor((int)&GHIDRA_STACK(0x0000000c),2);
  *in_FS_OFFSET = local_30;
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b368  FUN_0041b368   (281 bytes)   [unnamed]
int __cdecl FUN_0041b368(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_150 [240];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  __InitExceptBlockLDTC(0x430638);
  uVar1 = FUN_0041687c(param_2);
  if (uVar1 < param_3) {
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar1 = 1;
    puVar6 = &LAB_004060a8;
    uVar5 = 0;
    local_40 = 0x14;
    FUN_004168f8(local_58);
    FUN_0041687c(param_2);
    puVar2 = FUN_0041ea4c(local_150,PTR_s_position_beyond_end_of_string_in_00431a7c);
    puVar3 = (uint *)FUN_00416de0(puVar2);
    std::string::string_from_cstr((int)local_2c,puVar3);
    local_34 = local_34 + 1;
    FUN_00417718(local_1c,(int)local_2c);
    local_34 = local_34 + 3;
    std::string::_dtor((int)local_2c,2);
    local_40 = 8;
    FUN_004280a0((uint *)&DAT_0040604c,local_1c,uVar5,puVar6,uVar1,uVar7,uVar8,uVar9);
  }
  iVar4 = FUN_0041687c(param_2);
  if (iVar4 - param_3 <= param_4) {
    param_4 = iVar4 - param_3;
  }
  local_40 = 0x20;
  FUN_004168f8(local_60);
  iVar4 = FUN_00416734(param_2);
  FUN_00418dec(param_1,(undefined4 *)(iVar4 + param_3),param_4);
  *in_FS_OFFSET = local_50;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b484  FUN_0041b484   (281 bytes)   [unnamed]
void __cdecl FUN_0041b484(int param_1,uint param_2)

{
  undefined1 *puVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_15c [16];
  undefined1 local_14c [240];
  int local_5c;
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  __InitExceptBlockLDTC(0x430690);
  if (param_2 == (*(uint *)&DAT_0042fce8)) {
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 1;
    puVar6 = &LAB_00405f50;
    uVar5 = 0;
    local_40 = 0x14;
    FUN_004168f8(local_58);
    puVar1 = FUN_0041ea4c(local_14c,PTR_s_invalid_string_size_parameter_in_00431a78);
    puVar2 = (uint *)FUN_00416de0(puVar1);
    std::string::string_from_cstr((int)local_2c,puVar2);
    local_34 = local_34 + 1;
    FUN_00417760(local_1c,(int)local_2c);
    local_34 = local_34 + 3;
    std::string::_dtor((int)local_2c,2);
    local_40 = 8;
    FUN_004280a0((uint *)&DAT_00405ef4,local_1c,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
  }
  piVar3 = std::string::__getRep(param_1,param_2,param_2);
  local_5c = FUN_004172ec((int)piVar3);
  FUN_004168a0((int)local_15c,param_1,&local_5c);
  while (param_2 != 0) {
    puVar1 = &GHIDRA_STACK(0x0000000c);
    iVar4 = FUN_00416734(param_1);
    FUN_00416e54((undefined1 *)(iVar4 + (param_2 - 1)),puVar1);
    param_2 = param_2 - 1;
  }
  *in_FS_OFFSET = local_50;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041bbc8  FUN_0041bbc8   (15 bytes)   [unnamed]
undefined4 __cdecl FUN_0041bbc8(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x14))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041bbd8  FUN_0041bbd8   (47 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041bbd8(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != param_2) {
    *param_1 = *param_2;
    FUN_00419748(param_1 + 1,param_2 + 1);
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041bc08  FUN_0041bc08   (13 bytes)   [unnamed]
void __cdecl FUN_0041bc08(int *param_1,int param_2)

{
  *param_1 = *param_1 - param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041bc18  FUN_0041bc18   (13 bytes)   [unnamed]
void __cdecl FUN_0041bc18(int *param_1,int param_2)

{
  *param_1 = *param_1 + param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041be10  FUN_0041be10   (30 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041be10(undefined4 *param_1,int param_2)

{
  FUN_00419d2c(param_1,(undefined4 *)(param_2 + 4));
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041bed0  FUN_0041bed0   (48 bytes)   [unnamed]
undefined4 __cdecl FUN_0041bed0(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_00416b00(param_1 + 0x10);
  if (param_2 < uVar1) {
    puVar2 = (undefined4 *)FUN_00416b0c((int *)(param_1 + 0x10),param_2);
    uVar3 = *puVar2;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041bf00  FUN_0041bf00   (83 bytes)   [unnamed]
undefined4 * __stdcall FUN_0041bf00(void)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4307b0);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0041cdc4(puVar1,0,0,1);
  }
  *in_FS_OFFSET = local_2c;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041bf74  FUN_0041bf74   (85 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041bf74(undefined4 param_1,uint *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x430810);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0041d404(puVar1,param_2,param_3);
  }
  *in_FS_OFFSET = local_2c;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041bff4  FUN_0041bff4   (41 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041bff4(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4309c4);
  *param_1 = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

} // namespace tea
