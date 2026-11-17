// TEA.exe — application module "PrintoutFeeder"
// 6 functions, 0x00402f80..0x00404870. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00402f80  PrintoutFeeder::~PrintoutFeeder   (32 bytes)   [rtti:dtor destructor]
//   written in code as PrintoutFeeder::_dtor
void __cdecl PrintoutFeeder::_dtor(undefined4 *param_1,byte param_2)

{
  if ((param_1 != (undefined4 *)0x0) && (*param_1 = &PrintoutFeeder::vftable, (param_2 & 1) != 0)) {
    operator_delete();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00402fa0  FUN_00402fa0   (312 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00403078) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd4 : 0x00403080 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
undefined4 * __cdecl FUN_00402fa0(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined4 param_4, undefined4 *param_5,undefined4 param_6,undefined4 *param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  undefined4 local_28;
  
  bVar4 = 0;
  __InitExceptBlockLDTC(0x4ea970);
  FUN_004c6484(param_1,param_2);
  *param_1 = &PrintPreviewPrintout::vftable;
  *param_1 = &TEAPrintout::vftable;
  param_1[6] = param_3;
  puVar2 = param_5;
  puVar3 = param_1 + 7;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  puVar2 = param_1 + 0x17;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_5;
    param_5 = param_5 + (uint)bVar4 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
  }
  param_1[0x27] = param_6;
  puVar2 = param_1 + 0x28;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_7;
    param_7 = param_7 + (uint)bVar4 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
  }
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = param_4;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x36] = 0;
  param_1[0x30] = 0x80;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 1;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404760  PrintoutFeeder::vf6   (8 bytes)   [rtti:vtable virtual slot 6; function defined from vtable-slot]
/* WARNING: Instruction at (ram,0x004047f5) overlaps instruction at (ram,0x004047f4)
    */
/* WARNING: Removing unreachable block (ram,0x00404779) */
/* WARNING: Removing unreachable block (ram,0x0040477b) */
/* WARNING: Removing unreachable block (ram,0x0040477e) */
/* WARNING: Removing unreachable block (ram,0x004047f4) */
/* WARNING: Removing unreachable block (ram,0x00404780) */
/* WARNING: Removing unreachable block (ram,0x0040478f) */
/* WARNING: Removing unreachable block (ram,0x004047b0) */
/* WARNING: Removing unreachable block (ram,0x004047b7) */
char * PrintoutFeeder::vf6(char *param_1,undefined4 param_2,byte param_3)

