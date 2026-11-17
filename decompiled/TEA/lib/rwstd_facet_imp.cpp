// TEA.exe — runtime / library code "rwstd_facet_imp"
// 1 functions, 0x004d8410..0x004d8410. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004d8410  __rwstd::facet_imp::vf2   (48 bytes)   [rtti:vtable virtual slot 2; function defined from vtable-slot]
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004d88ef) overlaps instruction at (ram,0x004d88ee)
    */
/* WARNING: Removing unreachable block (ram,0x004d887a) */
/* WARNING: Removing unreachable block (ram,0x004d857e) */
/* WARNING: Removing unreachable block (ram,0x004d85f9) */
/* WARNING: Removing unreachable block (ram,0x004d8585) */
/* WARNING: Removing unreachable block (ram,0x004d85f0) */
/* WARNING: Removing unreachable block (ram,0x004d8587) */
/* WARNING: Removing unreachable block (ram,0x004d858c) */
/* WARNING: Removing unreachable block (ram,0x004d85fa) */
/* WARNING: Removing unreachable block (ram,0x004d8596) */
/* WARNING: Removing unreachable block (ram,0x004d85fc) */
/* WARNING: Removing unreachable block (ram,0x004d859d) */
/* WARNING: Removing unreachable block (ram,0x004d859f) */
/* WARNING: Removing unreachable block (ram,0x004d85ad) */
/* WARNING: Removing unreachable block (ram,0x004d8611) */
/* WARNING: Removing unreachable block (ram,0x004d862d) */
/* WARNING: Removing unreachable block (ram,0x004d862f) */
/* WARNING: Removing unreachable block (ram,0x004d869f) */
/* WARNING: Removing unreachable block (ram,0x004d863a) */
/* WARNING: Removing unreachable block (ram,0x004d86a6) */
/* WARNING: Removing unreachable block (ram,0x004d8642) */
/* WARNING: Removing unreachable block (ram,0x004d8659) */
/* WARNING: Removing unreachable block (ram,0x004d86bd) */
/* WARNING: Removing unreachable block (ram,0x004d86a0) */
/* WARNING: Removing unreachable block (ram,0x004d86a9) */
/* WARNING: Removing unreachable block (ram,0x004d86ca) */
/* WARNING: Removing unreachable block (ram,0x004d874d) */
/* WARNING: Removing unreachable block (ram,0x004d8754) */
/* WARNING: Removing unreachable block (ram,0x004d86e1) */
/* WARNING: Removing unreachable block (ram,0x004d84c9) */
/* WARNING: Removing unreachable block (ram,0x004d84ce) */
/* WARNING: Removing unreachable block (ram,0x004d85bd) */
/* WARNING: Removing unreachable block (ram,0x004d84fa) */
/* WARNING: Removing unreachable block (ram,0x004d84fc) */
/* WARNING: Removing unreachable block (ram,0x004d856f) */
/* WARNING: Removing unreachable block (ram,0x004d85f1) */
void __rwstd::facet_imp::vf2(int *param_1,undefined4 param_2,byte *param_3,byte *param_4,int param_5, undefined4 param_6,byte *param_7,byte *param_8,byte *param_9,byte *param_10, byte *param_11,int param_12,undefined4 param_13,byte *param_14,byte *param_15, byte *param_16,byte *param_17,byte *param_18,byte *param_19,byte *param_20, byte *param_21,byte *param_22,byte *param_23,byte *param_24,byte *param_25, byte *param_26)

