// TEA.exe — application module "PrintoutFeeder"
// 3 functions, 0x00402f80..0x00404784. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00402f80  PrintoutFeeder::~PrintoutFeeder   (32 bytes)   [rtti:dtor destructor]
//   written in code as PrintoutFeeder::_dtor
void __cdecl PrintoutFeeder::_dtor(undefined4 *self,byte dtorFlags)

{
  if ((self != (undefined4 *)0x0) && (*self = &PrintoutFeeder::vftable, (dtorFlags & 1) != 0)) {
    operator_delete();
  }
  return;
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
char * PrintoutFeeder::vf6(char *self,undefined4 param_2,byte param_3)

{
  byte *pbVar1;
  char *pcVar2;
  uint uVar3;
  uint i;
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
  *self = *self + (char)self;
  pbVar1 = (byte *)((int)self * 2);
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
    for (i = uVar3 >> 2; i != 0; i = i - 1) {
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
void __cdecl std::vector_TEAPrintout_PageInfo::_dtor(int self,byte dtorFlags)

{
  if (self != 0) {
    std::_Destroy_range_PageInfo(self,*(int *)(self + 4),*(int *)(self + 8));
    operator_delete();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
