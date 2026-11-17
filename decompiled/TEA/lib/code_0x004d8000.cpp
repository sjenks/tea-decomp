// TEA.exe — runtime / library code "code_0x004d8000"
// 67 functions, 0x004d8000..0x004dbfc4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004d8000  FUN_004d8000   (48 bytes)   [unnamed]
undefined4 __cdecl FUN_004d8000(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_004cf2b4(param_1 + 0x10);
  if (param_2 < uVar1) {
    puVar2 = (undefined4 *)FUN_004cf2c0((int *)(param_1 + 0x10),param_2);
    uVar3 = *puVar2;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d8030  FUN_004d8030   (41 bytes)   [unnamed]
undefined4 * __cdecl FUN_004d8030(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5157d8);
  *param_1 = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d805c  FUN_004d805c   (84 bytes)   [unnamed]
undefined4 * __cdecl FUN_004d805c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5157f0);
  FUN_004d8180(param_1,param_2);
  *param_1 = &__rwstd::facet_imp::vftable;
  param_1[2] = 0;
  param_1[3] = param_3;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d80dc  FUN_004d80dc   (8 bytes)   [unnamed]
undefined4 __cdecl FUN_004d80dc(undefined4 param_1)

{
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d80e4  FUN_004d80e4   (48 bytes)   [unnamed]
undefined4 * __cdecl FUN_004d80e4(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x515814);
  *param_1 = &std::exception::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d8174  FUN_004d8174   (11 bytes)   [unnamed]
void __cdecl FUN_004d8174(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d8180  FUN_004d8180   (58 bytes)   [unnamed]
undefined4 * __cdecl FUN_004d8180(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x515838);
  *param_1 = &__rwstd::ref_counted::vftable;
  param_1[1] = param_2;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d8200  FUN_004d8200   (245 bytes)   [unnamed]
int __cdecl FUN_004d8200(int param_1,char *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  
  __InitExceptBlockLDTC(0x51585c);
  local_18 = 8;
  FUN_004ceae8(local_30);
  FUN_004d0348(param_1 + 0x10);
  local_c = local_c + 2;
  FUN_004ceae8(local_38);
  FUN_004d0348(param_1 + 0x20);
  local_c = local_c + 1;
  FUN_004ceae8(local_40);
  FUN_004d0348(param_1 + 0x30);
  local_c = local_c + 1;
  if (param_2 == (char *)0x0) {
    *(undefined1 *)(param_1 + 8) = 0x2e;
    *(undefined1 *)(param_1 + 9) = 0x2c;
  }
  else {
    *(char *)(param_1 + 8) = param_2[1];
    *(char *)(param_1 + 9) = param_2[2];
    FUN_004cf41c(param_1 + 0x10,*(uint **)(param_2 + 4));
    FUN_004cf41c(param_1 + 0x20,*(uint **)(param_2 + 8));
    FUN_004cf41c(param_1 + 0x30,*(uint **)(param_2 + 0xc));
    if (*param_2 != '\0') {
      operator_delete_array();
    }
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d89e4  FUN_004d89e4   (113 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_004d89e4(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x515a60);
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
// 0x004d8ac8  FUN_004d8ac8   (110 bytes)   [unnamed]
void __cdecl FUN_004d8ac8(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x515a68);
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
// 0x004d8b80  FUN_004d8b80   (232 bytes)   [unnamed]
undefined4 * __cdecl FUN_004d8b80(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x515b78);
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
    if (piVar3 != &DAT_00513d58) {
      *piVar3 = *piVar3 + 1;
    }
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d8d78  FUN_004d8d78   (140 bytes)   [unnamed]
undefined4 __cdecl FUN_004d8d78(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x515be4);
  DAT_0051bbec = DAT_0051bbec + 1;
  if (DAT_0051bbec == 1) {
    FUN_004d562c(DAT_0051bae0,&DAT_0051bb24);
    FUN_004d562c(DAT_0051bb64,&DAT_0051bb24);
    FUN_004d562c(DAT_0051bba4,&DAT_0051bb24);
    *(uint *)(DAT_0051bb64 + 4) = *(uint *)(DAT_0051bb64 + 4) | 0x2000;
  }
  else {
    *in_FS_OFFSET = local_28;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d8e6c  FUN_004d8e6c   (115 bytes)   [unnamed]
undefined4 * __cdecl FUN_004d8e6c(undefined4 *param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x515c08);
  *param_1 = &std::ios_base::vftable;
  if (DAT_0051bc08 == 0) {
    FUN_004daff8();
  }
  iVar1 = DAT_0051bc08;
  param_1[4] = DAT_0051bc08;
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d9030  FUN_004d9030   (203 bytes)   [unnamed; function defined from prologue-scan]
void __stdcall FUN_004d9030(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x515ce8);
  FUN_004d072c((undefined4 *)&DAT_0051ba14,0);
  FUN_004d072c((undefined4 *)&DAT_0051ba58,1);
  FUN_004d072c((undefined4 *)&DAT_0051ba9c,2);
  FUN_004d13a0(&DAT_0051bae0,0,0x51ba14);
  FUN_004d145c((int *)&DAT_0051bb24,0,0x51ba58);
  FUN_004d145c(&DAT_0051bb64,0,0x51ba9c);
  FUN_004d145c(&DAT_0051bba4,0,0x51ba9c);
  FUN_004d8d78(&DAT_0051bbe4);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d90fc  FUN_004d90fc   (181 bytes)   [unnamed]
void __stdcall FUN_004d90fc(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x515cfc);
  std::ios_base::Init::_dtor(0x51bbe4,2);
  std::basic_ostream_char::_dtor(&DAT_0051bba4,2);
  std::basic_ostream_char::_dtor(&DAT_0051bb64,2);
  std::basic_ostream_char::_dtor((undefined4 *)&DAT_0051bb24,2);
  std::basic_istream_char::_dtor(&DAT_0051bae0,2);
  std::basic_filebuf_char::_dtor((int *)&DAT_0051ba9c,2);
  std::basic_filebuf_char::_dtor((int *)&DAT_0051ba58,2);
  std::basic_filebuf_char::_dtor((int *)&DAT_0051ba14,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d91b4  FUN_004d91b4   (7 bytes)   [unnamed]
void __stdcall FUN_004d91b4(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d91bc  FUN_004d91bc   (741 bytes)   [unnamed]
undefined1 * __cdecl FUN_004d91bc(uint *param_1)

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
  __InitExceptBlockLDTC(0x515d6c);
  local_48 = 8;
  FUN_004dae38(&local_c,param_1,0x10);
  local_3c = local_3c + 1;
  local_48 = 0x14;
  if (local_8 != 0) goto LAB_004d93c2;
  uVar18 = 0;
  uVar17 = 0;
  uVar16 = 0;
  uVar15 = 1;
  puVar14 = &LAB_004d9500;
  uVar13 = 0;
  local_48 = 0x2c;
  local_5c = (uint *)FUN_004dc358(local_188,5);
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
    if (piVar9 != &DAT_00513d58) {
      *piVar9 = *piVar9 + 1;
    }
  }
  local_48 = 0x2c;
  local_24[0] = &std::domain_error::vftable;
  local_3c = local_3c + 2;
  if (local_2c != (int *)0x0) {
    if (local_2c[-3] != -1) {
      piVar9 = local_2c + -3;
      if (piVar9 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar9 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar9 = *piVar9 + -1;
        iVar2 = *piVar9 + 1;
      }
      if (iVar2 != 0) goto LAB_004d93ab;
    }
    local_8c = local_2c + -3;
    local_90 = local_2c + -3;
    operator_delete();
    local_94 = 0;
    local_98 = local_34;
    local_2c = (int *)0x0;
  }
LAB_004d93ab:
  local_48 = 0x20;
  FUN_004e7cc4((uint *)&DAT_004d94a4,(undefined4*)local_24,uVar13,puVar14,uVar15,uVar16,uVar17,uVar18);
LAB_004d93c2:
  ppuVar3 = FUN_004e0ff0();
  local_48 = 0x14;
  strlen((uint *)ppuVar3[2]);
  strlen((uint *)&DAT_00515d08 /* "true" */);
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
  *puVar8 = DAT_00515d13;
  *(undefined1 *)(puVar8 + (uint)bVar12 * -2 + 1) = (&DAT_00515d17)[(uint)bVar12 * -8];
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

// ----------------------------------------------------------------------------------------------------
// 0x004d9614  FUN_004d9614   (566 bytes)   [unnamed]
undefined4 * __cdecl FUN_004d9614(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x516214);
  *param_1 = &__rwstd::ref_counted::vftable;
  param_1[1] = param_4;
  *param_1 = &__rwstd::facet_imp::vftable;
  param_1[2] = 0;
  param_1[3] = 0x20;
  *param_1 = &std::locale::facet::vftable;
  *param_1 = &PTR_FUN_005162c0;
  param_1[8] = param_2;
  *(undefined1 *)(param_1 + 9) = param_3;
  if (param_1[8] == 0) {
    param_1[8] = &DAT_00515e04;
    *(undefined1 *)(param_1 + 9) = 0;
  }
  uVar4 = 0;
  uVar5 = 0xff;
  do {
    if ((*(byte *)(param_1[8] + (uVar4 & 0xff) * 4) & 0x10) != 0) {
      if (uVar4 < 0xff) goto LAB_004d96cc;
      break;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xff);
  goto LAB_004d96f2;
  while (uVar5 = uVar5 - 1, uVar4 < uVar5) {
LAB_004d9795:
    if ((*(byte *)(param_1[8] + (uVar5 & 0xff) * 4) & 8) != 0) break;
  }
  goto LAB_004d97bb;
  while (uVar5 = uVar5 - 1, uVar4 < uVar5) {
LAB_004d96cc:
    if ((*(byte *)(param_1[8] + (uVar5 & 0xff) * 4) & 0x10) != 0) break;
  }
LAB_004d96f2:
  param_1[10] = uVar4;
  param_1[0xb] = uVar5;
  uVar1 = operator_new_array();
  param_1[0xe] = uVar1;
  puVar2 = (undefined1 *)param_1[0xe];
  for (; uVar4 <= uVar5; uVar4 = uVar4 + 1) {
    uVar3 = uVar4;
    if ((((0x60 < uVar4) && (uVar4 < 0x7b)) &&
        ((*(byte *)(param_1[8] + (uVar4 & 0xff) * 4) & 0x10) != 0)) &&
       ((*(byte *)(param_1[8] + (uVar4 - 0x20 & 0xff) * 4) & 8) != 0)) {
      uVar3 = uVar4 - 0x20;
    }
    *puVar2 = (char)uVar3;
    puVar2 = puVar2 + 1;
  }
  uVar4 = 0;
  uVar5 = 0xff;
  do {
    if ((*(byte *)(param_1[8] + (uVar4 & 0xff) * 4) & 8) != 0) {
      if (uVar4 < 0xff) goto LAB_004d9795;
      break;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xff);
LAB_004d97bb:
  param_1[0xc] = uVar4;
  param_1[0xd] = uVar5;
  uVar1 = operator_new_array();
  param_1[0xf] = uVar1;
  puVar2 = (undefined1 *)param_1[0xf];
  for (; uVar4 <= uVar5; uVar4 = uVar4 + 1) {
    uVar3 = uVar4;
    if (((0x40 < uVar4) && (uVar4 < 0x5b)) &&
       (((*(byte *)(param_1[8] + (uVar4 & 0xff) * 4) & 8) != 0 &&
        ((*(byte *)(param_1[8] + (uVar4 + 0x20 & 0xff) * 4) & 0x10) != 0)))) {
      uVar3 = uVar4 + 0x20;
    }
    *puVar2 = (char)uVar3;
    puVar2 = puVar2 + 1;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d984c  FUN_004d984c   (476 bytes)   [unnamed]
void __cdecl FUN_004d984c(int param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *in_FS_OFFSET;
  int iVar5;
  undefined4 local_40;
  undefined1 local_1c [8];
  uint *local_14;
  int local_c [2];
  
  __InitExceptBlockLDTC(0x516254);
  iVar5 = 2;
  FUN_004db488((int)local_1c,param_2);
  FUN_004dae38(local_c,local_14,iVar5);
  if (local_14 != (uint *)0x0) {
    if (local_14[-3] != 0xffffffff) {
      puVar2 = local_14 + -3;
      if (puVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (puVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *puVar2 = *puVar2 - 1;
        iVar5 = *puVar2 + 1;
      }
      if (iVar5 != 0) goto LAB_004d9904;
    }
    operator_delete();
    local_14 = (uint *)0x0;
  }
LAB_004d9904:
  uVar3 = 0;
  uVar1 = 0xff;
  do {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar3 & 0xff) * 4) & 0x10) != 0) {
      if (uVar3 < 0xff) goto LAB_004d992e;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff);
  goto LAB_004d994f;
  while (uVar1 = uVar1 - 1, uVar3 < uVar1) {
LAB_004d9979:
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar1 & 0xff) * 4) & 8) != 0) break;
  }
  goto LAB_004d999a;
  while (uVar1 = uVar1 - 1, uVar3 < uVar1) {
LAB_004d992e:
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar1 & 0xff) * 4) & 0x10) != 0) break;
  }
LAB_004d994f:
  *(uint *)(param_1 + 0x28) = uVar3;
  *(uint *)(param_1 + 0x2c) = uVar1;
  uVar3 = 0;
  uVar1 = 0xff;
  do {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar3 & 0xff) * 4) & 8) != 0) {
      if (uVar3 < 0xff) goto LAB_004d9979;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff);