{
  byte *pbVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined2 extraout_DX;
  char *pcVar5;
  int unaff_EBX;
  int unaff_EBP;
  undefined1 *unaff_ESI;
  undefined1 *puVar6;
  int unaff_EDI;
  char *pcVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  byte bVar11;
  char cVar12;
  
  bVar11 = 0;
  *param_1 = *param_1 + (char)param_1;
  pbVar1 = (byte *)((int)param_1 * 2);
  bVar8 = CARRY1(*pbVar1,param_3);
  cVar12 = SCARRY1(*pbVar1,param_3);
  *pbVar1 = *pbVar1 + param_3;
  cVar10 = (char)*pbVar1 < '\0';
  bVar9 = *pbVar1 == 0;
  func_0x504087b1();
  if (bVar8) {
    unaff_EBX = unaff_EBX + -1;
code_r0x004047db:
    puVar6 = unaff_ESI + -1;
  }
  else {
    puVar6 = unaff_ESI + (uint)bVar11 * -2 + 1;
    out(*unaff_ESI,extraout_DX);
    if (bVar9) {
      unaff_EBX = *(int *)(unaff_EBP + 8);
      puVar6 = *(undefined1 **)(unaff_EBP + 0xc);
      unaff_EDI = *(int *)(unaff_EBP + 0x10);
    }
    else {
      unaff_ESI = puVar6;
      if (cVar12 == cVar10) goto code_r0x004047db;
    }
    if (*(int *)(unaff_EBX + 4) == *(int *)(puVar6 + 4)) {
      *(undefined4 *)(unaff_EBX + 4) = *(undefined4 *)(unaff_EDI + 4);
    }
    if (*(int *)(unaff_EBX + 0x14) != *(int *)(puVar6 + 0x14)) goto LAB_004047e7;
  }
  *(undefined4 *)(unaff_EBX + 0x14) = *(undefined4 *)(unaff_EDI + 0x14);
LAB_004047e7:
  if (*(char *)(unaff_EBX + 0x18) == puVar6[0x18]) {
    *(undefined1 *)(unaff_EBX + 0x18) = *(undefined1 *)(unaff_EDI + 0x18);
  }
  if (*(char *)(unaff_EBX + 0x19) == puVar6[0x19]) {
    *(undefined1 *)(unaff_EBX + 0x19) = *(undefined1 *)(unaff_EDI + 0x19);
  }
  if (*(char *)(unaff_EBX + 0x1a) == puVar6[0x1a]) {
    *(undefined1 *)(unaff_EBX + 0x1a) = *(undefined1 *)(unaff_EDI + 0x1a);
  }
  if (*(char *)(unaff_EBX + 0x1b) == puVar6[0x1b]) {
    *(undefined1 *)(unaff_EBX + 0x1b) = *(undefined1 *)(unaff_EDI + 0x1b);
  }
  pcVar2 = (char *)(unaff_EBX + 0x20);
  pcVar5 = puVar6 + 0x20;
  do {
    if (*pcVar2 != *pcVar5) {
      return pcVar2;
    }
    bVar8 = true;
    if (*pcVar2 == '\0') break;
    pcVar7 = pcVar2 + 1;
    if (*pcVar7 != pcVar5[1]) {
      return pcVar2;
    }
    pcVar2 = pcVar2 + 2;
    pcVar5 = pcVar5 + 2;
    bVar8 = *pcVar7 == '\0';
  } while (!bVar8);
  if (bVar8) {
    pcVar2 = (char *)(unaff_EBX + 0x20);
    uVar3 = 0xffffffff;
    pcVar5 = (char *)(unaff_EDI + 0x20);
    do {
      pcVar7 = pcVar5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar5 + (uint)bVar11 * -2 + 1;
      cVar10 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar10 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar7 + -uVar3;
    pcVar7 = pcVar2;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + (uint)bVar11 * -8 + 4;
      pcVar7 = pcVar7 + (uint)bVar11 * -8 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar11 * -2 + 1;
      pcVar7 = pcVar7 + (uint)bVar11 * -2 + 1;
    }
  }
  return pcVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404784  std::vector<TEAPrintout::PageInfo>::~vector   (54 bytes)   [rtti:dtor destructor]
//   written in code as std::vector_TEAPrintout_PageInfo::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::vector_TEAPrintout_PageInfo::_dtor(int param_1,byte param_2)

{
  if (param_1 != 0) {
    FUN_0040317c(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004047bc  FUN_004047bc   (179 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
char * __cdecl FUN_004047bc(int param_1,int param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  
  if (*(int *)(param_1 + 4) == *(int *)(param_2 + 4)) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 4);
  }
  if (*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14)) {
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_3 + 0x14);
  }
  if (*(char *)(param_1 + 0x18) == *(char *)(param_2 + 0x18)) {
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_3 + 0x18);
  }
  if (*(char *)(param_1 + 0x19) == *(char *)(param_2 + 0x19)) {
    *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_3 + 0x19);
  }
  if (*(char *)(param_1 + 0x1a) == *(char *)(param_2 + 0x1a)) {
    *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_3 + 0x1a);
  }
  if (*(char *)(param_1 + 0x1b) == *(char *)(param_2 + 0x1b)) {
    *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_3 + 0x1b);
  }
  pcVar2 = (char *)(param_1 + 0x20);
  pcVar5 = (char *)(param_2 + 0x20);
  do {
    if (*pcVar2 != *pcVar5) {
      return pcVar2;
    }
    bVar7 = true;
    if (*pcVar2 == '\0') break;
    pcVar6 = pcVar2 + 1;
    if (*pcVar6 != pcVar5[1]) {
      return pcVar2;
    }
    pcVar2 = pcVar2 + 2;
    pcVar5 = pcVar5 + 2;
    bVar7 = *pcVar6 == '\0';
  } while (!bVar7);
  if (bVar7) {
    pcVar2 = (char *)(param_1 + 0x20);
    uVar3 = 0xffffffff;
    pcVar5 = (char *)(param_3 + 0x20);
    do {
      pcVar6 = pcVar5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar6 + -uVar3;
    pcVar6 = pcVar2;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  return pcVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404870  FUN_00404870   (1768 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_00404870(int *param_1,int param_2,undefined4 *param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  DWORD DVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4eaea4);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x81c);
    param_1[0x81c] = (int)(param_1 + 0x819);
    param_1[0x81d] = (int)(param_1 + 0x81a);
    param_1[1] = (int)(param_1 + 0x819);
    param_1[2] = (int)(param_1 + 0x81a);
    param_1[0x818] = 0;
    param_1[0x81b] = 0;
    param_1[0x819] = (int)&OWL::TEventHandler::vftable;
    param_1[0x81a] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x81c,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -8000;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -8000;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  FUN_00467d88(param_1,1,0x4eadec,5,5,0x4eae54,uVar1,param_4,(uint *)0x10d6,1);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 8000;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 8000;
  param_1[3] = (int)&TEAPropertiesViewWindows::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004eb2c8;
  *(undefined ***)param_1[2] = &PTR_LAB_004eb2d4;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004eb2e0;
  FUN_0041af38(param_1 + 0x48,0,param_1,0x10e0,0);
  FUN_0041af38(param_1 + 0x77,0,param_1,0x10ea,0);
  FUN_00418398(param_1 + 0xa6,0,param_1,0x2a4e);
  FUN_00418398(param_1 + 0xd8,0,param_1,0x3a20);
  FUN_00417e40(param_1 + 0x10a,0,param_1,0x1a36,0);
  FUN_00417e40(param_1 + 0x13e,0,param_1,0x1a2c,0);
  FUN_00417e40(param_1 + 0x172,0,param_1,0x1a40,0);
  FUN_004179f0(param_1 + 0x1a6,0,param_1,0x8d4);
  FUN_0041c258(param_1 + 0x1d8,0,param_1,0x8de,0);
  FUN_004c7a28(param_1 + 0x206,0,*param_1,0x314c,0,0);
  FUN_004187a4(param_1 + 0x232,0,param_1,0x312e,param_1[0x206]);
  FUN_004c7a28(param_1 + 0x263,0,*param_1,0x12ca,0,0);
  FUN_00419138(param_1 + 0x290,0,param_1,0x12b6,param_1[0x263],DAT_004ead2c,0x4eae5c);
  FUN_004c7a28(param_1 + 0x2d8,0,*param_1,0x12c0,0,0);
  FUN_00419138(param_1 + 0x304,0,param_1,0x12ac,param_1[0x2d8],DAT_004ead2c,0x4eae64);
  FUN_004c7a28(param_1 + 0x34c,0,*param_1,0x323c,0,0);
  FUN_00419138(param_1 + 0x378,0,param_1,0x3232,param_1[0x34c],DAT_004ead2c,0x4eae6c);
  FUN_004c7a28(param_1 + 0x3c0,0,*param_1,0x164e,0,0);
  FUN_00419138(param_1 + 0x3ec,0,param_1,0x1644,param_1[0x3c0],DAT_004ead2c,0x4eae64);
  FUN_004c7a28(param_1 + 0x434,0,*param_1,0x3142,0,0);
  FUN_00419138(param_1 + 0x460,0,param_1,0x3124,param_1[0x434],DAT_004ead2c,0x4eae71);
  FUN_004c7a28(param_1 + 0x4a8,0,*param_1,0x3156,0,0);
  FUN_00419138(param_1 + 0x4d4,0,param_1,0x3138,param_1[0x4a8],DAT_004ead2c,0x4eae71);
  FUN_00418398(param_1 + 0x51c,0,param_1,0x361a);
  FUN_00418398(param_1 + 0x54e,0,param_1,0x1694);
  FUN_00417e40(param_1 + 0x580,0,param_1,0x3426,0);
  FUN_00417e40(param_1 + 0x5b4,0,param_1,0x3430,0);
  FUN_00418398(param_1 + 0x5e8,0,param_1,0x369c);
  FUN_00417e40(param_1 + 0x61a,0,param_1,0x36a6,0);
  FUN_00417e40(param_1 + 0x64e,0,param_1,0x36a7,0);
  FUN_00417e40(param_1 + 0x682,0,param_1,0x36a8,0);
  FUN_00418398(param_1 + 0x6b6,0,param_1,0x36ba);
  FUN_00418398(param_1 + 0x6e8,0,param_1,0x36c4);
  FUN_00418398(param_1 + 0x71a,0,param_1,0x2f26);
  FUN_00418398(param_1 + 0x74c,0,param_1,0x2f27);
  FUN_00418398(param_1 + 0x77e,0,param_1,0x2f28);
  FUN_00418398(param_1 + 0x7b0,0,param_1,0x2f29);
  DVar2 = GetSysColor(5);
  param_1[0x7e2] = DVar2;
  param_1[0x7e3] = (int)param_3;
  param_1[0x7e4] = param_5;
  FUN_004179f0(param_1 + 0x7e6,0,param_1,0x10f4);
  *in_FS_OFFSET = local_28;
  return param_1;
}

} // namespace tea
