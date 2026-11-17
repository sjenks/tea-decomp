// TSBuild.exe — runtime / library code "code_0x00460000"
// 53 functions, 0x004600b8..0x00463f68. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004600b8  FUN_004600b8   (19 bytes)   [unnamed]
undefined4 __cdecl FUN_004600b8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004602c4  std::string::append   (274 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041ab68.
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
  
  __InitExceptBlockLDTC(0x486e78);
  iVar1 = FUN_004591bc(param_2);
  uVar6 = DAT_00485f20 - iVar1;
  uVar2 = FUN_004591bc(param_1);
  if (uVar6 <= uVar2) {
    uVar12 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar2 = 1;
    puVar8 = &LAB_00402064;
    uVar7 = 0;
    local_40 = 0x14;
    FUN_00459238(local_58);
    FUN_004591bc(param_2);
    FUN_004591bc(param_1);
    puVar3 = FUN_004670cc(local_148,PTR_s_resulting_length_is_invalid_in_f_00488a5c);
    puVar4 = (uint *)FUN_00459ce4(puVar3);
    std::string::string_from_cstr((int)local_2c,puVar4);
    local_34 = local_34 + 1;
    FUN_0045a664(local_1c,(int)local_2c);
    local_34 = local_34 + 3;
    std::string::_dtor((int)local_2c,2);
    local_40 = 8;
    FUN_00471ae8((uint *)&DAT_00402008,local_1c,uVar7,puVar8,uVar2,uVar9,uVar10,uVar12);
  }
  uVar2 = FUN_004591bc(param_2);
  uVar6 = FUN_0045a6f0(param_2);
  uVar11 = 0;
  uVar5 = FUN_004591bc(param_1);
  FUN_0045a1fc(param_1,uVar5,uVar11,uVar6,uVar2);
  *in_FS_OFFSET = local_50;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004603d8  FUN_004603d8   (60 bytes)   [unnamed]
int __cdecl FUN_004603d8(int param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FUN_004591bc(param_4);
  uVar4 = 0;
  uVar2 = FUN_004591bc(param_4);
  uVar3 = FUN_0045a6f0(param_4);
  FUN_0045a224(param_1,param_2,param_3,uVar3,uVar2,uVar4,uVar1);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460414  FUN_00460414   (434 bytes)   [unnamed]
void __cdecl FUN_00460414(int param_1,uint param_2,int param_3)

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
  
  __InitExceptBlockLDTC(0x486ef0);
  uVar1 = FUN_004591bc(param_1);
  if (uVar1 < param_2) {
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar1 = 1;
    puVar7 = &LAB_004021bc;
    uVar6 = 0;
    local_68 = 0x14;
    FUN_00459238(local_80);
    FUN_004591bc(param_1);
    puVar2 = FUN_004670cc(local_178,PTR_s_string_index_out_of_range_in_fun_00488a60);
    puVar3 = (uint *)FUN_00459ce4(puVar2);
    std::string::string_from_cstr((int)local_2c,puVar3);
    local_5c = local_5c + 1;
    FUN_0045a61c(local_1c,(int)local_2c);
    local_5c = local_5c + 3;
    std::string::_dtor((int)local_2c,2);
    local_68 = 8;
    FUN_00471ae8((uint *)&DAT_00402160,local_1c,uVar6,puVar7,uVar1,uVar8,uVar9,uVar10);
  }
  iVar4 = FUN_004591bc(param_3);
  uVar5 = DAT_00485f20 - iVar4;
  uVar1 = FUN_004591bc(param_1);
  if (uVar5 <= uVar1) {
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar1 = 1;
    puVar7 = &LAB_00402064;
    uVar6 = 0;
    local_68 = 0x2c;
    FUN_00459238(local_88);
    FUN_004591bc(param_3);
    FUN_004591bc(param_1);
    puVar2 = FUN_004670cc(local_268,PTR_s_resulting_length_is_invalid_in_f_00488a5c);
    puVar3 = (uint *)FUN_00459ce4(puVar2);
    std::string::string_from_cstr((int)local_54,puVar3);
    local_5c = local_5c + 1;
    FUN_0045a664(local_44,(int)local_54);
    local_5c = local_5c + 3;
    std::string::_dtor((int)local_54,2);
    local_68 = 0x20;
    FUN_00471ae8((uint *)&DAT_00402008,local_44,uVar6,puVar7,uVar1,uVar8,uVar9,uVar10);
  }
  FUN_004603d8(param_1,param_2,0,param_3);
  *in_FS_OFFSET = local_78;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004605c8  std::string::replace_fill   (899 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041ae90. replace(pos, n1, n2, ch); with pos=size,n1=0 it appends n2 copies of ch
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
  
  __InitExceptBlockLDTC(0x486f80);
  uVar1 = FUN_004591bc(param_1);
  if (uVar1 < param_2) {
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar1 = 1;
    puVar9 = &LAB_004021bc;
    uVar8 = 0;
    local_68 = 0x14;
    FUN_00459238(local_80);
    FUN_004591bc(param_1);
    puVar2 = FUN_004670cc(local_190,PTR_s_string_index_out_of_range_in_fun_00488a60);
    puVar3 = (uint *)FUN_00459ce4(puVar2);
    std::string::string_from_cstr((int)local_2c,puVar3);
    local_5c = local_5c + 1;
    FUN_0045a61c(local_1c,(int)local_2c);
    local_5c = local_5c + 3;
    std::string::_dtor((int)local_2c,2);
    local_68 = 8;
    FUN_00471ae8((uint *)&DAT_00402160,local_1c,uVar8,puVar9,uVar1,uVar10,uVar11,uVar12);
  }
  iVar4 = FUN_004591bc(param_1);
  local_84 = iVar4 - param_2;
  if (param_3 < local_84) {
    local_84 = param_3;
  }
  iVar4 = FUN_004591bc(param_1);
  if (DAT_00485f20 - param_4 <= iVar4 - local_84) {
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar1 = 1;
    puVar9 = &LAB_00402064;
    uVar8 = 0;
    local_68 = 0x2c;
    FUN_00459238(local_8c);
    FUN_004591bc(param_1);
    puVar2 = FUN_004670cc(local_280,PTR_s_resulting_length_is_invalid_in_f_00488a5c);
    puVar3 = (uint *)FUN_00459ce4(puVar2);
    std::string::string_from_cstr((int)local_54,puVar3);
    local_5c = local_5c + 1;
    FUN_0045a664(local_44,(int)local_54);
    local_5c = local_5c + 3;
    std::string::_dtor((int)local_54,2);
    local_68 = 0x20;
    FUN_00471ae8((uint *)&DAT_00402008,local_44,uVar8,puVar9,uVar1,uVar10,uVar11,uVar12);
  }
  iVar4 = FUN_004591bc(param_1);
  local_90 = (iVar4 - local_84) + param_4;
  if (local_90 == 0) {
    FUN_00458fdc(param_1);
    piVar5 = FUN_004590c4();
    FUN_00459b44(piVar5);
    puVar6 = FUN_004590c4();
    local_94 = FUN_0045a1f0((int)puVar6);
    FUN_004591e0((int)local_290,param_1,&local_94);
  }
  else {
    iVar4 = FUN_004591bc(param_1);
    local_98 = (iVar4 - local_84) - param_2;
    piVar5 = (int *)FUN_00459080(param_1);
    iVar4 = FUN_00459094(piVar5);
    if ((iVar4 < 2) && (uVar1 = FUN_0045a6cc(param_1), local_90 <= uVar1)) {
      if (local_98 != 0) {
        uVar1 = local_98;
        iVar4 = FUN_00459074(param_1);
        puVar6 = (undefined4 *)(iVar4 + param_2 + param_3);
        iVar4 = FUN_00459074(param_1);
        FUN_0045a6ac((undefined4 *)(iVar4 + param_2 + param_4),puVar6,uVar1);
      }
      if (param_4 != 0) {
        iVar4 = FUN_00459074(param_1);
        FUN_0046094c((undefined4 *)(iVar4 + param_2),param_4,param_5);
      }
      iVar4 = FUN_00459080(param_1);
      uVar1 = local_90;
      *(uint *)(iVar4 + 8) = local_90;
      iVar4 = FUN_00459074(param_1);
      puVar2 = (undefined1 *)(iVar4 + uVar1);
      uVar8 = FUN_0045a1ec();
      *puVar2 = (char)uVar8;
    }
    else {
      local_9c = std::string::__getRep(param_1,local_90,local_90);
      if (param_2 != 0) {
        uVar1 = param_2;
        puVar6 = (undefined4 *)FUN_00459074(param_1);
        puVar7 = (undefined4 *)FUN_0045a1f0((int)local_9c);
        FUN_00459ea8(puVar7,puVar6,uVar1);
      }
      if (param_4 != 0) {
        uVar1 = param_4;
        iVar4 = FUN_0045a1f0((int)local_9c);
        FUN_0046094c((undefined4 *)(iVar4 + param_2),uVar1,param_5);
      }
      if (local_98 != 0) {
        uVar1 = local_98;
        iVar4 = FUN_00459074(param_1);
        puVar6 = (undefined4 *)(iVar4 + param_2 + param_3);
        iVar4 = FUN_0045a1f0((int)local_9c);
        FUN_00459ea8((undefined4 *)(iVar4 + param_2 + param_4),puVar6,uVar1);
      }
      FUN_00458fdc(param_1);
      local_a0 = FUN_0045a1f0((int)local_9c);
      FUN_004591e0((int)local_2a0,param_1,&local_a0);
    }
  }
  *in_FS_OFFSET = local_78;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046094c  FUN_0046094c   (30 bytes)   [unnamed]
undefined4 * __cdecl FUN_0046094c(undefined4 *param_1,uint param_2,undefined1 param_3)

{
  memset(param_1,param_3,param_2);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046096c  FUN_0046096c   (305 bytes)   [unnamed]
int __cdecl FUN_0046096c(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  int *local_38;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x486fe8);
  piVar1 = (int *)operator_new_array();
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = _vector_new_ldtc_(piVar1,0x10,param_2,0x211,(undefined*)FUN_00457ed8);
  }
  uVar3 = param_2;
  if ((uint)param_1[1] < param_2) {
    uVar3 = param_1[1];
  }
  local_38 = piVar1;
  for (iVar2 = *param_1; iVar2 != *param_1 + uVar3 * 0x10; iVar2 = iVar2 + 0x10) {
    FUN_00459ad4((int)local_38,iVar2);
    local_38 = local_38 + 4;
  }
  for (; uVar3 < param_2; uVar3 = uVar3 + 1) {
    FUN_00459ad4((int)(piVar1 + uVar3 * 4),(int)&GHIDRA_STACK(0x0000000c));
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
// 0x00460aa0  FUN_00460aa0   (281 bytes)   [unnamed]
int __cdecl FUN_00460aa0(int param_1,int param_2,uint param_3,uint param_4)

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
  
  __InitExceptBlockLDTC(0x487068);
  uVar1 = FUN_004591bc(param_2);
  if (uVar1 < param_3) {
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar1 = 1;
    puVar6 = &LAB_004021bc;
    uVar5 = 0;
    local_40 = 0x14;
    FUN_00459238(local_58);
    FUN_004591bc(param_2);
    puVar2 = FUN_004670cc(local_150,PTR_s_position_beyond_end_of_string_in_00488a58);
    puVar3 = (uint *)FUN_00459ce4(puVar2);
    std::string::string_from_cstr((int)local_2c,puVar3);
    local_34 = local_34 + 1;
    FUN_0045a61c(local_1c,(int)local_2c);
    local_34 = local_34 + 3;
    std::string::_dtor((int)local_2c,2);
    local_40 = 8;
    FUN_00471ae8((uint *)&DAT_00402160,local_1c,uVar5,puVar6,uVar1,uVar7,uVar8,uVar9);
  }
  iVar4 = FUN_004591bc(param_2);
  if (iVar4 - param_3 <= param_4) {
    param_4 = iVar4 - param_3;
  }
  local_40 = 0x20;
  FUN_00459238(local_60);
  iVar4 = FUN_00459074(param_2);
  FUN_0045c644(param_1,(undefined4 *)(iVar4 + param_3),param_4);
  *in_FS_OFFSET = local_50;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460bbc  FUN_00460bbc   (281 bytes)   [unnamed]
void __cdecl FUN_00460bbc(int param_1,uint param_2)

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
  
  __InitExceptBlockLDTC(0x4870c0);
  if (param_2 == (*(uint *)&DAT_00485f20)) {
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 1;
    puVar6 = &LAB_00402064;
    uVar5 = 0;
    local_40 = 0x14;
    FUN_00459238(local_58);
    puVar1 = FUN_004670cc(local_14c,PTR_s_invalid_string_size_parameter_in_00488a54);
    puVar2 = (uint *)FUN_00459ce4(puVar1);
    std::string::string_from_cstr((int)local_2c,puVar2);
    local_34 = local_34 + 1;
    FUN_0045a664(local_1c,(int)local_2c);
    local_34 = local_34 + 3;
    std::string::_dtor((int)local_2c,2);
    local_40 = 8;
    FUN_00471ae8((uint *)&DAT_00402008,local_1c,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
  }
  piVar3 = std::string::__getRep(param_1,param_2,param_2);
  local_5c = FUN_0045a1f0((int)piVar3);
  FUN_004591e0((int)local_15c,param_1,&local_5c);
  while (param_2 != 0) {
    puVar1 = &GHIDRA_STACK(0x0000000c);
    iVar4 = FUN_00459074(param_1);
    FUN_00459d58((undefined1 *)(iVar4 + (param_2 - 1)),puVar1);
    param_2 = param_2 - 1;
  }
  *in_FS_OFFSET = local_50;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460cd8  FUN_00460cd8   (66 bytes)   [unnamed]
int __cdecl FUN_00460cd8(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4870f0);
  FUN_0045c9d8(param_1,param_2 + 0x40);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460d1c  FUN_00460d1c   (66 bytes)   [unnamed]
int __cdecl FUN_00460d1c(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x487114);
  FUN_0045c9d8(param_1,param_2 + 0x20);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460d60  FUN_00460d60   (66 bytes)   [unnamed]
int __cdecl FUN_00460d60(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x487138);
  FUN_0045c9d8(param_1,param_2 + 0x30);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004613cc  FUN_004613cc   (15 bytes)   [unnamed]
undefined4 __cdecl FUN_004613cc(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x14))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004613dc  FUN_004613dc   (47 bytes)   [unnamed]
undefined4 * __cdecl FUN_004613dc(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != param_2) {
    *param_1 = *param_2;
    FUN_0045dde0(param_1 + 1,param_2 + 1);
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046140c  FUN_0046140c   (13 bytes)   [unnamed]
void __cdecl FUN_0046140c(int *param_1,int param_2)

{
  *param_1 = *param_1 - param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046141c  FUN_0046141c   (13 bytes)   [unnamed]
void __cdecl FUN_0046141c(int *param_1,int param_2)

{
  *param_1 = *param_1 + param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00461614  FUN_00461614   (30 bytes)   [unnamed]
undefined4 * __cdecl FUN_00461614(undefined4 *param_1,int param_2)

{
  FUN_0045e3c4(param_1,(undefined4 *)(param_2 + 4));
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00461634  FUN_00461634   (121 bytes)   [unnamed]
int * __cdecl FUN_00461634(int *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 local_1c [3];
  int local_10 [3];
  
  FUN_0045e370(local_10,0);
  bVar1 = FUN_0045f6dc(*param_2);
  if (bVar1) {
    FUN_0045e370(param_1,-1);
  }
  else {
    piVar2 = (int *)FUN_0045bea8(*param_2);
    FUN_0045c418(local_1c,piVar2);
    FUN_004613dc(local_10,local_1c);
    FUN_0045e414(param_1,local_10);
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00461d70  FUN_00461d70   (112 bytes)   [unnamed]
void __cdecl FUN_00461d70(int param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_18 [16];
  int local_8;
  
  uVar1 = FUN_004591bc(param_1);
  if (param_2 < uVar1) {
    uVar1 = param_2;
  }
  piVar2 = std::string::__getRep(param_1,param_2,uVar1);
  uVar1 = FUN_004591bc(param_1);
  puVar3 = (undefined4 *)FUN_0045a6f0(param_1);
  puVar4 = (undefined4 *)FUN_0045a1f0((int)piVar2);
  FUN_00459ea8(puVar4,puVar3,uVar1);
  FUN_00458fdc(param_1);
  local_8 = FUN_0045a1f0((int)piVar2);
  FUN_004591e0((int)local_18,param_1,&local_8);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00461de0  FUN_00461de0   (29 bytes)   [unnamed]
void __cdecl FUN_00461de0(int *param_1)

{
  (**(code **)(*param_1 + 0x1c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00461e6c  FUN_00461e6c   (872 bytes)   [unnamed]
void __cdecl FUN_00461e6c(int param_1,undefined1 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  char *pcVar8;
  undefined1 uVar9;
  undefined4 local_238 [4];
  undefined4 local_228 [4];
  undefined4 local_218 [4];
  undefined4 local_208 [4];
  undefined4 local_1f8 [4];
  undefined4 local_1e8 [4];
  undefined4 local_1d8 [4];
  undefined4 local_1c8 [4];
  undefined4 local_1b8 [4];
  undefined1 local_1a8;
  undefined1 local_1a7 [399];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined1 local_7;
  char local_6;
  char local_5;
  
  local_5 = '\0';
  local_6 = '\0';
  if ((*(char **)(param_1 + 0x2c) < *(char **)(param_1 + 0x30)) &&
     (((cVar1 = **(char **)(param_1 + 0x2c), cVar1 == ' ' || (cVar1 == '-')) || (cVar1 == '+')))) {
    local_5 = '\x01';
  }
  if (*(char *)(param_1 + 0x28) == '\0') {
    pcVar8 = *(char **)(param_1 + 0x30);
  }
  else {
    pcVar8 = *(char **)(param_1 + 0x2c);
    if (local_5 != '\0') {
      pcVar8 = pcVar8 + 1;
    }
    for (; pcVar8 < *(char **)(param_1 + 0x30); pcVar8 = pcVar8 + 1) {
      if ((*pcVar8 < '0') || ('9' < *pcVar8)) {
        if ((*pcVar8 != 'e') && (*pcVar8 != 'E')) {
          local_6 = '\x01';
        }
        break;
      }
    }
  }
  local_c = (int)pcVar8 - *(int *)(param_1 + 0x2c);
  if (local_5 != '\0') {
    local_c = local_c + -1;
  }
  if ((*(int *)(param_1 + 0x18) == 10) && (*(char *)(param_1 + 0x29) != '\0')) {
    pcVar3 = (char *)FUN_004621d4(param_1);
    local_c = FUN_00467068(param_1,local_c,pcVar3);
    if (*(int *)(param_1 + 0x20) != 0) {
      uVar4 = FUN_004621ec(param_1);
      local_7 = (undefined1)uVar4;
    }
  }
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  iVar6 = local_18;
  iVar2 = local_14;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar5 = (*(int *)(param_1 + 0x14) - (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c))) -
            *(int *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x14) = 0;
    if (((0 < iVar5) && (iVar6 = iVar5, *(int *)(param_1 + 0x24) != 0)) &&
       (iVar6 = local_18, iVar2 = iVar5, *(int *)(param_1 + 0x24) != 1)) {
      iVar2 = local_14;
      local_10 = iVar5;
    }
  }
  local_14 = iVar2;
  local_18 = iVar6;
  FUN_00461de0(*(int **)(param_1 + 0x268));
  puVar7 = &local_1a8;
  while (iVar6 = local_10, local_10 = local_10 + -1, iVar6 != 0) {
    uVar9 = param_2;
    FUN_00462200(local_1b8,*(undefined4 **)(param_1 + 0x278));
    iVar6 = FUN_00462228(local_1b8);
    FUN_00462230(iVar6,uVar9);
  }
  if (local_5 != '\0') {
    puVar7 = local_1a7;
    uVar9 = local_1a8;
    FUN_00462200(local_1c8,*(undefined4 **)(param_1 + 0x278));
    iVar6 = FUN_00462228(local_1c8);
    FUN_00462230(iVar6,uVar9);
  }
  while (iVar6 = local_14, local_14 = local_14 + -1, iVar6 != 0) {
    uVar9 = param_2;
    FUN_00462200(local_1d8,*(undefined4 **)(param_1 + 0x278));
    iVar6 = FUN_00462228(local_1d8);
    FUN_00462230(iVar6,uVar9);
  }
  while (iVar6 = local_c, local_c = local_c + -1, iVar6 != 0) {
    uVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    FUN_00462200(local_1e8,*(undefined4 **)(param_1 + 0x278));
    iVar6 = FUN_00462228(local_1e8);
    FUN_00462230(iVar6,uVar9);
  }
  while (iVar6 = *(int *)(param_1 + 0x20), *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1,
        iVar6 != 0) {
    uVar9 = local_7;
    FUN_00462200(local_1f8,*(undefined4 **)(param_1 + 0x278));
    iVar6 = FUN_00462228(local_1f8);
    FUN_00462230(iVar6,uVar9);
    while( true ) {
      pcVar3 = *(char **)(param_1 + 0x34);
      cVar1 = *pcVar3;
      *pcVar3 = *pcVar3 + -1;
      if (cVar1 == '\0') break;
      uVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      FUN_00462200(local_208,*(undefined4 **)(param_1 + 0x278));
      iVar6 = FUN_00462228(local_208);
      FUN_00462230(iVar6,uVar9);
    }
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  }
  if (local_6 != '\0') {
    uVar4 = FUN_0046227c(param_1);
    uVar9 = (undefined1)uVar4;
    FUN_00462200(local_218,*(undefined4 **)(param_1 + 0x278));
    iVar6 = FUN_00462228(local_218);
    FUN_00462230(iVar6,uVar9);
    puVar7 = puVar7 + 1;
  }
  local_c = *(int *)(param_1 + 0x30) - (int)pcVar8;
  if (local_6 != '\0') {
    local_c = local_c + -1;
  }
  while (iVar6 = local_c, local_c = local_c + -1, 0 < iVar6) {
    uVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    FUN_00462200(local_228,*(undefined4 **)(param_1 + 0x278));
    iVar6 = FUN_00462228(local_228);
    FUN_00462230(iVar6,uVar9);
  }
  while (local_18 != 0) {
    local_18 = local_18 + -1;
    uVar9 = param_2;
    FUN_00462200(local_238,*(undefined4 **)(param_1 + 0x278));
    iVar6 = FUN_00462228(local_238);
    FUN_00462230(iVar6,uVar9);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004621d4  FUN_004621d4   (24 bytes)   [unnamed]
undefined4 __cdecl FUN_004621d4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00459b5c(*(int *)(param_1 + 0x270) + 8);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004621ec  FUN_004621ec   (17 bytes)   [unnamed]
undefined4 __cdecl FUN_004621ec(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x270) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x270) + 1));
}

// ----------------------------------------------------------------------------------------------------
// 0x00462200  FUN_00462200   (37 bytes)   [unnamed]
void __cdecl FUN_00462200(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462228  FUN_00462228   (8 bytes)   [unnamed]
undefined4 __cdecl FUN_00462228(undefined4 param_1)

{
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462230  FUN_00462230   (74 bytes)   [unnamed]
int __cdecl FUN_00462230(int param_1,undefined1 param_2)

{
  bool bVar1;
  int *piVar2;
  int local_c;
  int local_8;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    local_c = FUN_0045b17c();
    piVar2 = &local_c;
    local_8 = FUN_0045de6c(*(int **)(param_1 + 8),param_2);
    bVar1 = FUN_0045bde4(&local_8,piVar2);
    if (bVar1) {
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046227c  FUN_0046227c   (16 bytes)   [unnamed]
undefined4 __cdecl FUN_0046227c(int param_1)

{
  return CONCAT31((int3)((uint)*(undefined1 **)(param_1 + 0x270) >> 8),
                  **(undefined1 **)(param_1 + 0x270));
}

// ----------------------------------------------------------------------------------------------------
// 0x00462338  FUN_00462338   (6 bytes)   [unnamed]
void __stdcall FUN_00462338(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int in_stack_00000008;
  undefined1 in_stack_0000000c;
  undefined1 uVar5;
  undefined4 auStack_38 [4];
  undefined4 auStack_28 [4];
  undefined4 auStack_18 [4];
  int iStack_8;
  
  iStack_8 = 0;
  iVar2 = FUN_004591bc(in_stack_00000008);
  iVar2 = *(int *)(param_1 + 0x14) - iVar2;
  if (0 < iVar2) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      iVar1 = iVar2;
      iVar2 = iStack_8;
    }
    for (; iStack_8 = iVar2, iVar1 != 0; iVar1 = iVar1 + -1) {
      uVar5 = in_stack_0000000c;
      FUN_00462200(auStack_18,*(undefined4 **)(param_1 + 0x278));
      iVar2 = FUN_00462228(auStack_18);
      FUN_00462230(iVar2,uVar5);
      iVar2 = iStack_8;
    }
  }
  puVar3 = (undefined1 *)FUN_00459b5c(in_stack_00000008);
  iVar2 = FUN_004591bc(in_stack_00000008);
  puVar4 = puVar3 + iVar2;
  for (; puVar3 < puVar4; puVar3 = puVar3 + 1) {
    uVar5 = *puVar3;
    FUN_00462200(auStack_28,*(undefined4 **)(param_1 + 0x278));
    iVar2 = FUN_00462228(auStack_28);
    FUN_00462230(iVar2,uVar5);
  }
  for (; iStack_8 != 0; iStack_8 = iStack_8 + -1) {
    uVar5 = in_stack_0000000c;
    FUN_00462200(auStack_38,*(undefined4 **)(param_1 + 0x278));
    iVar2 = FUN_00462228(auStack_38);
    FUN_00462230(iVar2,uVar5);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046233e  FUN_0046233e   (238 bytes)   [unnamed]
void __stdcall FUN_0046233e(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  int unaff_EBP;
  undefined1 uVar8;
  
  iVar6 = *(int *)(unaff_EBP + 0xc);
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar3 = FUN_004591bc(iVar6);
  iVar3 = *(int *)(iVar2 + 0x14) - iVar3;
  if (0 < iVar3) {
    if (*(int *)(iVar2 + 0x24) == 0) {
      *(int *)(unaff_EBP + -4) = iVar3;
      iVar3 = 0;
    }
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      uVar8 = *(undefined1 *)(unaff_EBP + 0x10);
      FUN_00462200((undefined4 *)(unaff_EBP + -0x14),*(undefined4 **)(iVar2 + 0x278));
      iVar4 = FUN_00462228(unaff_EBP + -0x14);
      FUN_00462230(iVar4,uVar8);
    }
  }
  puVar5 = (undefined1 *)FUN_00459b5c(iVar6);
  iVar6 = FUN_004591bc(iVar6);
  puVar7 = puVar5 + iVar6;
  for (; puVar5 < puVar7; puVar5 = puVar5 + 1) {
    uVar8 = *puVar5;
    FUN_00462200((undefined4 *)(unaff_EBP + -0x24),*(undefined4 **)(iVar2 + 0x278));
    iVar6 = FUN_00462228(unaff_EBP + -0x24);
    FUN_00462230(iVar6,uVar8);
  }
  iVar6 = *(int *)(unaff_EBP + -4);
  while (iVar6 != 0) {
    uVar8 = *(undefined1 *)(unaff_EBP + 0x10);
    FUN_00462200((undefined4 *)(unaff_EBP + -0x34),*(undefined4 **)(iVar2 + 0x278));
    iVar6 = FUN_00462228(unaff_EBP + -0x34);
    FUN_00462230(iVar6,uVar8);
    piVar1 = (int *)(unaff_EBP + -4);
    *piVar1 = *piVar1 + -1;
    iVar6 = *piVar1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046242c  FUN_0046242c   (24 bytes)   [unnamed]
int __cdecl FUN_0046242c(int param_1,char param_2)

{
  int iVar1;
  
  if (param_2 == '\0') {
    iVar1 = param_1 + 0x40;
  }
  else {
    iVar1 = param_1 + 0x30;
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046286c  FUN_0046286c   (517 bytes, 2 ranges)   [unnamed]
undefined4 * __cdecl FUN_0046286c(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 local_d0 [6];
  undefined4 local_b8 [4];
  undefined4 local_a8 [6];
  undefined4 local_90 [4];
  undefined4 local_80 [6];
  undefined1 local_68 [16];
  undefined4 local_58 [2];
  int local_50;
  undefined4 local_48 [4];
  undefined4 local_38 [6];
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c [10];
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10 [8];
  undefined4 *local_8;
  
  puVar6 = (undefined4 *)param_2[9];
  local_8 = (undefined4 *)FUN_00458158((int)param_2);
  local_8 = (undefined4 *)*local_8;
  bVar3 = true;
  while (bVar2 = FUN_004581c8((int *)&local_8), puVar1 = local_8, !bVar2) {
    piVar4 = (int *)FUN_0045d46c((int)local_8);
    piVar5 = (int *)FUN_0045d464(local_10,param_3);
    bVar3 = FUN_0045d490(param_2 + 0xc,piVar5,piVar4);
    puVar6 = puVar1;
    if (bVar3) {
      local_8 = (undefined4 *)FUN_00457fb4((int)local_8);
      local_8 = (undefined4 *)*local_8;
    }
    else {
      local_8 = (undefined4 *)FUN_004581e0((int)local_8);
      local_8 = (undefined4 *)*local_8;
    }
  }
  if ((char)param_2[0xb] == '\0') {
    FUN_00457fc0((int)local_58,puVar6);
    if (bVar3 != false) {
      FUN_00457f7c((int)local_68,(int)param_2);
      bVar3 = FUN_0045813c((int)local_58,(int)local_68);
      if (bVar3) {
        local_12 = 1;
        puVar7 = &local_12;
        FUN_0045d0b8((int)local_90,param_2,local_8,(int)puVar6,param_3);
        FUN_00462a74(local_80,local_90,puVar7);
        FUN_00462ab4(param_1,local_80);
        return param_1;
      }
      FUN_0045d000((int)local_58);
    }
    piVar4 = (int *)FUN_0045d464(local_1c,param_3);
    piVar5 = (int *)FUN_0045d46c(local_50);
    bVar3 = FUN_0045d490(param_2 + 0xc,piVar5,piVar4);
    if (bVar3) {
      local_1d = 1;
      puVar7 = &local_1d;
      FUN_0045d0b8((int)local_b8,param_2,local_8,(int)puVar6,param_3);
      FUN_00462a74(local_a8,local_b8,puVar7);
      FUN_00462ab4(param_1,local_a8);
    }
    else {
      local_1e = 0;
      FUN_00462a74(local_d0,local_58,&local_1e);
      FUN_00462ab4(param_1,local_d0);
    }
  }
  else {
    local_11 = 1;
    puVar7 = &local_11;
    FUN_0045d0b8((int)local_48,param_2,local_8,(int)puVar6,param_3);
    FUN_00462a74(local_38,local_48,puVar7);
    FUN_00462ab4(param_1,local_38);
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462a74  FUN_00462a74   (64 bytes)   [unnamed]
undefined4 * __cdecl FUN_00462a74(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x48723c);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 4) = *param_3;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462ab4  FUN_00462ab4   (66 bytes)   [unnamed]
undefined4 * __cdecl FUN_00462ab4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x487244);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462af8  FUN_00462af8   (266 bytes)   [unnamed]
int __cdecl FUN_00462af8(int param_1,byte *param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  code *pcVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte *pbVar11;
  undefined1 local_148 [240];
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  __InitExceptBlockLDTC(0x487278);
  if (param_2 == (byte *)0x0) {
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 1;
    pcVar6 = FUN_0045642c;
    uVar5 = 0;
    local_40 = 0x14;
    FUN_00459238(local_58);
    puVar1 = FUN_004670cc(local_148,PTR_s_unexpected_NULL_pointer_in_funct_00488a64);
    puVar2 = (uint *)FUN_00459ce4(puVar1);
    std::string::string_from_cstr((int)local_2c,puVar2);
    local_34 = local_34 + 1;
    FUN_00459cec(local_1c,(int)local_2c);
    local_34 = local_34 + 2;
    std::string::_dtor((int)local_2c,2);
    local_40 = 8;
    FUN_00471ae8((uint *)&DAT_00403f08,local_1c,uVar5,(undefined*)pcVar6,uVar7,uVar8,uVar9,uVar10);
  }
  while( true ) {
    uVar7 = FUN_004591bc(param_1);
    iVar4 = DAT_00485f20;
    if (uVar7 < (uint)(param_4 + param_3)) {
      *in_FS_OFFSET = local_50;
      return iVar4;
    }
    pbVar11 = param_2;
    iVar4 = param_4;
    iVar3 = FUN_00459074(param_1);
    iVar4 = FUN_0045ebb4((byte *)(iVar3 + param_3),pbVar11,iVar4);
    if (iVar4 == 0) break;
    param_3 = param_3 + 1;
  }
  *in_FS_OFFSET = local_50;
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462c04  FUN_00462c04   (61 bytes)   [unnamed]
void __cdecl FUN_00462c04(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00459b5c(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x44) = 1;
  uVar1 = FUN_00459b5c(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 2;
  *(int *)(param_1 + 0x54) = param_1 + 0x40;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462c5c  FUN_00462c5c   (235 bytes)   [unnamed]
void __cdecl FUN_00462c5c(int *param_1)

{
  undefined1 uVar1;
  undefined4 *in_FS_OFFSET;
  int *piVar2;
  undefined4 local_58;
  undefined1 local_34 [16];
  undefined1 local_24 [16];
  undefined1 local_14 [16];
  
  __InitExceptBlockLDTC(0x4872c8);
  uVar1 = (**(code **)(*param_1 + 8))();
  *(undefined1 *)(param_1 + 6) = uVar1;
  piVar2 = param_1;
  uVar1 = (**(code **)(*param_1 + 0xc))();
  *(undefined1 *)((int)param_1 + 0x19) = uVar1;
  (**(code **)(*param_1 + 0x10))(local_14,*param_1,piVar2,local_14,param_1);
  FUN_00459ad4((int)(param_1 + 8),(int)local_14);
  std::string::_dtor((int)local_14,2);
  (**(code **)(*param_1 + 0x18))();
  FUN_00459ad4((int)(param_1 + 0x10),(int)local_24);
  std::string::_dtor((int)local_24,2);
  (**(code **)(*param_1 + 0x14))();
  FUN_00459ad4((int)(param_1 + 0xc),(int)local_34);
  std::string::_dtor((int)local_34,2);
  FUN_00462c04((int)(param_1 + 4));
  *in_FS_OFFSET = local_58;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462da0  FUN_00462da0   (48 bytes)   [unnamed]
undefined4 __cdecl FUN_00462da0(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_00459a04(param_1 + 0x10);
  if (param_2 < uVar1) {
    puVar2 = (undefined4 *)FUN_00459a10((int *)(param_1 + 0x10),param_2);
    uVar3 = *puVar2;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462dd0  FUN_00462dd0   (41 bytes)   [unnamed]
undefined4 * __cdecl FUN_00462dd0(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4874b0);
  *param_1 = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462dfc  FUN_00462dfc   (84 bytes)   [unnamed]
undefined4 * __cdecl FUN_00462dfc(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4874c8);
  FUN_00462f20(param_1,param_2);
  *param_1 = &__rwstd::facet_imp::vftable;
  param_1[2] = 0;
  param_1[3] = param_3;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462e7c  FUN_00462e7c   (8 bytes)   [unnamed]
undefined4 __cdecl FUN_00462e7c(undefined4 param_1)

{
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462e84  FUN_00462e84   (48 bytes)   [unnamed]
undefined4 * __cdecl FUN_00462e84(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4874ec);
  *param_1 = &std::exception::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462f14  FUN_00462f14   (11 bytes)   [unnamed]
void __cdecl FUN_00462f14(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462f20  FUN_00462f20   (58 bytes)   [unnamed]
undefined4 * __cdecl FUN_00462f20(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x487510);
  *param_1 = &__rwstd::ref_counted::vftable;
  param_1[1] = param_2;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462fa0  FUN_00462fa0   (245 bytes)   [unnamed]
int __cdecl FUN_00462fa0(int param_1,char *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  
  __InitExceptBlockLDTC(0x487534);
  local_18 = 8;
  FUN_00459238(local_30);
  FUN_0045aa98(param_1 + 0x10);
  local_c = local_c + 2;
  FUN_00459238(local_38);
  FUN_0045aa98(param_1 + 0x20);
  local_c = local_c + 1;
  FUN_00459238(local_40);
  FUN_0045aa98(param_1 + 0x30);
  local_c = local_c + 1;
  if (param_2 == (char *)0x0) {
    *(undefined1 *)(param_1 + 8) = 0x2e;
    *(undefined1 *)(param_1 + 9) = 0x2c;
  }
  else {
    *(char *)(param_1 + 8) = param_2[1];
    *(char *)(param_1 + 9) = param_2[2];
    FUN_00459b6c(param_1 + 0x10,*(uint **)(param_2 + 4));
    FUN_00459b6c(param_1 + 0x20,*(uint **)(param_2 + 8));
    FUN_00459b6c(param_1 + 0x30,*(uint **)(param_2 + 0xc));
    if (*param_2 != '\0') {
      operator_delete_array();
    }
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00463790  FUN_00463790   (113 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_00463790(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x487794);
  if (param_1 != 0) {
    std::string::_dtor(param_1 + 0x30,2);
    std::string::_dtor(param_1 + 0x20,2);
    std::string::_dtor(param_1 + 0x10,2);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00463874  FUN_00463874   (110 bytes)   [unnamed]
void __cdecl FUN_00463874(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x48779c);
  if (param_1 != 0) {
    std::string::_dtor(param_1 + 0x30,2);
    std::string::_dtor(param_1 + 0x20,2);
    std::string::_dtor(param_1 + 0x10,2);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046392c  FUN_0046392c   (232 bytes)   [unnamed]
undefined4 * __cdecl FUN_0046392c(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4878ac);
  *param_1 = &std::exception::vftable;
  *param_1 = &std::ios_base::failure::vftable;
  param_1[4] = 0;
  iVar1 = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(param_2 + 8) + -4);
    piVar3 = std::string::__getRep(param_1 + 2,uVar2,uVar2);
    param_1[4] = piVar3 + 3;
    memcpy((undefined4 *)param_1[4],*(undefined4 **)(param_2 + 8),uVar2);
  }
  else {
    param_1[4] = *(undefined4 *)(param_2 + 8);
    piVar3 = (int *)(param_1[4] + -0xc);
    if (piVar3 != &DAT_00485bcc) {
      *piVar3 = *piVar3 + 1;
    }
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00463b24  FUN_00463b24   (140 bytes)   [unnamed]
undefined4 __cdecl FUN_00463b24(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x487918);
  DAT_0048d068 = DAT_0048d068 + 1;
  if (DAT_0048d068 == 1) {
    FUN_004600b8(DAT_0048cf5c,&DAT_0048cfa0);
    FUN_004600b8(DAT_0048cfe0,&DAT_0048cfa0);
    FUN_004600b8(DAT_0048d020,&DAT_0048cfa0);
    *(uint *)(DAT_0048cfe0 + 4) = *(uint *)(DAT_0048cfe0 + 4) | 0x2000;
  }
  else {
    *in_FS_OFFSET = local_28;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00463c18  FUN_00463c18   (115 bytes)   [unnamed]
undefined4 * __cdecl FUN_00463c18(undefined4 *param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x48793c);
  *param_1 = &std::ios_base::vftable;
  if (DAT_0048d084 == 0) {
    FUN_00465da4();
  }
  iVar1 = DAT_0048d084;
  param_1[4] = DAT_0048d084;
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00463ddc  FUN_00463ddc   (203 bytes)   [unnamed; function defined from prologue-scan]
void __stdcall FUN_00463ddc(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x487a1c);
  FUN_0045ae7c((undefined4 *)&DAT_0048ce90,0);
  FUN_0045ae7c((undefined4 *)&DAT_0048ced4,1);
  FUN_0045ae7c((undefined4 *)&DAT_0048cf18,2);
  FUN_0045baf0(&DAT_0048cf5c,0,0x48ce90);
  FUN_0045bbac((int *)&DAT_0048cfa0,0,0x48ced4);
  FUN_0045bbac(&DAT_0048cfe0,0,0x48cf18);
  FUN_0045bbac(&DAT_0048d020,0,0x48cf18);
  FUN_00463b24(&DAT_0048d060);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00463ea8  FUN_00463ea8   (181 bytes)   [unnamed]
void __stdcall FUN_00463ea8(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x487a30);
  std::ios_base::Init::_dtor(0x48d060,2);
  std::basic_ostream_char::_dtor(&DAT_0048d020,2);
  std::basic_ostream_char::_dtor(&DAT_0048cfe0,2);
  std::basic_ostream_char::_dtor((undefined4 *)&DAT_0048cfa0,2);
  std::basic_istream_char::_dtor(&DAT_0048cf5c,2);
  std::basic_filebuf_char::_dtor((int *)&DAT_0048cf18,2);
  std::basic_filebuf_char::_dtor((int *)&DAT_0048ced4,2);
  std::basic_filebuf_char::_dtor((int *)&DAT_0048ce90,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00463f60  FUN_00463f60   (7 bytes)   [unnamed]
void __stdcall FUN_00463f60(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00463f68  FUN_00463f68   (741 bytes)   [unnamed]
undefined1 * __cdecl FUN_00463f68(uint *param_1)

{
  char cVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  char *pcVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  int *piVar9;
  char *pcVar10;
  uint *puVar11;
  undefined4 *in_FS_OFFSET;
  byte bVar12;
  undefined4 uVar13;
  undefined *puVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  char local_188 [240];
  undefined1 *local_98;
  undefined4 local_94;
  int *local_90;
  int *local_8c;
  int *local_88;
  int *local_84;
  uint local_80;
  undefined1 *local_7c;
  int *local_78;
  int *local_74;
  undefined1 *local_70;
  int *local_6c;
  undefined4 local_68;
  uint *local_5c;
  undefined4 local_58;
  undefined2 local_48;
  int local_3c;
  undefined1 local_34 [8];
  int *local_2c;
  undefined **local_24 [2];
  undefined1 local_1c [8];
  int *local_14;
  int local_c;
  int local_8;
  
  bVar12 = 0;
  __InitExceptBlockLDTC(0x487aa0);
  local_48 = 8;
  FUN_00465be4(&local_c,param_1,0x10);
  local_3c = local_3c + 1;
  local_48 = 0x14;
  if (local_8 != 0) goto LAB_0046416e;
  uVar18 = 0;
  uVar17 = 0;
  uVar16 = 0;
  uVar15 = 1;
  puVar14 = &LAB_004642ac;
  uVar13 = 0;
  local_48 = 0x2c;
  local_5c = (uint *)FUN_00467104(local_188,5);
  std::string::string_from_cstr((int)local_34,local_5c);
  local_3c = local_3c + 2;
  local_24[0] = &std::logic_error::vftable;
  local_68 = 0;
  local_14 = (int *)0x0;
  local_48 = 0x38;
  if (local_2c[-3] == -1 || local_2c[-3] + 1 < 0) {
    uVar6 = local_2c[-1];
    local_78 = std::string::__getRep(local_1c,uVar6,uVar6);
    local_7c = local_1c;
    local_88 = local_78 + 3;
    local_84 = local_2c;
    local_80 = uVar6;
    local_74 = local_88;
    local_14 = local_88;
    memcpy(local_88,local_2c,uVar6);
  }
  else {
    local_70 = local_1c;
    local_6c = local_2c;
    local_14 = local_2c;
    piVar9 = local_2c + -3;
    if (piVar9 != &DAT_00485bcc) {
      *piVar9 = *piVar9 + 1;
    }
  }
  local_48 = 0x2c;
  local_24[0] = &std::domain_error::vftable;
  local_3c = local_3c + 2;
  if (local_2c != (int *)0x0) {
    if (local_2c[-3] != -1) {
      piVar9 = local_2c + -3;
      if (piVar9 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else if (piVar9 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else {
        *piVar9 = *piVar9 + -1;
        iVar2 = *piVar9 + 1;
      }
      if (iVar2 != 0) goto LAB_00464157;
    }
    local_8c = local_2c + -3;
    local_90 = local_2c + -3;
    operator_delete();
    local_94 = 0;
    local_98 = local_34;
    local_2c = (int *)0x0;
  }
LAB_00464157:
  local_48 = 0x20;
  FUN_00471ae8((uint *)&DAT_00464250,(undefined4*)local_24,uVar13,puVar14,uVar15,uVar16,uVar17,uVar18);
LAB_0046416e:
  ppuVar3 = FUN_0046b198();
  local_48 = 0x14;
  strlen((uint *)ppuVar3[2]);
  strlen((uint *)&DAT_00487a3c /* "true" */);
  strlen((uint *)"false");
  puVar4 = (undefined1 *)operator_new_array();
  *puVar4 = 1;
  puVar8 = (uint *)(puVar4 + 0x10);
  puVar4[1] = **ppuVar3;
  puVar4[2] = *ppuVar3[1];
  uVar15 = 0xffffffff;
  pcVar5 = ppuVar3[2];
  do {
    pcVar10 = pcVar5;
    if (uVar15 == 0) break;
    uVar15 = uVar15 - 1;
    pcVar10 = pcVar5 + (uint)bVar12 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar10;
  } while (cVar1 != '\0');
  uVar15 = ~uVar15;
  puVar7 = (uint *)(pcVar10 + -uVar15);
  puVar11 = puVar8;
  for (uVar6 = uVar15 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar11 = *puVar7;
    puVar7 = puVar7 + (uint)bVar12 * -2 + 1;
    puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(char *)puVar11 = (char)*puVar7;
    puVar7 = (uint *)((int)puVar7 + (uint)bVar12 * -2 + 1);
    puVar11 = (uint *)((int)puVar11 + (uint)bVar12 * -2 + 1);
  }
  *(uint **)(puVar4 + 4) = puVar8;
  pcVar5 = strlen(puVar8);
  puVar8 = (uint *)((int)puVar8 + (int)(pcVar5 + 1));
  *puVar8 = DAT_00487a47;
  *(undefined1 *)(puVar8 + (uint)bVar12 * -2 + 1) = (&DAT_00487a4b)[(uint)bVar12 * -8];
  *(uint **)(puVar4 + 8) = puVar8;
  pcVar5 = strlen(puVar8);
  pcVar5 = (char *)((int)puVar8 + (int)(pcVar5 + 1));
  *(undefined4 *)pcVar5 = GH_PIECE("false", 0, undefined4);
  *(undefined2 *)(pcVar5 + (uint)bVar12 * -8 + 4) =
       *(undefined2 *)("false" + (uint)bVar12 * -8 + 4);
  *(char **)(puVar4 + 0xc) = pcVar5;
  local_3c = local_3c + -1;
  __rwstd::use_Clib_locale::_dtor(&local_c,2);
  *in_FS_OFFSET = local_58;
  return puVar4;
}

} // namespace tea