LAB_004d999a:
  *(uint *)(param_1 + 0x30) = uVar3;
  *(uint *)(param_1 + 0x34) = uVar1;
  puVar4 = *(undefined1 **)(param_1 + 0x38);
  for (uVar1 = *(uint *)(param_1 + 0x28); uVar1 <= *(uint *)(param_1 + 0x2c); uVar1 = uVar1 + 1) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar1 & 0xff) * 4) & 0x10) != 0) {
      uVar3 = FUN_004e3054(uVar1);
      *puVar4 = (char)uVar3;
    }
    puVar4 = puVar4 + 1;
  }
  puVar4 = *(undefined1 **)(param_1 + 0x3c);
  for (uVar1 = *(uint *)(param_1 + 0x30); uVar1 <= *(uint *)(param_1 + 0x34); uVar1 = uVar1 + 1) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar1 & 0xff) * 4) & 8) != 0) {
      uVar3 = FUN_004e3000(uVar1);
      *puVar4 = (char)uVar3;
    }
    puVar4 = puVar4 + 1;
  }
  __rwstd::use_Clib_locale::_dtor(local_c,2);
  *in_FS_OFFSET = local_40;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d9a28  FUN_004d9a28   (145 bytes)   [unnamed]
void __cdecl FUN_004d9a28(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x516290);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_005162c0;
    if (*(char *)(param_1 + 9) != '\0') {
      operator_delete_array();
    }
    operator_delete_array();
    operator_delete_array();
    __rwstd::ref_counted::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d9abc  FUN_004d9abc   (51 bytes)   [unnamed]
