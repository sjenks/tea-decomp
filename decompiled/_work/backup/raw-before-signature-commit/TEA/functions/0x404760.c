// name: FUN_00404760
// address: 0x404760
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

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

char * FUN_00404760(char *param_1,undefined4 param_2,byte param_3)

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