{
  ushort *puVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  short sVar6;
  uint uVar7;
  byte *pbVar8;
  byte bVar9;
  undefined1 uVar10;
  char cVar11;
  byte bVar12;
  char cVar13;
  byte bVar18;
  byte *pbVar14;
  undefined3 uVar19;
  byte *pbVar16;
  int *piVar17;
  byte *pbVar20;
  undefined2 uVar21;
  byte *pbVar22;
  byte *unaff_EBX;
  byte *pbVar23;
  ushort uVar24;
  int unaff_EBP;
  byte *pbVar25;
  byte *pbVar26;
  undefined1 *unaff_ESI;
  byte *pbVar27;
  byte *pbVar28;
  byte *unaff_EDI;
  undefined2 in_ES;
  undefined2 in_SS;
  undefined2 in_DS;
  int in_FS_OFFSET;
  int in_GS_OFFSET;
  char in_CF;
  bool bVar29;
  bool bVar30;
  byte *in_stack_00000000;
  undefined4 in_stack_00000060;
  char *pcVar15;
  
  pbVar27 = param_10;
  *(char *)param_1 = ((char)*param_1 - (char)param_1) - in_CF;
  *(char *)param_1 = (char)*param_1 + (char)param_1;
  pbVar14 = (byte *)((int)param_1 + *param_1);
  bVar12 = (byte)pbVar14;
  *pbVar14 = *pbVar14 ^ bVar12;
  *pbVar14 = *pbVar14 + bVar12;
  *pbVar14 = *pbVar14 + bVar12;
  *pbVar14 = *pbVar14 + bVar12;
  *(char *)((int)in_stack_00000000 * 2) =
       *(char *)((int)in_stack_00000000 * 2) + (char)((uint)param_2 >> 8);
  bVar9 = (byte)in_stack_00000000;
  *in_stack_00000000 = *in_stack_00000000 + bVar9;
  *in_stack_00000000 = *in_stack_00000000 + bVar9;
  *in_stack_00000000 = *in_stack_00000000 + bVar9;
  *in_stack_00000000 = *in_stack_00000000 + bVar9;
  *in_stack_00000000 = *in_stack_00000000 + bVar9;
  *(char *)((int)in_stack_00000000 * 2) = *(char *)((int)in_stack_00000000 * 2) + bVar9;
  *in_stack_00000000 = *in_stack_00000000 + bVar9;
  bVar12 = *in_stack_00000000;
  *in_stack_00000000 = *in_stack_00000000 + bVar9;
  pbVar14 = (byte *)0x1004d;
  if (CARRY1(bVar12,bVar9)) {
    puVar1 = (ushort *)(unaff_EDI + 100);
    sVar6 = ((ushort)unaff_EBP & 3) - (*puVar1 & 3);
    *puVar1 = *puVar1 + (ushort)(0 < sVar6) * sVar6;
    puVar1 = (ushort *)(unaff_ESI + in_GS_OFFSET + 0x74);
    sVar6 = ((ushort)unaff_ESI & 3) - (*puVar1 & 3);
    *puVar1 = *puVar1 + (ushort)(0 < sVar6) * sVar6;
    in_stack_00000000 = (byte *)0x732c7261;
    cVar13 = (char)((uint)unaff_EBX >> 8);
    if ((char)param_4 == 'c') {
      bVar30 = SBORROW1(cVar13,*(char *)(in_FS_OFFSET + 0x1004d));
      bVar29 = cVar13 == *(char *)(in_FS_OFFSET + 0x1004d);
      param_8 = (byte *)0x1004d;
      param_7 = unaff_EBX;
      param_5 = unaff_EBP;
      goto code_r0x004d84c1;
    }
    bVar29 = cVar13 != cRam0001004d;
    uVar4 = in(0x4d);
    *(undefined4 *)unaff_EDI = uVar4;
    unaff_ESI = (undefined1 *)0x632c7261;
    cVar13 = (char)param_10;
    cVar11 = (char)((uint)param_8 >> 8);
    if (bVar29) {
      *param_10 = *param_10 + cVar13;
      *param_7 = *param_7 + cVar13;
      *param_10 = *param_10 + cVar13;
      param_10[-0x77] = param_10[-0x77] + (char)((uint)param_10 >> 8);
      unaff_EBP = param_5 + -1;
      *param_10 = *param_10 + (char)param_8;
      *param_10 = *param_10 + cVar13;
      *param_7 = *param_7 + cVar13;
      *param_10 = *param_10 + cVar13;
      *param_10 = *param_10 + cVar13;
      *param_10 = *param_10 + cVar13;
      *param_10 = *param_10 + cVar13;
      *param_10 = *param_10 + cVar13;
      *param_10 = *param_10 + cVar13;
      *param_10 = *param_10 + cVar13;
      *param_10 = *param_10 + (char)param_8;
      *param_10 = *param_10 + cVar13;
      *param_7 = *param_7 + cVar13;
      *param_10 = *param_10 + cVar11;
      *param_10 = *param_10 + cVar13;
      *param_10 = *param_10 + cVar13;
      *param_11 = *param_11 + cVar11;
      *param_10 = *param_10 + cVar13;
      *(undefined2 *)param_10 = in_ES;
      *param_10 = *param_10 + cVar13;
      *param_10 = *param_10 + cVar13;
      *param_10 = *param_10 + cVar13;
      *param_10 = *param_10 + cVar13;
      *param_10 = *param_10 + cVar13;
      *param_10 = *param_10 + cVar13;
      *param_10 = *param_10 + cVar13;
      *param_10 = *param_10 + cVar13;
      uVar10 = in(0x20);
      param_4 = (byte *)CONCAT31((int3)((uint)param_10 >> 8),uVar10);
      param_3 = param_9;
      pbVar14 = param_8;
      unaff_EBX = param_7;
      unaff_EDI = param_11;
      goto code_r0x004d84b6;
    }
    if (cVar13 == 'c') {
      *param_10 = *param_10 + 99;
      *param_10 = *param_10 + 99;
      *param_10 = *param_10 + 99;
      *param_10 = *param_10 + 99;
code_r0x004d853d:
      param_10 = (byte *)0x732c7261;
      unaff_EDI = (byte *)0x732c7261;
      *pbVar27 = *pbVar27 + cVar13;
      param_7[0x74] = param_7[0x74] + cVar11;
      goto code_r0x004d8542;
    }
    param_10 = (byte *)0x732c7261;
    bVar12 = (byte)((uint)param_7 >> 8);
    bVar29 = bVar12 < param_8[in_FS_OFFSET];
    bVar30 = bVar12 == param_8[in_FS_OFFSET];
    out(uRam632c7261,(short)param_8);
    param_4 = pbVar27;
    pbVar14 = (byte *)0x632c7265;
    if (!bVar29) goto code_r0x004d854a;
    if (bVar29) goto code_r0x004d853d;
    uRam732c7261 = in((short)param_15);
    param_4 = param_17;
    param_9 = param_16;
    if ((char)param_17 != 'c') {
      bVar12 = *param_15;
      puVar1 = (ushort *)(param_17 + 0x61);
      sVar6 = ((ushort)param_12 & 3) - (*puVar1 & 3);
      *puVar1 = *puVar1 + (ushort)(0 < sVar6) * sVar6;
      if ((byte)((uint)param_14 >> 8) < bVar12) goto code_r0x004d8555;
      if (0 >= sVar6) {
        pbVar27 = (byte *)(*(int *)(param_22 + (int)param_19 * 2 + 0x3c) * 0x72616863);
        *pbVar27 = *pbVar27 & GH_PIECE(param_22, 1, undefined1);
        *pbVar27 = *pbVar27 & GH_PIECE(param_22, 1, undefined1);
        *param_25 = *param_25 + (char)param_25;
        goto code_r0x004d8508;
      }
      *param_17 = *param_17 + (char)param_17;
      *param_17 = *param_17 + (char)param_17;
      *param_17 = *param_17 + (char)param_17;
      *param_17 = *param_17 + (char)param_17;
      *param_17 = *param_17 + (char)param_17;
      *param_17 = *param_17 + (char)param_17;
      puVar5 = (undefined4 *)segment(in_SS,(short)&param_18);
      param_7 = (byte *)*puVar5;
      param_8 = param_15;
      goto code_r0x004d85f5;
    }
code_r0x004d8553:
    *param_4 = *param_4 + (char)param_4;
code_r0x004d8555:
    *param_4 = *param_4 + (char)param_4;
    *(char *)((int)param_4 * 2) = *(char *)((int)param_4 * 2) + (char)param_9;
    *param_4 = *param_4 + (char)param_4;
    pbVar27 = param_4 + *(int *)param_4;
    *pbVar27 = *pbVar27 & (byte)pbVar27;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x004d84b6:
  param_5 = unaff_EBP + -1;
  *param_3 = *param_3 + (char)param_4;
  param_4[0x64747300] = param_4[0x64747300] + (char)pbVar14;
  bVar12 = (byte)((uint)unaff_EBX >> 8);
  bVar30 = SBORROW1(bVar12,*pbVar14);
  bVar29 = bVar12 == *pbVar14;
  param_8 = pbVar14;
  param_7 = unaff_EBX;
code_r0x004d84c1:
  pbVar27 = unaff_ESI + 1;
  out(*unaff_ESI,(short)param_8);
  bVar12 = (byte)param_4;
  if (bVar29) {
    unaff_EDI = in_stack_00000000;
    if (!bVar30) {
      *param_4 = *param_4 + bVar12;
      param_25 = param_4;
      param_22 = param_7;
code_r0x004d8508:
      cVar13 = (char)param_25;
      *param_22 = *param_22 + cVar13;
      *param_25 = *param_25 + cVar13;
      *param_25 = *param_25 + cVar13;
      *param_25 = *param_25 + cVar13;
      *param_25 = *param_25 + cVar13;
      *param_25 = *param_25 + cVar13;
      *param_25 = *param_25 + cVar13;
      *param_25 = *param_25 + cVar13;
      *(char *)((int)param_25 * 2) = *(char *)((int)param_25 * 2) + cVar13;
      *param_25 = *param_25 + cVar13;
      pbVar27 = param_25 + *(int *)param_25;
      *pbVar27 = *pbVar27 & (byte)pbVar27;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *(char *)((int)param_4 * 2) = *(char *)((int)param_4 * 2) + (char)((uint)param_8 >> 8);
    *param_4 = *param_4 + bVar12;
    *param_4 = *param_4 + bVar12;
    *param_4 = *param_4 + bVar12;
    *param_4 = *param_4 + bVar12;
  }
  *param_4 = *param_4 + bVar12;
  bVar9 = *param_4;
  *param_4 = *param_4 + bVar12;
  bVar29 = false;
  param_9 = param_3;
  if (CARRY1(bVar9,bVar12)) {
code_r0x004d8542:
    bVar12 = (byte)((uint)param_7 >> 8);
    bVar29 = bVar12 < param_8[in_FS_OFFSET];
    bVar30 = bVar12 == param_8[in_FS_OFFSET];
    uVar4 = in((short)param_8);
    *(undefined4 *)unaff_EDI = uVar4;
    param_4 = param_17;
    param_9 = param_16;
    param_8 = param_15;
    param_7 = param_14;
    param_5 = param_12;
    pbVar14 = param_11;
code_r0x004d854a:
    if (!bVar30) {
      *param_4 = *param_4 + (char)param_4;
      *param_4 = *param_4 + (char)param_4;
      goto code_r0x004d8553;
    }
    unaff_EDI = param_10 + 1;
    bVar12 = in((short)param_8);
    *param_10 = bVar12;
    pbVar27 = pbVar14 + 4;
    out(*(undefined4 *)pbVar14,(short)param_8);
    puVar1 = (ushort *)(param_9 + 0x74);
    *puVar1 = *puVar1 + (ushort)(0 < (short)-(*puVar1 & 3)) * -(*puVar1 & 3);
  }
  pbVar14 = pbVar27 + 4;
  out(*(undefined4 *)pbVar27,(short)param_8);
  if (bVar29) {
code_r0x004d85f5:
    param_4[0x890] = param_4[0x890] + (char)param_8;
    *param_7 = *param_7 + (char)param_4;
    *param_4 = *param_4 + (char)((uint)param_8 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar1 = (ushort *)(param_4 + 0x61);
  sVar6 = ((ushort)param_5 & 3) - (*puVar1 & 3);
  *puVar1 = *puVar1 + (ushort)(0 < sVar6) * sVar6;
  bVar9 = (byte)((uint)param_7 >> 8);
  *pbVar14 = *pbVar14 & bVar9;
  cVar13 = (char)param_4;
  *param_4 = *param_4 + cVar13;
  *param_4 = *param_4 + cVar13;
  uVar19 = (undefined3)((uint)param_4 >> 8);
  cVar11 = cVar13 + -0x77;
  pcVar15 = (char *)CONCAT31(uVar19,cVar11);
  *pcVar15 = *pcVar15 + cVar11;
  *pcVar15 = *pcVar15 + cVar11;
  *param_7 = *param_7 + cVar11;
  *pcVar15 = *pcVar15 + cVar11;
  *pcVar15 = *pcVar15 + cVar11;
  *pcVar15 = *pcVar15 + cVar11;
  *pcVar15 = *pcVar15 + cVar11;
  *pcVar15 = *pcVar15 + cVar11;
  *pcVar15 = *pcVar15 + cVar11;
  *pcVar15 = *pcVar15 + cVar11;
  *pcVar15 = *pcVar15 + cVar11;
  bVar12 = cVar13 + 0x99;
  pbVar27 = (byte *)CONCAT31(uVar19,bVar12);
  (&GHIDRA_STACK(0x0000007c))[(int)param_7] = (&GHIDRA_STACK(0x0000007c))[(int)param_7] + (char)param_9;
  bVar30 = CARRY1(*pbVar27,bVar12);
  *pbVar27 = *pbVar27 + bVar12;
  bVar12 = *pbVar27;
  bVar29 = *pbVar27 == 0;
  pbVar26 = (byte *)(param_5 + -1);
  if (bVar30) {
    pbVar16 = pbVar27;
    pbVar20 = param_9;
    pbVar22 = param_8;
    pbVar23 = param_7;
    pbVar25 = (byte *)(param_5 + -1);
    pbVar28 = pbVar14;
    pbVar8 = unaff_EDI;
    if (bVar9 < param_8[in_FS_OFFSET]) {
      bVar9 = param_7[0x68];
      bVar18 = (byte)((uint)param_4 >> 8);
      bVar30 = bVar18 < bVar9;
      bVar12 = bVar18 - bVar9;
      bVar29 = bVar18 == bVar9;
      pbVar27 = param_25;
      param_9 = param_24;
      param_8 = param_23;
      param_7 = param_22;
      pbVar26 = param_20;
      pbVar14 = param_19;
      unaff_EDI = param_18;
      goto code_r0x004d865e;
    }
code_r0x004d8663:
    unaff_EDI = pbVar8;
    pbVar14 = (byte *)(*(int *)(pbVar23 + (int)pbVar28 * 2 + 0x3c) * 0x72616863);
    bVar30 = (byte)pbVar16 < 0x73;
    cVar13 = (byte)pbVar16 + 0x8d;
    pbVar27 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),cVar13);
    bVar29 = true;
    bVar12 = 0;
    param_9 = pbVar20;
    param_8 = pbVar22;
    param_7 = pbVar23;
    pbVar26 = pbVar25;
    if (cVar13 != '\0') {
      bVar9 = *pbVar22;
      uVar21 = SUB42(param_23,0);
      bVar12 = in(uVar21);
      *param_18 = bVar12;
      bVar12 = in(uVar21);
      param_18[1] = bVar12;
      out(*(undefined4 *)param_19,uVar21);
      puVar1 = (ushort *)(param_24 + 0x74);
      *puVar1 = *puVar1 + (ushort)(0 < (short)-(*puVar1 & 3)) * -(*puVar1 & 3);
      pbVar14 = param_19 + 8;
      out(*(undefined4 *)(param_19 + 4),uVar21);
      if (bVar9 <= (byte)((uint)pbVar23 >> 8)) {
        puVar1 = (ushort *)(param_25 + 0x61);
        sVar6 = ((ushort)param_20 & 3) - (*puVar1 & 3);
        *puVar1 = *puVar1 + (ushort)(0 < sVar6) * sVar6;
        *pbVar14 = *pbVar14 & GH_PIECE(param_22, 1, undefined1);
        *pbVar14 = *pbVar14 & GH_PIECE(param_22, 1, undefined1);
        *param_25 = *param_25 + (char)param_25;
        *param_25 = *param_25 + (char)param_25;
        *param_25 = *param_25 + (char)param_25;
        *param_25 = *param_25 + (char)param_25;
        *param_25 = *param_25 + (char)param_25;
        *param_25 = *param_25 + (char)param_25;
        *param_25 = *param_25 + (char)param_25;
        *param_25 = *param_25 + (byte)param_24;
        *param_25 = *param_25 + (char)param_25;
        *param_22 = *param_22 + (char)param_25;
        *param_25 = *param_25 + (char)((uint)param_23 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(byte **)param_25 = param_25 + *(int *)param_25;
      *param_25 = *param_25 + (char)param_25;
      pbVar27 = param_25;
      param_9 = param_24;
      param_8 = param_23;
      param_7 = param_22;
      pbVar26 = param_20;
      goto code_r0x004d86bf;
    }
code_r0x004d86d4:
    if (bVar30 || bVar29) {
      puVar1 = (ushort *)(param_9 + 0x6c);
      bVar29 = 0 < (short)-(*puVar1 & 3);
      *puVar1 = *puVar1 + (ushort)bVar29 * -(*puVar1 & 3);
      goto code_r0x004d873e;
    }
    puVar1 = (ushort *)(unaff_EDI + (int)pbVar26 * 2 + 0x72);
    sVar6 = ((ushort)pbVar14 & 3) - (*puVar1 & 3);
    *puVar1 = *puVar1 + (ushort)(0 < sVar6) * sVar6;
    bVar12 = (byte)pbVar27;
    pbVar16 = param_9;
    pbVar20 = param_18;
    if (0x5e < bVar12) {
      pbVar27 = param_26;
      pbVar16 = param_25;
      param_8 = param_24;
      param_7 = param_23;
      pbVar26 = param_21;
      pbVar14 = param_20;
      pbVar20 = param_19;
    }
    GH_PIECE(param_25, 3, undefined1) = (char)pbVar27;
    GH_PIECE(param_24, 0, undefined1) = (byte)((uint)param_8 >> 8);
    if (bVar12 != 0x5f) {
      param_7 = (byte *)CONCAT22((short)((uint)param_7 >> 0x10),
                                 CONCAT11((char)((uint)param_7 >> 8) - *pbVar14,(char)param_7));
      *pbVar27 = *pbVar27 + GH_PIECE(param_25, 3, undefined1);
      *pbVar27 = *pbVar27 + GH_PIECE(param_25, 3, undefined1);
      *pbVar27 = *pbVar27 + GH_PIECE(param_25, 3, undefined1);
      *pbVar27 = *pbVar27 + GH_PIECE(param_25, 3, undefined1);
      *pbVar27 = *pbVar27 + GH_PIECE(param_25, 3, undefined1);
      *pbVar27 = *pbVar27 + GH_PIECE(param_25, 3, undefined1);
      *pbVar27 = *pbVar27 + GH_PIECE(param_25, 3, undefined1);
      in_stack_00000060 = 0x3000000;
      *pbVar27 = *pbVar27 + (byte)param_24;
      *pbVar27 = *pbVar27 + GH_PIECE(param_25, 3, undefined1);
      *pbVar27 = *pbVar27 + GH_PIECE(param_25, 3, undefined1);
      *pbVar20 = *pbVar20 + (byte)param_24;
      *pbVar27 = *pbVar27 + GH_PIECE(param_25, 3, undefined1);
    }
    GH_PIECE(param_21, 3, undefined1) = (char)&param_26 + '\x03';
    GH_PIECE(param_22, 3, undefined1) = (char)param_7;
    *(char *)((int)pbVar27 * 2) = *(char *)((int)pbVar27 * 2) + GH_PIECE(param_22, 3, undefined1);
    *pbVar27 = *pbVar27 + GH_PIECE(param_25, 3, undefined1);
    *pbVar27 = *pbVar27 + GH_PIECE(param_25, 3, undefined1);
    *pbVar27 = *pbVar27 + GH_PIECE(param_25, 3, undefined1);
    *pbVar27 = *pbVar27 + GH_PIECE(param_25, 3, undefined1);
    *pbVar27 = *pbVar27 + GH_PIECE(param_25, 3, undefined1);
    bVar12 = (byte)pbVar16;
    *param_7 = *param_7 + bVar12;
    *pbVar27 = *pbVar27 + GH_PIECE(param_25, 3, undefined1);
    *param_7 = *param_7 + bVar12;
    *pbVar27 = *pbVar27 + GH_PIECE(param_25, 3, undefined1);
    *pbVar27 = *pbVar27 + GH_PIECE(param_22, 3, undefined1);
    GH_PIECE(param_24, 3, undefined1) = bVar12 & *pbVar26;
    param_9 = (byte *)CONCAT31((int3)((uint)pbVar16 >> 8),GH_PIECE(param_24, 3, undefined1));
    *(byte **)pbVar27 = pbVar27 + *(int *)pbVar27;
    GH_PIECE(param_26, 0, undefined1) = (char)((uint)pbVar27 >> 8);
    GH_PIECE(param_26, 1, undefined2) = (undefined2)((uint)pbVar27 >> 0x10);
    GH_PIECE(param_25, 0, undefined1) = (char)((uint)pbVar16 >> 8);
    GH_PIECE(param_25, 1, undefined2) = (undefined2)((uint)pbVar16 >> 0x10);
    GH_PIECE(param_23, 3, undefined1) = (char)param_8;
    GH_PIECE(param_24, 1, undefined2) = (undefined2)((uint)param_8 >> 0x10);
    GH_PIECE(param_23, 0, undefined1) = (byte)((uint)param_7 >> 8);
    GH_PIECE(param_23, 1, undefined2) = (undefined2)((uint)param_7 >> 0x10);
    GH_PIECE(param_22, 0, undefined1) = (undefined1)((uint)((int)&param_26 + 3) >> 8);
    GH_PIECE(param_22, 1, undefined1) = (byte)((uint)((int)&param_26 + 3) >> 0x10);
    GH_PIECE(param_22, 2, undefined1) = (undefined1)((uint)((int)&param_26 + 3) >> 0x18);
    GH_PIECE(param_20, 3, undefined1) = SUB41(pbVar26,0);
    GH_PIECE(param_21, 0, undefined1) = (undefined1)((uint)pbVar26 >> 8);
    GH_PIECE(param_21, 1, undefined1) = (undefined1)((uint)pbVar26 >> 0x10);
    GH_PIECE(param_21, 2, undefined1) = (undefined1)((uint)pbVar26 >> 0x18);
    GH_PIECE(param_19, 3, undefined1) = SUB41(pbVar14,0);
    GH_PIECE(param_20, 0, undefined1) = (undefined1)((uint)pbVar14 >> 8);
    GH_PIECE(param_20, 1, undefined1) = (undefined1)((uint)pbVar14 >> 0x10);
    GH_PIECE(param_20, 2, undefined1) = (undefined1)((uint)pbVar14 >> 0x18);
    GH_PIECE(param_18, 3, undefined1) = SUB41(pbVar20,0);
    GH_PIECE(param_19, 0, undefined1) = (undefined1)((uint)pbVar20 >> 8);
    GH_PIECE(param_19, 1, undefined1) = (undefined1)((uint)pbVar20 >> 0x10);
    GH_PIECE(param_19, 2, undefined1) = (undefined1)((uint)pbVar20 >> 0x18);
    param_7[0x74] = param_7[0x74] + (byte)param_24;
    bVar9 = param_8[in_FS_OFFSET];
    bVar12 = (byte)param_23 - bVar9;
    out(*pbVar14,(short)param_8);
    if ((byte)param_23 == bVar9) {
      if (SBORROW1((byte)param_23,bVar9)) goto code_r0x004d8817;
      out(pbVar14[1],(short)param_8);
      puVar1 = (ushort *)(pbVar20 + (int)param_7 * 2 + 0x62);
      sVar6 = ((short)(pbVar14 + 1) + 1U & 3) - (*puVar1 & 3);
      *puVar1 = *puVar1 + (ushort)(0 < sVar6) * sVar6;
      goto code_r0x004d87a7;
    }
    if (bVar9 <= (byte)param_23) {
      *pbVar27 = *pbVar27 + (byte)param_23;
      *pbVar27 = *pbVar27 + GH_PIECE(param_25, 3, undefined1);
      pbVar27 = pbVar27 + *(int *)pbVar27;
      *pbVar27 = *pbVar27 + (char)pbVar27;
      *pbVar27 = *pbVar27 + GH_PIECE(param_23, 3, undefined1);
      goto code_r0x004d8817;
    }
    *pbVar27 = *pbVar27 + GH_PIECE(param_25, 3, undefined1);
    *pbVar27 = *pbVar27 + GH_PIECE(param_25, 3, undefined1);
    *pbVar27 = *pbVar27 + GH_PIECE(param_25, 3, undefined1);
    *param_8 = *param_8 + GH_PIECE(param_25, 3, undefined1);
    *pbVar27 = *pbVar27 + GH_PIECE(param_25, 3, undefined1);
    *param_8 = *param_8 + GH_PIECE(param_25, 3, undefined1);
    *pbVar27 = *pbVar27 + GH_PIECE(param_25, 3, undefined1);
    pbVar27[0x1004d8a] = pbVar27[0x1004d8a] + GH_PIECE(param_25, 3, undefined1);
    pcVar15 = (char *)((int)pbVar27 * 2 + 0x3a647473);
    *pcVar15 = *pcVar15 + GH_PIECE(param_23, 3, undefined1);
    bVar29 = (byte)param_24 == pbVar27[0x61];
code_r0x004d886b:
    uVar24 = (ushort)pbVar26;
    pbVar26 = (byte *)((longlong)*(int *)(param_8 + 0x3c) * 0x736e6f63);
    bVar30 = (longlong)(int)pbVar26 != (longlong)*(int *)(param_8 + 0x3c) * 0x736e6f63;
    if (!bVar29) {
      uVar24 = 0;
code_r0x004d887b:
      out(*pbVar26,(short)param_8);
      GH_PIECE(param_18, 3, undefined1) = 0x61;
      GH_PIECE(param_19, 0, undefined1) = 0x72;
      GH_PIECE(param_19, 1, undefined1) = 0x2c;
      GH_PIECE(param_19, 2, undefined1) = 0x73;
      if ((char)pbVar27 == 'c') goto LAB_004d88f8;
      bVar30 = (byte)((uint)param_7 >> 8) < *param_8;
    }
    puVar1 = (ushort *)(pbVar27 + 0x61);
    sVar6 = (uVar24 & 3) - (*puVar1 & 3);
    *puVar1 = *puVar1 + (ushort)(0 < sVar6) * sVar6;
    if (bVar30) {
LAB_004d88f8:
      puVar5 = (undefined4 *)
               (CONCAT13(GH_PIECE(param_20, 2, undefined1),
                         CONCAT12(GH_PIECE(param_20, 1, undefined1),CONCAT11(GH_PIECE(param_20, 0, undefined1),GH_PIECE(param_19, 3, undefined1)))) + -0xc);
      GH_PIECE(param_19, 3, undefined1) = SUB41(puVar5,0);
      GH_PIECE(param_20, 0, undefined1) = (undefined1)((uint)puVar5 >> 8);
      GH_PIECE(param_20, 1, undefined1) = (undefined1)((uint)puVar5 >> 0x10);
      GH_PIECE(param_20, 2, undefined1) = (undefined1)((uint)puVar5 >> 0x18);
      std::basic_istream_char::_dtor(puVar5,CONCAT13(GH_PIECE(param_21, 2, undefined1),
                                   CONCAT12(GH_PIECE(param_21, 1, undefined1),CONCAT11(GH_PIECE(param_21, 0, undefined1),GH_PIECE(param_20, 3, undefined1))))
                  );
      return;
    }
    if (0 < sVar6) {
      halt_baddata();
    }
    param_7 = (byte *)CONCAT22(GH_PIECE(param_23, 1, undefined2),CONCAT11((byte)param_23,GH_PIECE(param_22, 3, undefined1)));
    param_8 = (byte *)CONCAT22(GH_PIECE(param_24, 1, undefined2),CONCAT11((byte)param_24,GH_PIECE(param_23, 3, undefined1)));
    pbVar27 = (byte *)CONCAT22(GH_PIECE(param_26, 1, undefined2),CONCAT11((char)param_26,GH_PIECE(param_25, 3, undefined1)));
  }
  else {
code_r0x004d865e:
    if (!bVar30) {
      bVar30 = false;
      pbVar16 = param_25;
      pbVar20 = param_24;
      pbVar22 = param_23;
      pbVar23 = param_22;
      pbVar25 = param_20;
      pbVar28 = param_19;
      pbVar8 = param_18;
      if (!bVar29) goto code_r0x004d8663;
      goto code_r0x004d86d4;
    }
code_r0x004d86bf:
    *param_9 = *param_9 + (char)pbVar27;
    bVar12 = (byte)((uint)param_9 >> 8);
    bVar30 = CARRY1(*pbVar27,bVar12);
    *pbVar27 = *pbVar27 + bVar12;
    bVar12 = *pbVar27;
    bVar29 = *pbVar27 == 0;
code_r0x004d873e:
    if (bVar30 || bVar29) {
code_r0x004d87a7:
      if (-1 < (char)bVar12) goto code_r0x004d8817;
      puVar5 = (undefined4 *)
               CONCAT13(GH_PIECE(param_19, 2, undefined1),
                        CONCAT12(GH_PIECE(param_19, 1, undefined1),CONCAT11(GH_PIECE(param_19, 0, undefined1),GH_PIECE(param_18, 3, undefined1))));
      pbVar14 = (byte *)CONCAT13(GH_PIECE(param_20, 2, undefined1),
                                 CONCAT12(GH_PIECE(param_20, 1, undefined1),CONCAT11(GH_PIECE(param_20, 0, undefined1),GH_PIECE(param_19, 3, undefined1))));
      pbVar26 = (byte *)CONCAT13(GH_PIECE(param_21, 2, undefined1),
                                 CONCAT12(GH_PIECE(param_21, 1, undefined1),CONCAT11(GH_PIECE(param_21, 0, undefined1),GH_PIECE(param_20, 3, undefined1))));
      param_7 = (byte *)CONCAT22(GH_PIECE(param_23, 1, undefined2),CONCAT11((byte)param_23,GH_PIECE(param_22, 3, undefined1)));
      param_8 = (byte *)CONCAT22(GH_PIECE(param_24, 1, undefined2),CONCAT11((byte)param_24,GH_PIECE(param_23, 3, undefined1)));
      pcVar15 = (char *)(puVar5 + 1);
      uVar4 = in(CONCAT11((byte)param_24,GH_PIECE(param_23, 3, undefined1)));
      *puVar5 = uVar4;
      piVar17 = (int *)CONCAT22(GH_PIECE(param_26, 1, undefined2),
                                CONCAT11((char)param_26 + GH_PIECE(param_24, 3, undefined1),GH_PIECE(param_25, 3, undefined1)));
      LOCK();
      param_9 = *(byte **)pbVar26;
      *(uint *)pbVar26 = CONCAT22(GH_PIECE(param_25, 1, undefined2),CONCAT11((char)param_25,GH_PIECE(param_24, 3, undefined1)));
      UNLOCK();
      *(char *)piVar17 = (char)*piVar17 + GH_PIECE(param_25, 3, undefined1);
      *(char *)piVar17 = (char)*piVar17 + GH_PIECE(param_25, 3, undefined1);
      pbVar27 = (byte *)((int)piVar17 + *piVar17);
      *pbVar27 = *pbVar27 + (char)pbVar27;
      *pbVar27 = *pbVar27 + (char)pbVar27;
code_r0x004d87c2:
      cVar13 = (char)pbVar27;
      *pbVar27 = *pbVar27 + cVar13;
      *pbVar27 = *pbVar27 + cVar13;
      *pbVar27 = *pbVar27 + cVar13;
      *pbVar27 = *pbVar27 + cVar13;
      *pbVar27 = *pbVar27 + cVar13;
      GH_PIECE(param_18, 2, undefined1) = 0;
      GH_PIECE(param_18, 3, undefined1) = 0;
      GH_PIECE(param_19, 0, undefined1) = 0;
      GH_PIECE(param_19, 1, undefined1) = 3;
      cVar11 = (char)((uint)param_8 >> 8);
      *pbVar27 = *pbVar27 + cVar11;
      *pbVar27 = *pbVar27 + cVar13;
      *pbVar27 = *pbVar27 + cVar13;
      *pcVar15 = *pcVar15 + cVar11;
    }
    else {
      puVar1 = (ushort *)(param_18 + (int)pbVar26 * 2 + 0x72);
      sVar6 = ((ushort)pbVar14 & 3) - (*puVar1 & 3);
      *puVar1 = *puVar1 + (ushort)(0 < sVar6) * sVar6;
      bVar12 = (byte)pbVar27;
      pcVar15 = (char *)CONCAT13(GH_PIECE(param_19, 2, undefined1),
                                 CONCAT12(GH_PIECE(param_19, 1, undefined1),CONCAT11(GH_PIECE(param_19, 0, undefined1),GH_PIECE(param_18, 3, undefined1))));
      if (bVar12 < 0x5f) goto code_r0x004d87c2;
      *pbVar27 = *pbVar27 + bVar12;
      *pbVar27 = *pbVar27 + bVar12;
      *pbVar27 = *pbVar27 + bVar12;
      *pbVar27 = *pbVar27 + bVar12;
      *pbVar27 = *pbVar27 + bVar12;
      *pbVar27 = *pbVar27 + (char)((uint)param_9 >> 8);
      *pbVar27 = *pbVar27 + bVar12;
      pbVar27 = pbVar27 + *(int *)pbVar27;
      bVar12 = (byte)pbVar27;
      *pbVar27 = *pbVar27 ^ bVar12;
      *pbVar27 = *pbVar27 + bVar12;
      *pbVar27 = *pbVar27 + bVar12;
    }
    bVar12 = (byte)pbVar27;
    *pbVar27 = *pbVar27 + bVar12;
    cVar13 = (char)((uint)pbVar27 >> 8);
    *pbVar27 = *pbVar27 + cVar13;
    *pbVar27 = *pbVar27 + bVar12;
    *pbVar27 = *pbVar27 + bVar12;
    *pbVar27 = *pbVar27 + bVar12;
    *pbVar27 = *pbVar27 + bVar12;
    *pbVar27 = *pbVar27 + bVar12;
    *pbVar27 = *pbVar27 + bVar12;
    uVar19 = (undefined3)((uint)pbVar27 >> 8);
    bVar12 = bVar12 | *pbVar27;
    pbVar27 = (byte *)CONCAT31(uVar19,bVar12);
    *pbVar27 = *pbVar27 + bVar12;
    bVar12 = bVar12 | *pbVar27;
    pbVar27 = (byte *)CONCAT31(uVar19,bVar12);
    *pbVar27 = *pbVar27 + bVar12;
    if (*pbVar27 == 0) {
code_r0x004d8817:
      cVar13 = (char)pbVar27;
      *param_7 = *param_7 + cVar13;
      *pbVar27 = *pbVar27 + cVar13;
      pbVar27[0x10004d83] = pbVar27[0x10004d83] + (char)((uint)param_9 >> 8);
      *pbVar27 = *pbVar27 + cVar13;
      *param_7 = *param_7 + cVar13;
      *pbVar27 = *pbVar27 + cVar13;
      *pbVar27 = *pbVar27 + cVar13;
      *pbVar27 = *pbVar27 + cVar13;
      *pbVar27 = *pbVar27 + cVar13;
      *pbVar27 = *pbVar27 + cVar13;
      *pbVar27 = *pbVar27 + cVar13;
      *pbVar27 = *pbVar27 + cVar13;
      *pbVar27 = *pbVar27 + (char)param_7;
      *pbVar27 = *pbVar27 + cVar13;
      *param_7 = *param_7 + cVar13;
      *pbVar27 = *pbVar27 + (char)((uint)param_8 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar26 = pbVar26 + -1;
    uVar24 = (ushort)pbVar26;
    *param_9 = *param_9 + bVar12;
    pcVar2 = (char *)((int)pbVar27 * 2 + 0x73);
    *pcVar2 = *pcVar2 + cVar13;
    bVar9 = (byte)((uint)param_7 >> 8);
    if (*pcVar2 == '\0') {
      param_7[0x74] = param_7[0x74] + (char)((uint)param_8 >> 8);
      bVar29 = bVar9 == param_8[in_FS_OFFSET];
      if (SBORROW1(bVar9,param_8[in_FS_OFFSET])) {
        *pbVar27 = *pbVar27 | bVar12;
        *pbVar27 = *pbVar27 + bVar12;
        *pbVar27 = *pbVar27 + bVar12;
        *pbVar27 = *pbVar27 + bVar12;
        iVar3 = CONCAT13(GH_PIECE(param_20, 2, undefined1),
                         CONCAT12(GH_PIECE(param_20, 1, undefined1),CONCAT11(GH_PIECE(param_20, 0, undefined1),GH_PIECE(param_19, 3, undefined1)))) + -0x4c;
        GH_PIECE(param_19, 3, undefined1) = (undefined1)iVar3;
        GH_PIECE(param_20, 0, undefined1) = (undefined1)((uint)iVar3 >> 8);
        GH_PIECE(param_20, 1, undefined1) = (undefined1)((uint)iVar3 >> 0x10);
        GH_PIECE(param_20, 2, undefined1) = (undefined1)((uint)iVar3 >> 0x18);
        goto code_r0x004d88ba;
      }
      goto code_r0x004d886b;
    }
    bVar12 = *param_8;
    pbVar26 = pbVar14 + 1;
    out(*pbVar14,(short)param_8);
    if (bVar9 == bVar12) {
      if (!SBORROW1(bVar9,bVar12)) {
        out(*pbVar26,(short)param_8);
        puVar1 = (ushort *)(&GHIDRA_STACK(0x000000a2) + (int)pcVar15);
        sVar6 = ((short)pbVar26 + 1U & 3) - (*puVar1 & 3);
        *puVar1 = *puVar1 + (ushort)(0 < sVar6) * sVar6;
        goto code_r0x004d8817;
      }
      goto code_r0x004d887b;
    }
    if (bVar12 <= bVar9) {
      GH_PIECE(param_18, 0, undefined1) = 0x88;
      GH_PIECE(param_18, 1, undefined1) = 0x4d;
      GH_PIECE(param_18, 2, undefined1) = 0;
      (**(code **)(pbVar27 + 0x24448390))();
      goto code_r0x004d88f1;
    }
    pbVar14 = param_9 + 0x6e;
    *pbVar14 = *pbVar14 & (byte)((uint)param_9 >> 8);
    if (*pbVar14 != 0) goto code_r0x004d88f1;
  }
  if ((char)pbVar27 == 's') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar12 = *param_8;
  uVar7 = (uint)param_7 >> 8;
  puVar5 = (undefined4 *)CONCAT31((undefined3)param_12,GH_PIECE(param_11, 3, undefined1));
  param_7 = (byte *)CONCAT22(GH_PIECE(param_15, 1, undefined2),CONCAT11(GH_PIECE(param_15, 0, undefined1),GH_PIECE(param_14, 3, undefined1)));
  uVar21 = CONCAT11(GH_PIECE(param_16, 0, undefined1),GH_PIECE(param_15, 3, undefined1));
  param_9 = (byte *)CONCAT22(GH_PIECE(param_17, 1, undefined2),CONCAT11((char)param_17,GH_PIECE(param_16, 3, undefined1)));
  pbVar27 = (byte *)CONCAT13(GH_PIECE(param_18, 2, undefined1),
                             CONCAT12(GH_PIECE(param_18, 1, undefined1),CONCAT11(GH_PIECE(param_18, 0, undefined1),GH_PIECE(param_17, 3, undefined1))));
  uVar10 = in(uVar21);
  *(undefined1 *)CONCAT31(GH_PIECE(param_11, 0, undefined3),GH_PIECE(param_10, 3, undefined1)) = uVar10;
  uVar10 = in(uVar21);
  ((undefined1 *)CONCAT31(GH_PIECE(param_11, 0, undefined3),GH_PIECE(param_10, 3, undefined1)))[1] = uVar10;
  out(*puVar5,uVar21);
  puVar1 = (ushort *)(param_9 + 0x74);
  sVar6 = ((short)&param_18 + 3U & 3) - (*puVar1 & 3);
  *puVar1 = *puVar1 + (ushort)(0 < sVar6) * sVar6;
  pbVar14 = (byte *)(puVar5 + 2);
  out(puVar5[1],uVar21);
  if ((byte)uVar7 < bVar12) {
code_r0x004d88f1:
    std::basic_ostream_char::_dtor((undefined4 *)
                 CONCAT13(GH_PIECE(param_20, 2, undefined1),
                          CONCAT12(GH_PIECE(param_20, 1, undefined1),CONCAT11(GH_PIECE(param_20, 0, undefined1),GH_PIECE(param_19, 3, undefined1)))),
                 CONCAT13(GH_PIECE(param_21, 2, undefined1),
                          CONCAT12(GH_PIECE(param_21, 1, undefined1),CONCAT11(GH_PIECE(param_21, 0, undefined1),GH_PIECE(param_20, 3, undefined1)))));
    return;
  }
  puVar1 = (ushort *)(pbVar27 + 0x61);
  sVar6 = ((byte)((uint)param_12 >> 0x18) & 3) - (*puVar1 & 3);
  *puVar1 = *puVar1 + (ushort)(0 < sVar6) * sVar6;
code_r0x004d88ba:
  bVar12 = (byte)((uint)param_7 >> 8);
  *pbVar14 = *pbVar14 & bVar12;
  *pbVar14 = *pbVar14 & bVar12;
  cVar13 = (char)pbVar27;
  *pbVar27 = *pbVar27 + cVar13;
  *pbVar27 = *pbVar27 + cVar13;
  *pbVar27 = *pbVar27 + cVar13;
  *pbVar27 = *pbVar27 + cVar13;
  *pbVar27 = *pbVar27 + cVar13;
  *(undefined2 *)((int)pbVar27 * 3) = in_DS;
  *pbVar27 = *pbVar27 + (char)param_9;
  *pbVar27 = *pbVar27 + cVar13;
  *pbVar27 = *pbVar27 + cVar13;
  *pbVar27 = *pbVar27 + cVar13;
  param_7[-0x4bfbdbbc] = param_7[-0x4bfbdbbc] + cVar13;
  std::basic_ofstream_char::_dtor((undefined4 *)
               CONCAT13(GH_PIECE(param_20, 2, undefined1),
                        CONCAT12(GH_PIECE(param_20, 1, undefined1),CONCAT11(GH_PIECE(param_20, 0, undefined1),GH_PIECE(param_19, 3, undefined1)))),
               CONCAT13(GH_PIECE(param_21, 2, undefined1),
                        CONCAT12(GH_PIECE(param_21, 1, undefined1),CONCAT11(GH_PIECE(param_21, 0, undefined1),GH_PIECE(param_20, 3, undefined1)))));
  return;
}

} // namespace tea