uint __cdecl FUN_004d9abc(int param_1,uint param_2)

{
  if ((*(byte *)(*(int *)(param_1 + 0x20) + (param_2 & 0xff) * 4) & 0x10) != 0) {
    param_2 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x38) >> 8),
                       *(undefined1 *)
                        (*(int *)(param_1 + 0x38) + ((param_2 & 0xff) - *(int *)(param_1 + 0x28))));
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d9af0  FUN_004d9af0   (59 bytes)   [unnamed]
void __cdecl FUN_004d9af0(int param_1,byte *param_2,byte *param_3)

{
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uint)*param_2 * 4) & 0x10) != 0) {
      *param_2 = *(byte *)(*(int *)(param_1 + 0x38) + ((uint)*param_2 - *(int *)(param_1 + 0x28)));
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d9b2c  FUN_004d9b2c   (51 bytes)   [unnamed]
uint __cdecl FUN_004d9b2c(int param_1,uint param_2)

{
  if ((*(byte *)(*(int *)(param_1 + 0x20) + (param_2 & 0xff) * 4) & 8) != 0) {
    param_2 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x3c) >> 8),
                       *(undefined1 *)
                        (*(int *)(param_1 + 0x3c) + ((param_2 & 0xff) - *(int *)(param_1 + 0x30))));
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d9b60  FUN_004d9b60   (59 bytes)   [unnamed]
void __cdecl FUN_004d9b60(int param_1,byte *param_2,byte *param_3)

{
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uint)*param_2 * 4) & 8) != 0) {
      *param_2 = *(byte *)(*(int *)(param_1 + 0x3c) + ((uint)*param_2 - *(int *)(param_1 + 0x30)));
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d9b9c  FUN_004d9b9c   (8 bytes)   [unnamed]
undefined1 __cdecl FUN_004d9b9c(undefined4 param_1,undefined1 param_2)

{
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d9ba4  FUN_004d9ba4   (33 bytes)   [unnamed]
int __cdecl FUN_004d9ba4(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  memcpy(param_4,param_2,param_3 - (int)param_2);
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d9bc8  FUN_004d9bc8   (8 bytes)   [unnamed]
undefined1 __cdecl FUN_004d9bc8(undefined4 param_1,undefined1 param_2)

{
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d9bd0  FUN_004d9bd0   (33 bytes)   [unnamed]
int __cdecl FUN_004d9bd0(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4, undefined4 *param_5)

{
  memcpy(param_5,param_2,param_3 - (int)param_2);
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d9bf4  FUN_004d9bf4   (93 bytes)   [unnamed]
undefined4 __cdecl FUN_004d9bf4(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar3 = &DAT_005162e8;
  pcVar2 = param_1;
  do {
    bVar4 = *pcVar2 == *pcVar3;
    if (!bVar4) break;
    if (*pcVar2 == '\0') {
      return 1;
    }
    pcVar1 = pcVar2 + 1;
    bVar4 = *pcVar1 == pcVar3[1];
    if (!bVar4) break;
    pcVar2 = pcVar2 + 2;
    pcVar3 = pcVar3 + 2;
    bVar4 = *pcVar1 == '\0';
  } while (!bVar4);
  if (!bVar4) {
    pcVar2 = "POSIX";
    do {
      bVar4 = *param_1 == *pcVar2;
      if (!bVar4) break;
      if (*param_1 == '\0') {
        return 1;
      }
      pcVar3 = param_1 + 1;
      bVar4 = *pcVar3 == pcVar2[1];
      if (!bVar4) break;
      param_1 = param_1 + 2;
      pcVar2 = pcVar2 + 2;
      bVar4 = *pcVar3 == '\0';
    } while (!bVar4);
    if (!bVar4) {
      return 0;
    }
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d9c54  FUN_004d9c54   (447 bytes)   [unnamed]
undefined4 * __cdecl FUN_004d9c54(undefined4 *param_1,uint *param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined4 local_30;
  int local_c [2];
  
  __InitExceptBlockLDTC(0x516320);
  uVar5 = 0;
  puVar1 = FUN_004d9e74(param_2);
  FUN_004d9614(param_1,puVar1,uVar5,param_3);
  *param_1 = &PTR_FUN_005163bc;
  if ((undefined *)param_1[8] == &DAT_00515e04) goto LAB_004d9e00;
  *(undefined1 *)(param_1 + 9) = 1;
  FUN_004dae38(local_c,param_2,2);
  uVar3 = 0;
  uVar2 = 0xff;
  do {
    if ((*(byte *)(param_1[8] + (uVar3 & 0xff) * 4) & 0x10) != 0) {
      if (uVar3 < 0xff) goto LAB_004d9cf3;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff);
  goto LAB_004d9d16;
  while (uVar2 = uVar2 - 1, uVar3 < uVar2) {
LAB_004d9d46:
    if ((*(byte *)(param_1[8] + (uVar2 & 0xff) * 4) & 8) != 0) break;
  }
  goto LAB_004d9d69;
  while (uVar2 = uVar2 - 1, uVar3 < uVar2) {
LAB_004d9cf3:
    if ((*(byte *)(param_1[8] + (uVar2 & 0xff) * 4) & 0x10) != 0) break;
  }
LAB_004d9d16:
  param_1[10] = uVar3;
  uVar3 = 0;
  param_1[0xb] = uVar2;
  uVar2 = 0xff;
  do {
    if ((*(byte *)(param_1[8] + (uVar3 & 0xff) * 4) & 8) != 0) {
      if (uVar3 < 0xff) goto LAB_004d9d46;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff);
LAB_004d9d69:
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar2;
  puVar4 = (undefined1 *)param_1[0xe];
  for (uVar2 = param_1[10]; uVar2 <= (uint)param_1[0xb]; uVar2 = uVar2 + 1) {
    if ((*(byte *)(param_1[8] + (uVar2 & 0xff) * 4) & 0x10) != 0) {
      uVar3 = FUN_004e3054(uVar2);
      *puVar4 = (char)uVar3;
    }
    puVar4 = puVar4 + 1;
  }
  puVar4 = (undefined1 *)param_1[0xf];
  for (uVar2 = param_1[0xc]; uVar2 <= (uint)param_1[0xd]; uVar2 = uVar2 + 1) {
    if ((*(byte *)(param_1[8] + (uVar2 & 0xff) * 4) & 8) != 0) {
      uVar3 = FUN_004e3000(uVar2);
      *puVar4 = (char)uVar3;
    }
    puVar4 = puVar4 + 1;
  }
  __rwstd::use_Clib_locale::_dtor(local_c,2);
LAB_004d9e00:
  *in_FS_OFFSET = local_30;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d9e14  FUN_004d9e14   (93 bytes)   [unnamed]
void __cdecl FUN_004d9e14(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x51635c);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_005163bc;
    FUN_004d9a28(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d9e74  FUN_004d9e74   (332 bytes, 2 ranges)   [unnamed]
uint * __cdecl FUN_004d9e74(uint *param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  uint *local_38;
  undefined4 local_30;
  int local_c [2];
  
  __InitExceptBlockLDTC(0x516390);
  uVar1 = FUN_004d9bf4((char *)param_1);
  if ((char)uVar1 == '\0') {
    puVar2 = (uint *)operator_new_array();
    FUN_004dae38(local_c,param_1,2);
    bVar4 = 0;
    local_38 = puVar2;
    do {
      uVar5 = (uint)bVar4;
      iVar3 = FUN_004e13d4(uVar5);
      uVar6 = (uint)(iVar3 != 0);
      iVar3 = FUN_004e13a8(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 2;
      }
      iVar3 = FUN_004e1354(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 4;
      }
      iVar3 = FUN_004e13e8(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 8;
      }
      iVar3 = FUN_004e1394(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x10;
      }
      iVar3 = FUN_004e133c(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x20;
      }
      iVar3 = FUN_004e1368(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x40;
      }
      iVar3 = FUN_004e13c0(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x80;
      }
      iVar3 = FUN_004e13fc(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x100;
      }
      iVar3 = FUN_004e137c(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x200;
      }
      *local_38 = uVar6;
      bVar4 = bVar4 + 1;
      local_38 = local_38 + 1;
    } while (bVar4 != 0xff);
    __rwstd::use_Clib_locale::_dtor(local_c,2);
    *in_FS_OFFSET = local_30;
  }
  else {
    puVar2 = (uint *)&DAT_00515e04;
    *in_FS_OFFSET = local_30;
  }
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d9fc8  FUN_004d9fc8   (59 bytes)   [unnamed]
void __stdcall FUN_004d9fc8(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5163f8);
  FUN_004cf1ac(&DAT_0051bbf0,2,(undefined4 *)&DAT_005163e4);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004da004  FUN_004da004   (49 bytes)   [unnamed]
void __stdcall FUN_004da004(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x51640c);
  if (DAT_0051bbf0 != 0) {
    operator_delete_array();
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004da038  FUN_004da038   (261 bytes)   [unnamed]
undefined4 * __cdecl FUN_004da038(undefined4 *param_1,LPCSTR param_2)

{
  HMODULE pHVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x516430);
  piVar2 = param_1 + 2;
  param_1[6] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = local_30;
  param_1[0xf] = local_2c;
  *piVar2 = 1;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  puVar3 = (undefined4 *)param_1[8];
  if (param_1[8] == 0) {
    if (param_1[9] == param_1[10]) {
      FUN_004d2384(piVar2);
      puVar3 = (undefined4 *)param_1[9];
      param_1[9] = param_1[9] + 0x28;
    }
    else {
      puVar3 = (undefined4 *)param_1[9];
      param_1[9] = param_1[9] + 0x28;
    }
  }
  else {
    param_1[8] = *(undefined4 *)(param_1[8] + 0xc);
  }
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  param_1[0xb] = puVar3;
  puVar3[1] = 0;
  puVar3[2] = puVar3;
  puVar3[3] = puVar3;
  *piVar2 = 0x2a;
  if (param_2 == (LPCSTR)0x0) {
    pHVar1 = GetModuleHandleA((LPCSTR)0x0);
    *param_1 = pHVar1;
  }
  else {
    pHVar1 = LoadLibraryA(param_2);
    *param_1 = pHVar1;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004da204  FUN_004da204   (698 bytes)   [unnamed]
undefined4 __cdecl FUN_004da204(undefined4 *param_1,undefined4 param_2,UINT param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2020 [2];
  int local_2018;
  char local_2010;
  uint local_2008 [995];
  undefined4 uStackY_107c;
  undefined4 local_a0 [2];
  int local_98;
  int local_8c;
  undefined1 *local_88;
  int *local_84;
  int *local_80;
  undefined4 *local_7c;
  uint local_78;
  undefined1 *local_74;
  int *local_70;
  int *local_6c;
  int *local_68;
  undefined1 *local_64;
  int *local_60;
  undefined4 local_5c;
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  UINT local_2c [2];
  undefined1 local_24 [8];
  int *local_1c;
  undefined1 local_14 [8];
  int local_c;
  int local_8;
  
  iVar3 = 2;
  do {
    local_8 = iVar3;
    iVar3 = local_8 + -1;
  } while (local_8 + -1 != 0);
  __InitExceptBlockLDTC(0x5164a8);
  uStackY_107c = 0x4da241;
  FUN_004d2ad0(local_a0,param_1 + 2,(int *)&param_3);
  if (param_1[0xb] != local_98) {
    uVar1 = *(undefined4 *)(local_98 + 0x20);
    *in_FS_OFFSET = local_50;
    return uVar1;
  }
  iVar3 = LoadStringA((HINSTANCE)*param_1,param_3,(LPSTR)local_2008,0x1f58);
  if (iVar3 == 0) goto LAB_004da4aa;
  local_40 = 0x14;
  iVar4 = std::string::string_from_cstr((int)local_14,local_2008);
  local_34 = local_34 + 1;
  local_2c[0] = param_3;
  local_5c = 0;
  local_1c = (int *)0x0;
  local_40 = 0x20;
  iVar3 = *(int *)(*(int *)(iVar4 + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(iVar4 + 8) + -4);
    local_70 = std::string::__getRep(local_24,uVar2,uVar2);
    local_74 = local_24;
    local_80 = local_70 + 3;
    local_7c = *(undefined4 **)(iVar4 + 8);
    local_78 = uVar2;
    local_6c = local_80;
    local_1c = local_80;
    memcpy(local_80,local_7c,uVar2);
  }
  else {
    local_60 = *(int **)(iVar4 + 8);
    local_64 = local_24;
    local_68 = local_60 + -3;
    local_1c = local_60;
    if (local_68 != &DAT_00513d58) {
      *local_68 = *local_68 + 1;
    }
  }
  local_40 = 0x14;
  local_34 = local_34 + 2;
  FUN_004d7854(local_2020,param_1 + 2,local_2c);
  local_34 = local_34 + -2;
  if (local_1c != (int *)0x0) {
    if (local_1c[-3] != -1) {
      piVar5 = local_1c + -3;
      if (piVar5 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar3 = *piVar5 + 1;
      }
      if (iVar3 != 0) goto LAB_004da407;
    }
    local_84 = local_1c + -3;
    operator_delete();
    local_88 = local_24;
    local_1c = (int *)0x0;
  }
LAB_004da407:
  local_34 = local_34 + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar5 = (int *)(local_c + -0xc);
      if (piVar5 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar3 = *piVar5 + 1;
      }
      if (iVar3 != 0) goto LAB_004da480;
    }
    local_8c = local_c + -0xc;
    operator_delete();
  }
LAB_004da480:
  if (local_2010 != '\0') {
    uVar1 = *(undefined4 *)(local_2018 + 0x20);
    *in_FS_OFFSET = local_50;
    return uVar1;
  }
LAB_004da4aa:
  *in_FS_OFFSET = local_50;
  return param_4;
}

// ----------------------------------------------------------------------------------------------------
// 0x004da4c0  FUN_004da4c0   (55 bytes)   [unnamed]
uint __cdecl FUN_004da4c0(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  for (piVar1 = (*(int * *)&DAT_0051bbf0); ((uVar2 < DAT_0051bbf4 && (*piVar1 != 0)) && (param_1 != *piVar1));
      piVar1 = piVar1 + 1) {
    uVar2 = uVar2 + 1;
  }
  if ((*(int * *)&DAT_0051bbf0)[uVar2] == 0) {
    return DAT_0051bbf4;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004da4f8  FUN_004da4f8   (256 bytes, 2 ranges)   [unnamed]
int * __cdecl FUN_004da4f8(LPCSTR param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x516538);
  piVar1 = (int *)operator_new();
  if ((piVar1 == (int *)0x0) || (FUN_004da038(piVar1,param_1), *piVar1 == 0)) {
    if (piVar1 != (int *)0x0) {
      __rwstd::__rwcat::_dtor(piVar1,3);
    }
    piVar1 = (int *)0xffffffff;
    *in_FS_OFFSET = local_30;
  }
  else {
    iVar3 = 0;
    for (piVar2 = (*(int * *)&DAT_0051bbf0); *piVar2 != 0; piVar2 = piVar2 + 1) {
      iVar3 = iVar3 + 1;
    }
    if (iVar3 == (*(int *)&DAT_0051bbf4)) {
      FUN_004d2bd0((int *)&(*(int * *)&DAT_0051bbf0),(*(int *)&DAT_0051bbf4) * 2,0);
    }
    (*(int * *)&DAT_0051bbf0)[iVar3] = (int)piVar1;
    *in_FS_OFFSET = local_30;
  }
  return piVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004da604  FUN_004da604   (114 bytes, 2 ranges)   [unnamed]
undefined4 __cdecl FUN_004da604(int param_1,undefined4 param_2,UINT param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x51659c);
  uVar1 = FUN_004da4c0(param_1);
  if (uVar1 < DAT_0051bbf4) {
    param_4 = FUN_004da204(*(undefined4 **)(DAT_0051bbf0 + uVar1 * 4),param_2,param_3,param_4);
    *in_FS_OFFSET = local_28;
  }
  else {
    *in_FS_OFFSET = local_28;
  }
  return param_4;
}

// ----------------------------------------------------------------------------------------------------
// 0x004daa54  FUN_004daa54   (111 bytes)   [unnamed]
void __stdcall FUN_004daa54(void)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x516660);
  puVar1 = DAT_0051bbf8;
  if (DAT_0051664c != '\0') {
    DAT_0051bbf8[1] = DAT_0051bbf8[1] + -1;
    if ((puVar1[1] == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)();
    }
    DAT_0051664c = '\0';
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004daac4  FUN_004daac4   (87 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x004dab02) */
int __cdecl FUN_004daac4(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x516680);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined **)(param_1 + 8) = &DAT_00513d64;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dab3c  FUN_004dab3c   (32 bytes)   [unnamed]
int * __cdecl FUN_004dab3c(int *param_1)

{
  if (*param_1 == 0) {
    DAT_0051bbfc = DAT_0051bbfc + 1;
    *param_1 = DAT_0051bbfc;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dab5c  FUN_004dab5c   (252 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x004dabfb) */
undefined4 * __cdecl FUN_004dab5c(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_54;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  
  __InitExceptBlockLDTC(0x516798);
  local_18 = 8;
  *param_1 = &__rwstd::ref_counted::vftable;
  param_1[1] = param_3;
  *param_1 = &__rwstd::locale_imp::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  local_c = local_c + 2;
  local_2c = 0;
  local_54 = 0x4dabbd;
  FUN_004cf2d4(param_1 + 4,param_2,&local_2c);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[10] = &DAT_00513d64;
  local_c = local_c + 2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  local_18 = 0x38;
  std::string::string_from_cstr((int)&local_54,(uint *)&DAT_00516765);
  local_18 = 0x2c;
  FUN_004d5fe4(param_1 + 2,6);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dae04  FUN_004dae04   (50 bytes)   [unnamed]
undefined * __cdecl FUN_004dae04(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0x10;
  uVar1 = 0;
  do {
    if ((uVar2 & param_2) != 0) {
      return *(undefined **)(*(int *)(param_1 + 8) + 8 + uVar1 * 0x10);
    }
    uVar1 = uVar1 + 1;
    uVar2 = uVar2 * 2;
  } while (uVar1 < 6);
  return &DAT_00516766;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dae38  FUN_004dae38   (352 bytes)   [unnamed]
int * __cdecl FUN_004dae38(int *param_1,uint *param_2,int param_3)

{
  char cVar1;
  uint *puVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *in_FS_OFFSET;
  byte bVar9;
  char local_98 [16];
  char local_88 [16];
  char local_78 [16];
  char local_68 [16];
  char local_58 [32];
  char local_38 [16];
  undefined4 local_28;
  undefined2 local_18;
  
  bVar9 = 0;
  __InitExceptBlockLDTC(0x516884);
  local_18 = 8;
  *param_1 = param_3;
  puVar2 = (uint *)FUN_004e3578((ushort)param_3,(uint *)0x0);
  param_1[1] = (int)puVar2;
  if (puVar2 == (uint *)0x0) goto LAB_004daf77;
  strlen(puVar2);
  pcVar3 = (char *)operator_new_array();
  pcVar4 = "LC_COLLATE";
  pcVar8 = local_98;
  for (iVar5 = 0x1c; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + ((uint)bVar9 * -2 + 1) * 4;
    pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
  }
  if (param_3 < 5) {
    if (param_3 == 4) {
      pcVar4 = local_78;
    }
    else if (param_3 == 1) {
      pcVar4 = local_98;
    }
    else {
      if (param_3 != 2) goto LAB_004daeda;
      pcVar4 = local_88;
    }
  }
  else if (param_3 == 0x10) {
    pcVar4 = local_68;
  }
  else if (param_3 == 0x20) {
    pcVar4 = local_58;
  }
  else {
LAB_004daeda:
    pcVar4 = local_38;
  }
  pcVar4 = thunk_FUN_004dcd18((char *)param_1[1],pcVar4);
  if (pcVar4 != (char *)0x0) {
    param_1[1] = (int)pcVar4;
  }
  pcVar4 = thunk_FUN_004dc924((char *)param_1[1],'=');
  if (pcVar4 == (char *)0x0) {
    uVar6 = 0xffffffff;
    pcVar4 = (char *)param_1[1];
    do {
      pcVar8 = pcVar4;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar8 = pcVar4 + (uint)bVar9 * -2 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar8;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar4 = pcVar8 + -uVar6;
    pcVar8 = pcVar3;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + (uint)bVar9 * -8 + 4;
      pcVar8 = pcVar8 + (uint)bVar9 * -8 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar9 * -2 + 1;
      pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
    }
  }
  else {
    uVar6 = 0xffffffff;
    pcVar4 = pcVar4 + 1;
    do {
      pcVar8 = pcVar4;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar8 = pcVar4 + (uint)bVar9 * -2 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar8;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar4 = pcVar8 + -uVar6;
    pcVar8 = pcVar3;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + (uint)bVar9 * -8 + 4;
      pcVar8 = pcVar8 + (uint)bVar9 * -8 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar9 * -2 + 1;
      pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
    }
  }
  pcVar4 = thunk_FUN_004dc924(pcVar3,'\n');
  if (pcVar4 != (char *)0x0) {
    *pcVar4 = '\0';
  }
  param_1[1] = (int)pcVar3;
LAB_004daf77:
  FUN_004e3578((ushort)param_3,param_2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004daff8  FUN_004daff8   (713 bytes)   [unnamed]
void __stdcall FUN_004daff8(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  code *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_18c [240];
  undefined1 *local_9c;
  undefined4 local_98;
  int *local_94;
  int *local_90;
  int *local_8c;
  int *local_88;
  uint local_84;
  undefined1 *local_80;
  int *local_7c;
  int *local_78;
  int *local_74;
  undefined1 *local_70;
  int *local_6c;
  undefined4 local_68;
  uint *local_5c;
  undefined4 local_58;
  undefined2 local_48;
  int local_3c;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined1 local_2c [8];
  int *local_24;
  undefined **local_1c [2];
  undefined1 local_14 [8];
  int *local_c;
  
  __InitExceptBlockLDTC(0x5168e4);
  if ((*(undefined4 * *)&DAT_0051bc08) == (undefined4 *)0x0) goto LAB_004db1ec;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 1;
  pcVar5 = FUN_0041e688;
  uVar4 = 0;
  local_48 = 0x14;
  local_5c = (uint *)FUN_004dc320(local_18c,PTR_s_locale_initid_called_twice_005165c8);
  std::string::string_from_cstr((int)local_2c,local_5c);
  local_3c = local_3c + 2;
  local_1c[0] = &std::logic_error::vftable;
  local_68 = 0;
  local_c = (int *)0x0;
  local_48 = 0x20;
  if (local_24[-3] == -1 || local_24[-3] + 1 < 0) {
    uVar1 = local_24[-1];
    local_7c = std::string::__getRep(local_14,uVar1,uVar1);
    local_80 = local_14;
    local_8c = local_7c + 3;
    local_88 = local_24;
    local_84 = uVar1;
    local_78 = local_8c;
    local_c = local_8c;
    memcpy(local_8c,local_24,uVar1);
  }
  else {
    local_70 = local_14;
    local_6c = local_24;
    local_c = local_24;
    local_74 = local_24 + -3;
    if (local_74 != &DAT_00513d58) {
      *local_74 = *local_74 + 1;
    }
  }
  local_48 = 0x14;
  local_3c = local_3c + 1;
  if (local_24 != (int *)0x0) {
    if (local_24[-3] != -1) {
      piVar3 = local_24 + -3;
      if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_004db1d5;
    }
    local_90 = local_24 + -3;
    local_94 = local_24 + -3;
    operator_delete();
    local_98 = 0;
    local_9c = local_2c;
    local_24 = (int *)0x0;
  }
LAB_004db1d5:
  local_48 = 8;
  FUN_004e7cc4((uint *)&DAT_004113dc,(undefined4*)local_1c,uVar4,(undefined*)pcVar5,uVar6,uVar7,uVar8,uVar9);
LAB_004db1ec:
  local_30 = (undefined4 *)operator_new();
  if (local_30 != (undefined4 *)0x0) {
    local_48 = 0x50;
    FUN_004dab5c(local_30,10,1);
    local_48 = 0x44;
  }
  DAT_0051bc00 = local_30;
  *(undefined1 *)(local_30 + 0xc) = 1;
  FUN_004cf41c((int)(local_30 + 8),(uint *)&DAT_00516767);
  iVar2 = 0;
  for (uVar6 = 0x10; (uVar6 & 0x3f0) != 0; uVar6 = uVar6 * 2) {
    FUN_004cf384(DAT_0051bc00[2] + iVar2 * 0x10,(int)(DAT_0051bc00 + 8));
    iVar2 = iVar2 + 1;
  }
  local_34 = (undefined4 *)operator_new();
  if (local_34 != (undefined4 *)0x0) {
    local_48 = 0x68;
    FUN_004dab5c(local_34,10,2);
  }
  DAT_0051bc04 = local_34;
  local_34[6] = 0x3f0;
  *(undefined1 *)(local_34 + 0xc) = 1;
  (*(undefined4 * *)&DAT_0051bc08) = DAT_0051bc00;
  *in_FS_OFFSET = local_58;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004db414  FUN_004db414   (113 bytes)   [unnamed]
int * __cdecl FUN_004db414(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x516968);
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)*param_2) {
    puVar2[1] = puVar2[1] + -1;
    if ((puVar2[1] == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)();
    }
    iVar3 = *param_2;
    *param_1 = iVar3;
    piVar1 = (int *)(iVar3 + 4);
    *piVar1 = *piVar1 + 1;
  }
  *in_FS_OFFSET = local_30;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004db488  FUN_004db488   (877 bytes)   [unnamed]
int __cdecl FUN_004db488(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_1b4 [240];
  undefined4 *local_c4;
  undefined4 *local_c0;
  uint local_bc;
  int local_b8;
  int *local_b4;
  int *local_b0;
  undefined4 local_a0;
  undefined1 *local_9c;
  undefined4 local_98;
  int *local_94;
  int *local_90;
  int *local_8c;
  int *local_88;
  uint local_84;
  undefined1 *local_80;
  int *local_7c;
  int *local_78;
  int *local_74;
  undefined1 *local_70;
  int *local_6c;
  undefined4 local_68;
  uint *local_5c;
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  undefined1 local_2c [8];
  int *local_24;
  undefined **local_1c [2];
  undefined1 local_14 [8];
  int *local_c;
  
  __InitExceptBlockLDTC(0x5169d4);
  if (*(char *)(*param_2 + 0x30) == '\0') {
    local_40 = 8;
    std::string::string_from_cstr(param_1,(uint *)&DAT_00516775);
    *in_FS_OFFSET = local_50;
    return param_1;
  }
  iVar4 = *param_2;
  if ((*(int *)(*(int *)(iVar4 + 0x28) + -4) != 0) ||
     (uVar3 = FUN_004dbc60(iVar4 + 0x20,(int *)(iVar4 + 8)), (char)uVar3 != '\0'))
  goto LAB_004db6d2;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 1;
  puVar6 = &LAB_004db328;
  uVar3 = 0;
  local_40 = 0x20;
  local_5c = (uint *)FUN_004dc320(local_1b4,PTR_s_Error_constructing_locale_name_005165d4);
  std::string::string_from_cstr((int)local_2c,local_5c);
  local_34 = local_34 + 2;
  local_1c[0] = &std::runtime_error::vftable;
  local_68 = 0;
  local_c = (int *)0x0;
  local_40 = 0x2c;
  if (local_24[-3] == -1 || local_24[-3] + 1 < 0) {
    uVar1 = local_24[-1];
    local_7c = std::string::__getRep(local_14,uVar1,uVar1);
    local_80 = local_14;
    local_8c = local_7c + 3;
    local_88 = local_24;
    local_84 = uVar1;
    local_78 = local_8c;
    local_c = local_8c;
    memcpy(local_8c,local_24,uVar1);
  }
  else {
    local_70 = local_14;
    local_6c = local_24;
    local_c = local_24;
    local_74 = local_24 + -3;
    if (local_74 != &DAT_00513d58) {
      *local_74 = *local_74 + 1;
    }
  }
  local_40 = 0x20;
  local_34 = local_34 + 1;
  if (local_24 != (int *)0x0) {
    if (local_24[-3] != -1) {
      piVar5 = local_24 + -3;
      if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_004db6bb;
    }
    local_90 = local_24 + -3;
    local_94 = local_24 + -3;
    operator_delete();
    local_98 = 0;
    local_9c = local_2c;
    local_24 = (int *)0x0;
  }
LAB_004db6bb:
  local_40 = 0x14;
  FUN_004e7cc4((uint *)&DAT_004db2c4,(undefined4*)local_1c,uVar3,puVar6,uVar7,uVar8,uVar9,uVar10);
LAB_004db6d2:
  local_40 = 0x50;
  iVar4 = *param_2;
  local_a0 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  iVar2 = *(int *)(*(int *)(iVar4 + 0x28) + -0xc);
  if (iVar2 == -1 || iVar2 + 1 < 0) {
    uVar7 = *(uint *)(*(int *)(iVar4 + 0x28) + -4);
    local_b4 = std::string::__getRep(param_1,uVar7,uVar7);
    local_b0 = local_b4 + 3;
    *(int **)(param_1 + 8) = local_b0;
    local_b8 = param_1;
    local_c0 = *(undefined4 **)(iVar4 + 0x28);
    local_c4 = *(undefined4 **)(param_1 + 8);
    local_bc = uVar7;
    memcpy(local_c4,local_c0,uVar7);
  }
  else {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar4 + 0x28);
    piVar5 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar5 != &DAT_00513d58) {
      *piVar5 = *piVar5 + 1;
    }
  }
  *in_FS_OFFSET = local_50;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004db7f8  FUN_004db7f8   (415 bytes)   [unnamed]
int * __cdecl FUN_004db7f8(int *param_1,uint *param_2,char param_3,uint param_4,undefined *param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  int *piVar4;
  uint *puVar5;
  undefined4 local_3c [2];
  undefined4 local_34;
  undefined2 local_24;
  int local_18;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  __InitExceptBlockLDTC(0x516a5c);
  piVar3 = (int *)0x0;
  if ((*(uint *)(*param_1 + 0x1c) & param_4) == 0) {
    puVar2 = DAT_0051bc00;
    if ((*(uint *)(*param_1 + 0x18) & param_4) != 0) {
      puVar2 = DAT_0051bc04;
    }
  }
  else {
    puVar2 = (undefined4 *)0x0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *param_2;
    if ((uint)puVar2[5] <= uVar1) {
      FUN_004d2c54(puVar2 + 4,uVar1 + 1,0);
    }
    piVar3 = *(int **)(puVar2[4] + uVar1 * 4);
  }
  if (piVar3 == (int *)0x0) {
    if (param_3 == '\0') {
      FUN_004e7cc4((uint *)&DAT_004a9aac,local_3c,0,(undefined *)0x0,0,0,0,0);
    }
    if (puVar2 != (undefined4 *)0x0) {
      uVar1 = *param_2;
      if ((uint)puVar2[5] <= uVar1) {
        FUN_004d2c54(puVar2 + 4,uVar1 + 1,0);
      }
      piVar3 = *(int **)(puVar2[4] + uVar1 * 4);
    }
    if (piVar3 == (int *)0x0) {
      if ((*(uint *)(*param_1 + 0x1c) & param_4) != 0) {
        FUN_004dae04(*param_1,param_4);
      }
      piVar3 = (int *)(*(code *)param_5)();
      if ((puVar2 != (undefined4 *)0x0) && (puVar2 != (undefined4 *)*param_1)) {
        local_24 = 8;
        piVar4 = piVar3;
        puVar5 = param_2;
        local_8 = puVar2;
        if (DAT_0051bc08 == 0) {
          FUN_004daff8();
        }
        local_8[1] = local_8[1] + 1;
        local_18 = local_18 + 1;
        FUN_004db998((int *)&local_8,piVar4,puVar5);
        local_18 = local_18 + -1;
        local_8[1] = local_8[1] + -1;
        if ((local_8[1] == 0) && (local_10 = local_8, local_8 != (undefined4 *)0x0)) {
          local_c = *local_8;
          local_24 = 0x20;
          (**(code **)*local_8)();
          local_24 = 0x14;
        }
      }
    }
  }
  FUN_004db998(param_1,piVar3,param_2);
  *in_FS_OFFSET = local_34;
  return piVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004db998  FUN_004db998   (192 bytes)   [unnamed]
void __cdecl FUN_004db998(int *param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  uint *puVar4;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x516a98);
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    puVar4 = param_3;
    uVar3 = FUN_004dab3c((int *)param_3);
    (**(code **)(*param_2 + 4))(uVar3,*param_2,puVar4,param_2,param_1);
    param_2[2] = param_2[2] | 1;
  }
  uVar1 = *param_3;
  if (*(uint *)(*param_1 + 0x14) <= uVar1) {
    FUN_004d2c54((int *)(*param_1 + 0x10),uVar1 + 1,0);
  }
  puVar2 = *(undefined4 **)(*(int *)(*param_1 + 0x10) + uVar1 * 4);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = puVar2[1] + -1;
    if ((puVar2[1] == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)();
    }
  }
  *(int **)(*(int *)(*param_1 + 0x10) + uVar1 * 4) = param_2;
  param_2[1] = param_2[1] + 1;
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dba58  FUN_004dba58   (98 bytes)   [unnamed]
void __cdecl FUN_004dba58(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x516ad0);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_005158a0;
    __rwstd::ref_counted::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dbabc  FUN_004dbabc   (26 bytes)   [unnamed]
undefined4 __cdecl FUN_004dbabc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  *param_8 = param_6;
  *param_5 = param_3;
  return 3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dbad8  FUN_004dbad8   (26 bytes)   [unnamed]
undefined4 __cdecl FUN_004dbad8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  *param_8 = param_6;
  *param_5 = param_3;
  return 3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dbaf4  FUN_004dbaf4   (10 bytes)   [unnamed]
undefined4 __stdcall FUN_004dbaf4(void)

{
  return 3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dbb00  FUN_004dbb00   (7 bytes)   [unnamed]
undefined1 __stdcall FUN_004dbb00(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dbb08  FUN_004dbb08   (10 bytes)   [unnamed]
undefined4 __stdcall FUN_004dbb08(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dbb14  FUN_004dbb14   (20 bytes)   [unnamed]
uint __cdecl FUN_004dbb14(undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  
  uVar1 = param_4 - param_3;
  if (param_5 <= (uint)(param_4 - param_3)) {
    uVar1 = param_5;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dbb28  FUN_004dbb28   (10 bytes)   [unnamed]
undefined4 __stdcall FUN_004dbb28(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dbb34  FUN_004dbb34   (172 bytes)   [unnamed]
int __cdecl FUN_004dbb34(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x516aec);
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x29) = 1;
  *(int *)(param_1 + 0x2c) = param_1 + 0x38;
  *(int *)(param_1 + 0x30) = param_1 + 0x38;
  uVar1 = *(uint *)(param_1 + 0xc) & 0x4a;
  if (uVar1 == 8) {
    *(undefined4 *)(param_1 + 0x18) = 0x10;
  }
  else if (uVar1 == 0x40) {
    *(undefined4 *)(param_1 + 0x18) = 8;
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 10;
  }
  uVar1 = *(uint *)(param_1 + 0xc) & 0xb0;
  if (uVar1 == 0x20) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else if (uVar1 == 0x10) {
    *(undefined4 *)(param_1 + 0x24) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x24) = 2;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dbc60  FUN_004dbc60   (324 bytes)   [unnamed]
undefined4 __cdecl FUN_004dbc60(int param_1,int *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  uint *local_c;
  
  __InitExceptBlockLDTC(0x516b84);
  puVar1 = (uint *)FUN_004e3578(0xff,(uint *)0x0);
  std::string::string_from_cstr((int)local_14,puVar1);
  FUN_004e3578(1,*(uint **)(*param_2 + 8));
  FUN_004e3578(2,*(uint **)(*param_2 + 0x18));
  FUN_004e3578(4,*(uint **)(*param_2 + 0x28));
  FUN_004e3578(0x10,*(uint **)(*param_2 + 0x38));
  FUN_004e3578(0x20,*(uint **)(*param_2 + 0x48));
  puVar1 = (uint *)FUN_004e3578(0xff,(uint *)0x0);
  FUN_004cf41c(param_1,puVar1);
  uVar2 = FUN_004e3578(0xff,local_c);
  uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      local_c = local_c + -3;
      if (local_c == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (local_c == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *local_c = *local_c - 1;
        iVar3 = *local_c + 1;
      }
      if (iVar3 != 0) goto LAB_004dbd92;
    }
    operator_delete();
  }
LAB_004dbd92:
  *in_FS_OFFSET = local_38;
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dbda4  FUN_004dbda4   (38 bytes)   [unnamed]
void __cdecl FUN_004dbda4(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined1 **)(param_1 + 0x2c);
  iVar2 = FUN_004e0344(puVar1,&DAT_00516b51);
  *(undefined1 **)(param_1 + 0x30) = puVar1 + iVar2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dbdcc  FUN_004dbdcc   (120 bytes)   [unnamed]
void __cdecl FUN_004dbdcc(int param_1,undefined1 *param_2,char *param_3,char param_4)

{
  char *pcVar1;
  char cVar2;
  
  *param_2 = 0x25;
  pcVar1 = param_2 + 1;
  if ((*(byte *)(param_1 + 0xd) & 8) != 0) {
    *pcVar1 = '+';
    pcVar1 = param_2 + 2;
  }
  if ((*(byte *)(param_1 + 0xd) & 2) != 0) {
    *pcVar1 = '#';
    pcVar1 = pcVar1 + 1;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    *pcVar1 = '.';
    pcVar1[1] = '*';
    pcVar1 = pcVar1 + 2;
  }
  for (; *param_3 != '\0'; param_3 = param_3 + 1) {
    *pcVar1 = *param_3;
    pcVar1 = pcVar1 + 1;
  }
  if (*(int *)(param_1 + 0x18) == 8) {
    *pcVar1 = 'o';
  }
  else if (*(int *)(param_1 + 0x18) == 0x10) {
    if ((*(byte *)(param_1 + 0xd) & 0x40) == 0) {
      cVar2 = 'x';
    }
    else {
      cVar2 = 'X';
    }
    *pcVar1 = cVar2;
  }
  else {
    if (param_4 == '\0') {
      cVar2 = 'u';
    }
    else {
      cVar2 = 'd';
    }
    *pcVar1 = cVar2;
  }
  pcVar1[1] = '\0';
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dbe44  FUN_004dbe44   (98 bytes)   [unnamed]
void __cdecl FUN_004dbe44(int param_1)

{
  int iVar1;
  byte local_14 [16];
  
  FUN_004dbdcc(param_1,local_14,&DAT_00516b54,'\0');
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = FUN_004e0344(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  else {
    iVar1 = FUN_004e0344(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  *(int *)(param_1 + 0x30) = iVar1 + *(int *)(param_1 + 0x2c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dbea8  FUN_004dbea8   (98 bytes)   [unnamed]
void __cdecl FUN_004dbea8(int param_1)

{
  int iVar1;
  byte local_14 [16];
  
  FUN_004dbdcc(param_1,local_14,&DAT_00516b56,'\x01');
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = FUN_004e0344(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  else {
    iVar1 = FUN_004e0344(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  *(int *)(param_1 + 0x30) = iVar1 + *(int *)(param_1 + 0x2c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dbf0c  FUN_004dbf0c   (92 bytes)   [unnamed]
void __cdecl FUN_004dbf0c(int param_1)

{
  int iVar1;
  byte local_14 [16];
  
  FUN_004dbdcc(param_1,local_14,&DAT_00516b58,'\0');
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = FUN_004e0344(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  else {
    iVar1 = FUN_004e0344(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  *(int *)(param_1 + 0x30) = iVar1 + *(int *)(param_1 + 0x2c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dbf68  FUN_004dbf68   (92 bytes)   [unnamed]
void __cdecl FUN_004dbf68(int param_1)

{
  int iVar1;
  byte local_14 [16];
  
  FUN_004dbdcc(param_1,local_14,&DAT_00516b59,'\x01');
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = FUN_004e0344(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  else {
    iVar1 = FUN_004e0344(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  *(int *)(param_1 + 0x30) = iVar1 + *(int *)(param_1 + 0x2c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dbfc4  FUN_004dbfc4   (92 bytes)   [unnamed]
void __cdecl FUN_004dbfc4(int param_1)

{
  int iVar1;
  byte local_14 [16];
  
  FUN_004dbdcc(param_1,local_14,&DAT_00516b5a,'\0');
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = FUN_004e0344(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  else {
    iVar1 = FUN_004e0344(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  *(int *)(param_1 + 0x30) = iVar1 + *(int *)(param_1 + 0x2c);
  return;
}

} // namespace tea
