// name: FUN_004d8410
// address: 0x4d8410
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

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

void FUN_004d8410(int *param_1,undefined4 param_2,byte *param_3,byte *param_4,int param_5,
                 undefined4 param_6,byte *param_7,byte *param_8,byte *param_9,byte *param_10,
                 byte *param_11,int param_12,undefined4 param_13,byte *param_14,byte *param_15,
                 byte *param_16,byte *param_17,byte *param_18,byte *param_19,byte *param_20,
                 byte *param_21,byte *param_22,byte *param_23,byte *param_24,byte *param_25,
                 byte *param_26)

{
  ushort *puVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  short sVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte bVar11;
  undefined1 uVar12;
  char cVar13;
  byte bVar14;
  char cVar15;
  byte bVar20;
  byte *pbVar16;
  undefined3 uVar21;
  byte *pbVar18;
  int *piVar19;
  byte *pbVar22;
  undefined2 uVar23;
  byte *pbVar24;
  byte *unaff_EBX;
  byte *pbVar25;
  ushort uVar26;
  int unaff_EBP;
  byte *pbVar27;
  byte *pbVar28;
  undefined1 *unaff_ESI;
  byte *pbVar29;
  byte *pbVar30;
  byte *pbVar31;
  byte *unaff_EDI;
  undefined2 in_ES;
  undefined2 in_SS;
  undefined2 in_DS;
  int in_FS_OFFSET;
  int in_GS_OFFSET;
  char in_CF;
  bool bVar32;
  bool bVar33;
  byte *in_stack_00000000;
  undefined1 uStack00000040;
  undefined1 uStack00000041;
  undefined1 uStack00000042;
  undefined1 uStack00000043;
  byte bStack00000044;
  undefined1 uStack00000045;
  undefined1 uStack00000046;
  undefined1 uStack00000047;
  undefined1 uStack00000048;
  undefined1 uStack00000049;
  undefined1 uStack0000004a;
  char *pcVar17;
  
  pbVar9 = _uStack00000048;
  pbVar8 = _bStack00000044;
  pbVar31 = _uStack00000040;
  pbVar29 = param_10;
  uStack0000004a = (undefined1)((uint)_uStack00000048 >> 0x10);
  uStack00000049 = (undefined1)((uint)pbVar9 >> 8);
  uStack00000048 = SUB41(pbVar9,0);
  uStack00000047 = (undefined1)((uint)_bStack00000044 >> 0x18);
  uStack00000046 = (undefined1)((uint)pbVar8 >> 0x10);
  uStack00000045 = (undefined1)((uint)pbVar8 >> 8);
  bStack00000044 = (byte)pbVar8;
  uStack00000043 = (undefined1)((uint)_uStack00000040 >> 0x18);
  uStack00000042 = (undefined1)((uint)pbVar31 >> 0x10);
  uStack00000041 = (undefined1)((uint)pbVar31 >> 8);
  uStack00000040 = SUB41(pbVar31,0);
  *(char *)param_1 = ((char)*param_1 - (char)param_1) - in_CF;
  *(char *)param_1 = (char)*param_1 + (char)param_1;
  pbVar16 = (byte *)((int)param_1 + *param_1);
  bVar14 = (byte)pbVar16;
  *pbVar16 = *pbVar16 ^ bVar14;
  *pbVar16 = *pbVar16 + bVar14;
  *pbVar16 = *pbVar16 + bVar14;
  *pbVar16 = *pbVar16 + bVar14;
  *(char *)((int)in_stack_00000000 * 2) =
       *(char *)((int)in_stack_00000000 * 2) + (char)((uint)param_2 >> 8);
  bVar11 = (byte)in_stack_00000000;
  *in_stack_00000000 = *in_stack_00000000 + bVar11;
  *in_stack_00000000 = *in_stack_00000000 + bVar11;
  *in_stack_00000000 = *in_stack_00000000 + bVar11;
  *in_stack_00000000 = *in_stack_00000000 + bVar11;
  *in_stack_00000000 = *in_stack_00000000 + bVar11;
  *(char *)((int)in_stack_00000000 * 2) = *(char *)((int)in_stack_00000000 * 2) + bVar11;
  *in_stack_00000000 = *in_stack_00000000 + bVar11;
  bVar14 = *in_stack_00000000;
  *in_stack_00000000 = *in_stack_00000000 + bVar11;
  pbVar16 = (byte *)0x1004d;
  if (CARRY1(bVar14,bVar11)) {
    puVar1 = (ushort *)(unaff_EDI + 100);
    sVar6 = ((ushort)unaff_EBP & 3) - (*puVar1 & 3);
    *puVar1 = *puVar1 + (ushort)(0 < sVar6) * sVar6;
    puVar1 = (ushort *)(unaff_ESI + in_GS_OFFSET + 0x74);
    sVar6 = ((ushort)unaff_ESI & 3) - (*puVar1 & 3);
    *puVar1 = *puVar1 + (ushort)(0 < sVar6) * sVar6;
    in_stack_00000000 = (byte *)0x732c7261;
    cVar15 = (char)((uint)unaff_EBX >> 8);
    if ((char)param_4 == 'c') {
      bVar33 = SBORROW1(cVar15,*(char *)(in_FS_OFFSET + 0x1004d));
      bVar32 = cVar15 == *(char *)(in_FS_OFFSET + 0x1004d);
      param_8 = (byte *)0x1004d;
      param_7 = unaff_EBX;
      param_5 = unaff_EBP;
      goto code_r0x004d84c1;
    }
    bVar32 = cVar15 != cRam0001004d;
    uVar4 = in(0x4d);
    *(undefined4 *)unaff_EDI = uVar4;
    unaff_ESI = (undefined1 *)0x632c7261;
    cVar15 = (char)param_10;
    cVar13 = (char)((uint)param_8 >> 8);
    if (bVar32) {
      *param_10 = *param_10 + cVar15;
      *param_7 = *param_7 + cVar15;
      *param_10 = *param_10 + cVar15;
      param_10[-0x77] = param_10[-0x77] + (char)((uint)param_10 >> 8);
      unaff_EBP = param_5 + -1;
      *param_10 = *param_10 + (char)param_8;
      *param_10 = *param_10 + cVar15;
      *param_7 = *param_7 + cVar15;
      *param_10 = *param_10 + cVar15;
      *param_10 = *param_10 + cVar15;
      *param_10 = *param_10 + cVar15;
      *param_10 = *param_10 + cVar15;
      *param_10 = *param_10 + cVar15;
      *param_10 = *param_10 + cVar15;
      *param_10 = *param_10 + cVar15;
      *param_10 = *param_10 + (char)param_8;
      *param_10 = *param_10 + cVar15;
      *param_7 = *param_7 + cVar15;
      *param_10 = *param_10 + cVar13;
      *param_10 = *param_10 + cVar15;
      *param_10 = *param_10 + cVar15;
      *param_11 = *param_11 + cVar13;
      *param_10 = *param_10 + cVar15;
      *(undefined2 *)param_10 = in_ES;
      *param_10 = *param_10 + cVar15;
      *param_10 = *param_10 + cVar15;
      *param_10 = *param_10 + cVar15;
      *param_10 = *param_10 + cVar15;
      *param_10 = *param_10 + cVar15;
      *param_10 = *param_10 + cVar15;
      *param_10 = *param_10 + cVar15;
      *param_10 = *param_10 + cVar15;
      uVar12 = in(0x20);
      param_4 = (byte *)CONCAT31((int3)((uint)param_10 >> 8),uVar12);
      param_3 = param_9;
      pbVar16 = param_8;
      unaff_EBX = param_7;
      unaff_EDI = param_11;
      goto code_r0x004d84b6;
    }
    if (cVar15 == 'c') {
      *param_10 = *param_10 + 99;
      *param_10 = *param_10 + 99;
      *param_10 = *param_10 + 99;
      *param_10 = *param_10 + 99;
code_r0x004d853d:
      param_10 = (byte *)0x732c7261;
      unaff_EDI = (byte *)0x732c7261;
      *pbVar29 = *pbVar29 + cVar15;
      param_7[0x74] = param_7[0x74] + cVar13;
      goto code_r0x004d8542;
    }
    param_10 = (byte *)0x732c7261;
    bVar14 = (byte)((uint)param_7 >> 8);
    bVar32 = bVar14 < param_8[in_FS_OFFSET];
    bVar33 = bVar14 == param_8[in_FS_OFFSET];
    out(uRam632c7261,(short)param_8);
    param_4 = pbVar29;
    pbVar16 = (byte *)0x632c7265;
    if (!bVar32) goto code_r0x004d854a;
    if (bVar32) goto code_r0x004d853d;
    uRam732c7261 = in((short)param_15);
    param_4 = param_17;
    param_9 = param_16;
    if ((char)param_17 != 'c') {
      bVar14 = *param_15;
      puVar1 = (ushort *)(param_17 + 0x61);
      sVar6 = ((ushort)param_12 & 3) - (*puVar1 & 3);
      *puVar1 = *puVar1 + (ushort)(0 < sVar6) * sVar6;
      if ((byte)((uint)param_14 >> 8) < bVar14) goto code_r0x004d8555;
      if (0 >= sVar6) {
        pbVar29 = (byte *)(*(int *)(param_22 + 0x3c + (int)pbVar31 * 2) * 0x72616863);
        *pbVar29 = *pbVar29 & param_22._1_1_;
        *pbVar29 = *pbVar29 & param_22._1_1_;
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
    param_16._0_1_ = (char)param_9;
    *param_4 = *param_4 + (char)param_4;
code_r0x004d8555:
    *param_4 = *param_4 + (char)param_4;
    *(char *)((int)param_4 * 2) = *(char *)((int)param_4 * 2) + (char)param_16;
    *param_4 = *param_4 + (char)param_4;
    param_4 = param_4 + *(int *)param_4;
    *param_4 = *param_4 & (byte)param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x004d84b6:
  param_5 = unaff_EBP + -1;
  *param_3 = *param_3 + (char)param_4;
  param_4[0x64747300] = param_4[0x64747300] + (char)pbVar16;
  bVar14 = (byte)((uint)unaff_EBX >> 8);
  bVar33 = SBORROW1(bVar14,*pbVar16);
  bVar32 = bVar14 == *pbVar16;
  param_8 = pbVar16;
  param_7 = unaff_EBX;
code_r0x004d84c1:
  pbVar29 = unaff_ESI + 1;
  out(*unaff_ESI,(short)param_8);
  bVar14 = (byte)param_4;
  if (bVar32) {
    unaff_EDI = in_stack_00000000;
    if (!bVar33) {
      *param_4 = *param_4 + bVar14;
      param_25 = param_4;
      param_22 = param_7;
code_r0x004d8508:
      cVar15 = (char)param_25;
      *param_22 = *param_22 + cVar15;
      *param_25 = *param_25 + cVar15;
      *param_25 = *param_25 + cVar15;
      *param_25 = *param_25 + cVar15;
      *param_25 = *param_25 + cVar15;
      *param_25 = *param_25 + cVar15;
      *param_25 = *param_25 + cVar15;
      *param_25 = *param_25 + cVar15;
      *(char *)((int)param_25 * 2) = *(char *)((int)param_25 * 2) + cVar15;
      *param_25 = *param_25 + cVar15;
      param_25 = param_25 + *(int *)param_25;
      *param_25 = *param_25 & (byte)param_25;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *(char *)((int)param_4 * 2) = *(char *)((int)param_4 * 2) + (char)((uint)param_8 >> 8);
    *param_4 = *param_4 + bVar14;
    *param_4 = *param_4 + bVar14;
    *param_4 = *param_4 + bVar14;
    *param_4 = *param_4 + bVar14;
  }
  *param_4 = *param_4 + bVar14;
  bVar11 = *param_4;
  *param_4 = *param_4 + bVar14;
  bVar32 = false;
  param_9 = param_3;
  if (CARRY1(bVar11,bVar14)) {
code_r0x004d8542:
    bVar14 = (byte)((uint)param_7 >> 8);
    bVar32 = bVar14 < param_8[in_FS_OFFSET];
    bVar33 = bVar14 == param_8[in_FS_OFFSET];
    uVar4 = in((short)param_8);
    *(undefined4 *)unaff_EDI = uVar4;
    param_4 = param_17;
    param_9 = param_16;
    param_8 = param_15;
    param_7 = param_14;
    param_5 = param_12;
    pbVar16 = param_11;
code_r0x004d854a:
    if (!bVar33) {
      *param_4 = *param_4 + (char)param_4;
      *param_4 = *param_4 + (char)param_4;
      goto code_r0x004d8553;
    }
    unaff_EDI = param_10 + 1;
    bVar14 = in((short)param_8);
    *param_10 = bVar14;
    pbVar29 = pbVar16 + 4;
    out(*(undefined4 *)pbVar16,(short)param_8);
    puVar1 = (ushort *)(param_9 + 0x74);
    *puVar1 = *puVar1 + (ushort)(0 < (short)-(*puVar1 & 3)) * -(*puVar1 & 3);
  }
  pbVar16 = pbVar29 + 4;
  out(*(undefined4 *)pbVar29,(short)param_8);
  if (bVar32) {
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
  bVar11 = (byte)((uint)param_7 >> 8);
  *pbVar16 = *pbVar16 & bVar11;
  cVar15 = (char)param_4;
  *param_4 = *param_4 + cVar15;
  *param_4 = *param_4 + cVar15;
  uVar21 = (undefined3)((uint)param_4 >> 8);
  cVar13 = cVar15 + -0x77;
  pcVar17 = (char *)CONCAT31(uVar21,cVar13);
  *pcVar17 = *pcVar17 + cVar13;
  *pcVar17 = *pcVar17 + cVar13;
  *param_7 = *param_7 + cVar13;
  *pcVar17 = *pcVar17 + cVar13;
  *pcVar17 = *pcVar17 + cVar13;
  *pcVar17 = *pcVar17 + cVar13;
  *pcVar17 = *pcVar17 + cVar13;
  *pcVar17 = *pcVar17 + cVar13;
  *pcVar17 = *pcVar17 + cVar13;
  *pcVar17 = *pcVar17 + cVar13;
  *pcVar17 = *pcVar17 + cVar13;
  bVar14 = cVar15 + 0x99;
  pbVar29 = (byte *)CONCAT31(uVar21,bVar14);
  (&stack0x0000007c)[(int)param_7] = (&stack0x0000007c)[(int)param_7] + (char)param_9;
  bVar33 = CARRY1(*pbVar29,bVar14);
  *pbVar29 = *pbVar29 + bVar14;
  bVar14 = *pbVar29;
  bVar32 = *pbVar29 == 0;
  pbVar28 = (byte *)(param_5 + -1);
  if (bVar33) {
    pbVar18 = pbVar29;
    pbVar22 = param_9;
    pbVar24 = param_8;
    pbVar25 = param_7;
    pbVar27 = (byte *)(param_5 + -1);
    pbVar30 = pbVar16;
    pbVar10 = unaff_EDI;
    if (bVar11 < param_8[in_FS_OFFSET]) {
      bVar11 = param_7[0x68];
      bVar20 = (byte)((uint)param_4 >> 8);
      bVar33 = bVar20 < bVar11;
      bVar14 = bVar20 - bVar11;
      bVar32 = bVar20 == bVar11;
      pbVar29 = param_25;
      param_9 = param_24;
      param_8 = param_23;
      param_7 = param_22;
      pbVar28 = pbVar8;
      pbVar16 = pbVar31;
      unaff_EDI = param_18;
      goto code_r0x004d865e;
    }
code_r0x004d8663:
    unaff_EDI = pbVar10;
    pbVar16 = (byte *)(*(int *)(pbVar25 + (int)pbVar30 * 2 + 0x3c) * 0x72616863);
    bVar33 = (byte)pbVar18 < 0x73;
    cVar15 = (byte)pbVar18 + 0x8d;
    pbVar29 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),cVar15);
    bVar32 = true;
    bVar14 = 0;
    param_9 = pbVar22;
    param_8 = pbVar24;
    param_7 = pbVar25;
    pbVar28 = pbVar27;
    if (cVar15 == '\0') goto code_r0x004d86d4;
    bVar11 = *pbVar24;
    uVar23 = SUB42(param_23,0);
    bVar14 = in(uVar23);
    *param_18 = bVar14;
    bVar14 = in(uVar23);
    param_18[1] = bVar14;
    out(*(undefined4 *)pbVar31,uVar23);
    puVar1 = (ushort *)(param_24 + 0x74);
    *puVar1 = *puVar1 + (ushort)(0 < (short)-(*puVar1 & 3)) * -(*puVar1 & 3);
    pbVar16 = pbVar31 + 8;
    out(*(undefined4 *)(pbVar31 + 4),uVar23);
    if (bVar11 <= (byte)((uint)pbVar25 >> 8)) {
      puVar1 = (ushort *)(param_25 + 0x61);
      sVar6 = (bStack00000044 & 3) - (*puVar1 & 3);
      *puVar1 = *puVar1 + (ushort)(0 < sVar6) * sVar6;
      *pbVar16 = *pbVar16 & param_22._1_1_;
      *pbVar16 = *pbVar16 & param_22._1_1_;
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
    pbVar29 = param_25;
    param_9 = param_24;
    param_8 = param_23;
    param_7 = param_22;
    pbVar28 = pbVar8;
code_r0x004d86bf:
    *param_9 = *param_9 + (char)pbVar29;
    bVar14 = (byte)((uint)param_9 >> 8);
    bVar33 = CARRY1(*pbVar29,bVar14);
    *pbVar29 = *pbVar29 + bVar14;
    bVar14 = *pbVar29;
    bVar32 = *pbVar29 == 0;
code_r0x004d873e:
    if (bVar33 || bVar32) {
code_r0x004d87a7:
      if (-1 < (char)bVar14) goto code_r0x004d8817;
      puVar5 = (undefined4 *)
               CONCAT13(uStack00000042,
                        CONCAT12(uStack00000041,CONCAT11(uStack00000040,param_18._3_1_)));
      pbVar16 = (byte *)CONCAT13(uStack00000046,
                                 CONCAT12(uStack00000045,CONCAT11(bStack00000044,uStack00000043)));
      pbVar28 = (byte *)CONCAT13(uStack0000004a,
                                 CONCAT12(uStack00000049,CONCAT11(uStack00000048,uStack00000047)));
      param_7 = (byte *)CONCAT22(param_23._1_2_,CONCAT11((byte)param_23,param_22._3_1_));
      param_8 = (byte *)CONCAT22(param_24._1_2_,CONCAT11((byte)param_24,param_23._3_1_));
      pcVar17 = (char *)(puVar5 + 1);
      uVar4 = in(CONCAT11((byte)param_24,param_23._3_1_));
      *puVar5 = uVar4;
      piVar19 = (int *)CONCAT22(param_26._1_2_,
                                CONCAT11((char)param_26 + param_24._3_1_,param_25._3_1_));
      LOCK();
      param_9 = *(byte **)pbVar28;
      *(uint *)pbVar28 = CONCAT22(param_25._1_2_,CONCAT11((char)param_25,param_24._3_1_));
      UNLOCK();
      *(byte *)piVar19 = (char)*piVar19 + param_25._3_1_;
      *(byte *)piVar19 = (char)*piVar19 + param_25._3_1_;
      pbVar29 = (byte *)((int)piVar19 + *piVar19);
      *pbVar29 = *pbVar29 + (char)pbVar29;
      *pbVar29 = *pbVar29 + (char)pbVar29;
code_r0x004d87c2:
      cVar15 = (char)pbVar29;
      *pbVar29 = *pbVar29 + cVar15;
      *pbVar29 = *pbVar29 + cVar15;
      *pbVar29 = *pbVar29 + cVar15;
      *pbVar29 = *pbVar29 + cVar15;
      *pbVar29 = *pbVar29 + cVar15;
      param_18._2_1_ = 0;
      param_18._3_1_ = 0;
      cVar13 = (char)((uint)param_8 >> 8);
      *pbVar29 = *pbVar29 + cVar13;
      *pbVar29 = *pbVar29 + cVar15;
      *pbVar29 = *pbVar29 + cVar15;
      *pcVar17 = *pcVar17 + cVar13;
    }
    else {
      puVar1 = (ushort *)(param_18 + (int)pbVar28 * 2 + 0x72);
      sVar6 = ((ushort)pbVar16 & 3) - (*puVar1 & 3);
      *puVar1 = *puVar1 + (ushort)(0 < sVar6) * sVar6;
      bVar14 = (byte)pbVar29;
      pcVar17 = (char *)CONCAT13(uStack00000042,
                                 CONCAT12(uStack00000041,CONCAT11(uStack00000040,param_18._3_1_)));
      if (bVar14 < 0x5f) goto code_r0x004d87c2;
      *pbVar29 = *pbVar29 + bVar14;
      *pbVar29 = *pbVar29 + bVar14;
      *pbVar29 = *pbVar29 + bVar14;
      *pbVar29 = *pbVar29 + bVar14;
      *pbVar29 = *pbVar29 + bVar14;
      *pbVar29 = *pbVar29 + (char)((uint)param_9 >> 8);
      *pbVar29 = *pbVar29 + bVar14;
      pbVar29 = pbVar29 + *(int *)pbVar29;
      bVar14 = (byte)pbVar29;
      *pbVar29 = *pbVar29 ^ bVar14;
      *pbVar29 = *pbVar29 + bVar14;
      *pbVar29 = *pbVar29 + bVar14;
    }
    bVar14 = (byte)pbVar29;
    *pbVar29 = *pbVar29 + bVar14;
    cVar15 = (char)((uint)pbVar29 >> 8);
    *pbVar29 = *pbVar29 + cVar15;
    *pbVar29 = *pbVar29 + bVar14;
    *pbVar29 = *pbVar29 + bVar14;
    *pbVar29 = *pbVar29 + bVar14;
    *pbVar29 = *pbVar29 + bVar14;
    *pbVar29 = *pbVar29 + bVar14;
    *pbVar29 = *pbVar29 + bVar14;
    uVar21 = (undefined3)((uint)pbVar29 >> 8);
    bVar14 = bVar14 | *pbVar29;
    pbVar29 = (byte *)CONCAT31(uVar21,bVar14);
    *pbVar29 = *pbVar29 + bVar14;
    bVar14 = bVar14 | *pbVar29;
    pbVar29 = (byte *)CONCAT31(uVar21,bVar14);
    *pbVar29 = *pbVar29 + bVar14;
    if (*pbVar29 == 0) {
code_r0x004d8817:
      cVar15 = (char)pbVar29;
      *param_7 = *param_7 + cVar15;
      *pbVar29 = *pbVar29 + cVar15;
      pbVar29[0x10004d83] = pbVar29[0x10004d83] + (char)((uint)param_9 >> 8);
      *pbVar29 = *pbVar29 + cVar15;
      *param_7 = *param_7 + cVar15;
      *pbVar29 = *pbVar29 + cVar15;
      *pbVar29 = *pbVar29 + cVar15;
      *pbVar29 = *pbVar29 + cVar15;
      *pbVar29 = *pbVar29 + cVar15;
      *pbVar29 = *pbVar29 + cVar15;
      *pbVar29 = *pbVar29 + cVar15;
      *pbVar29 = *pbVar29 + cVar15;
      *pbVar29 = *pbVar29 + (char)param_7;
      *pbVar29 = *pbVar29 + cVar15;
      *param_7 = *param_7 + cVar15;
      *pbVar29 = *pbVar29 + (char)((uint)param_8 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar28 = pbVar28 + -1;
    uVar26 = (ushort)pbVar28;
    *param_9 = *param_9 + bVar14;
    pcVar2 = (char *)((int)pbVar29 * 2 + 0x73);
    *pcVar2 = *pcVar2 + cVar15;
    bVar11 = (byte)((uint)param_7 >> 8);
    if (*pcVar2 == '\0') {
      param_7[0x74] = param_7[0x74] + (char)((uint)param_8 >> 8);
      bVar32 = bVar11 == param_8[in_FS_OFFSET];
      if (SBORROW1(bVar11,param_8[in_FS_OFFSET])) {
        *pbVar29 = *pbVar29 | bVar14;
        *pbVar29 = *pbVar29 + bVar14;
        *pbVar29 = *pbVar29 + bVar14;
        *pbVar29 = *pbVar29 + bVar14;
        iVar3 = CONCAT13(uStack00000046,
                         CONCAT12(uStack00000045,CONCAT11(bStack00000044,uStack00000043))) + -0x4c;
        uStack00000043 = (undefined1)iVar3;
        bStack00000044 = (byte)((uint)iVar3 >> 8);
        uStack00000045 = (undefined1)((uint)iVar3 >> 0x10);
        uStack00000046 = (undefined1)((uint)iVar3 >> 0x18);
        goto code_r0x004d88ba;
      }
      goto code_r0x004d886b;
    }
    bVar14 = *param_8;
    pbVar31 = pbVar16 + 1;
    out(*pbVar16,(short)param_8);
    if (bVar11 == bVar14) {
      if (!SBORROW1(bVar11,bVar14)) {
        out(*pbVar31,(short)param_8);
        puVar1 = (ushort *)(&stack0x000000a2 + (int)pcVar17);
        sVar6 = ((short)pbVar31 + 1U & 3) - (*puVar1 & 3);
        *puVar1 = *puVar1 + (ushort)(0 < sVar6) * sVar6;
        goto code_r0x004d8817;
      }
      goto code_r0x004d887b;
    }
    if (bVar14 <= bVar11) {
      param_18._0_1_ = 0x88;
      param_18._1_1_ = 0x4d;
      param_18._2_1_ = 0;
      (**(code **)(pbVar29 + 0x24448390))();
      goto code_r0x004d88f1;
    }
    pbVar31 = param_9 + 0x6e;
    *pbVar31 = *pbVar31 & (byte)((uint)param_9 >> 8);
    if (*pbVar31 != 0) goto code_r0x004d88f1;
  }
  else {
code_r0x004d865e:
    if (bVar33) goto code_r0x004d86bf;
    bVar33 = false;
    pbVar18 = param_25;
    pbVar22 = param_24;
    pbVar24 = param_23;
    pbVar25 = param_22;
    pbVar27 = pbVar8;
    pbVar30 = pbVar31;
    pbVar10 = param_18;
    if (!bVar32) goto code_r0x004d8663;
code_r0x004d86d4:
    if (bVar33 || bVar32) {
      puVar1 = (ushort *)(param_9 + 0x6c);
      bVar32 = 0 < (short)-(*puVar1 & 3);
      *puVar1 = *puVar1 + (ushort)bVar32 * -(*puVar1 & 3);
      goto code_r0x004d873e;
    }
    puVar1 = (ushort *)(unaff_EDI + (int)pbVar28 * 2 + 0x72);
    sVar6 = ((ushort)pbVar16 & 3) - (*puVar1 & 3);
    *puVar1 = *puVar1 + (ushort)(0 < sVar6) * sVar6;
    bVar14 = (byte)pbVar29;
    pbVar18 = param_9;
    pbVar22 = param_18;
    if (0x5e < bVar14) {
      pbVar29 = param_26;
      pbVar18 = param_25;
      param_8 = param_24;
      param_7 = param_23;
      pbVar28 = pbVar9;
      pbVar16 = pbVar8;
      pbVar22 = pbVar31;
    }
    param_25._3_1_ = (byte)pbVar29;
    param_24._0_1_ = (byte)((uint)param_8 >> 8);
    if (bVar14 != 0x5f) {
      param_7 = (byte *)CONCAT22((short)((uint)param_7 >> 0x10),
                                 CONCAT11((char)((uint)param_7 >> 8) - *pbVar16,(char)param_7));
      *pbVar29 = *pbVar29 + param_25._3_1_;
      *pbVar29 = *pbVar29 + param_25._3_1_;
      *pbVar29 = *pbVar29 + param_25._3_1_;
      *pbVar29 = *pbVar29 + param_25._3_1_;
      *pbVar29 = *pbVar29 + param_25._3_1_;
      *pbVar29 = *pbVar29 + param_25._3_1_;
      *pbVar29 = *pbVar29 + param_25._3_1_;
      *pbVar29 = *pbVar29 + (byte)param_24;
      *pbVar29 = *pbVar29 + param_25._3_1_;
      *pbVar29 = *pbVar29 + param_25._3_1_;
      *pbVar22 = *pbVar22 + (byte)param_24;
      *pbVar29 = *pbVar29 + param_25._3_1_;
    }
    param_22._3_1_ = (char)param_7;
    *(char *)((int)pbVar29 * 2) = *(char *)((int)pbVar29 * 2) + param_22._3_1_;
    *pbVar29 = *pbVar29 + param_25._3_1_;
    *pbVar29 = *pbVar29 + param_25._3_1_;
    *pbVar29 = *pbVar29 + param_25._3_1_;
    *pbVar29 = *pbVar29 + param_25._3_1_;
    *pbVar29 = *pbVar29 + param_25._3_1_;
    param_24._3_1_ = (byte)pbVar18;
    *param_7 = *param_7 + param_24._3_1_;
    *pbVar29 = *pbVar29 + param_25._3_1_;
    *param_7 = *param_7 + param_24._3_1_;
    *pbVar29 = *pbVar29 + param_25._3_1_;
    *pbVar29 = *pbVar29 + param_22._3_1_;
    param_24._3_1_ = param_24._3_1_ & *pbVar28;
    param_9 = (byte *)CONCAT31((int3)((uint)pbVar18 >> 8),param_24._3_1_);
    *(byte **)pbVar29 = pbVar29 + *(int *)pbVar29;
    param_26._0_1_ = (char)((uint)pbVar29 >> 8);
    param_26._1_2_ = (undefined2)((uint)pbVar29 >> 0x10);
    param_25._0_1_ = (char)((uint)pbVar18 >> 8);
    param_25._1_2_ = (undefined2)((uint)pbVar18 >> 0x10);
    param_23._3_1_ = (char)param_8;
    param_24._1_2_ = (undefined2)((uint)param_8 >> 0x10);
    param_23._0_1_ = (byte)((uint)param_7 >> 8);
    param_23._1_2_ = (undefined2)((uint)param_7 >> 0x10);
    uStack00000047 = SUB41(pbVar28,0);
    uStack00000048 = (undefined1)((uint)pbVar28 >> 8);
    uStack00000049 = (undefined1)((uint)pbVar28 >> 0x10);
    uStack0000004a = (undefined1)((uint)pbVar28 >> 0x18);
    uStack00000043 = SUB41(pbVar16,0);
    bStack00000044 = (byte)((uint)pbVar16 >> 8);
    uStack00000045 = (undefined1)((uint)pbVar16 >> 0x10);
    uStack00000046 = (undefined1)((uint)pbVar16 >> 0x18);
    param_18._3_1_ = SUB41(pbVar22,0);
    uStack00000040 = (undefined1)((uint)pbVar22 >> 8);
    uStack00000041 = (undefined1)((uint)pbVar22 >> 0x10);
    uStack00000042 = (undefined1)((uint)pbVar22 >> 0x18);
    param_7[0x74] = param_7[0x74] + (byte)param_24;
    bVar11 = param_8[in_FS_OFFSET];
    bVar14 = (byte)param_23 - bVar11;
    out(*pbVar16,(short)param_8);
    if ((byte)param_23 == bVar11) {
      if (SBORROW1((byte)param_23,bVar11)) goto code_r0x004d8817;
      out(pbVar16[1],(short)param_8);
      puVar1 = (ushort *)(pbVar22 + (int)param_7 * 2 + 0x62);
      sVar6 = ((short)(pbVar16 + 1) + 1U & 3) - (*puVar1 & 3);
      *puVar1 = *puVar1 + (ushort)(0 < sVar6) * sVar6;
      goto code_r0x004d87a7;
    }
    if (bVar11 <= (byte)param_23) {
      *pbVar29 = *pbVar29 + (byte)param_23;
      *pbVar29 = *pbVar29 + param_25._3_1_;
      pbVar29 = pbVar29 + *(int *)pbVar29;
      *pbVar29 = *pbVar29 + (char)pbVar29;
      *pbVar29 = *pbVar29 + param_23._3_1_;
      goto code_r0x004d8817;
    }
    *pbVar29 = *pbVar29 + param_25._3_1_;
    *pbVar29 = *pbVar29 + param_25._3_1_;
    *pbVar29 = *pbVar29 + param_25._3_1_;
    *param_8 = *param_8 + param_25._3_1_;
    *pbVar29 = *pbVar29 + param_25._3_1_;
    *param_8 = *param_8 + param_25._3_1_;
    *pbVar29 = *pbVar29 + param_25._3_1_;
    pbVar29[0x1004d8a] = pbVar29[0x1004d8a] + param_25._3_1_;
    pcVar17 = (char *)((int)pbVar29 * 2 + 0x3a647473);
    *pcVar17 = *pcVar17 + param_23._3_1_;
    bVar32 = (byte)param_24 == pbVar29[0x61];
code_r0x004d886b:
    uVar26 = (ushort)pbVar28;
    pbVar31 = (byte *)((longlong)*(int *)(param_8 + 0x3c) * 0x736e6f63);
    bVar33 = (longlong)(int)pbVar31 != (longlong)*(int *)(param_8 + 0x3c) * 0x736e6f63;
    if (!bVar32) {
      uVar26 = 0;
code_r0x004d887b:
      out(*pbVar31,(short)param_8);
      param_18._3_1_ = 0x61;
      if ((char)pbVar29 == 'c') goto LAB_004d88f8;
      bVar33 = (byte)((uint)param_7 >> 8) < *param_8;
    }
    puVar1 = (ushort *)(pbVar29 + 0x61);
    sVar6 = (uVar26 & 3) - (*puVar1 & 3);
    *puVar1 = *puVar1 + (ushort)(0 < sVar6) * sVar6;
    if (bVar33) {
LAB_004d88f8:
      FUN_004d1114((undefined4 *)
                   (CONCAT13(uStack00000046,
                             CONCAT12(uStack00000045,CONCAT11(bStack00000044,uStack00000043))) +
                   -0xc),CONCAT13(uStack0000004a,
                                  CONCAT12(uStack00000049,CONCAT11(uStack00000048,uStack00000047))))
      ;
      return;
    }
    if (0 < sVar6) {
      halt_baddata();
    }
    param_7 = (byte *)((uint)(byte)param_23 << 8);
    param_8 = (byte *)CONCAT22(param_24._1_2_,CONCAT11((byte)param_24,param_23._3_1_));
    pbVar29 = (byte *)(uint)param_25._3_1_;
  }
  if ((char)pbVar29 == 's') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar14 = *param_8;
  uVar7 = (uint)param_7 >> 8;
  puVar5 = (undefined4 *)CONCAT31((undefined3)param_12,param_11._3_1_);
  param_7 = (byte *)CONCAT22(param_15._1_2_,CONCAT11(param_15._0_1_,param_14._3_1_));
  uVar23 = CONCAT11((char)param_16,param_15._3_1_);
  param_9 = (byte *)CONCAT22(param_17._1_2_,CONCAT11((char)param_17,param_16._3_1_));
  pbVar29 = (byte *)CONCAT13(param_18._2_1_,
                             CONCAT12(param_18._1_1_,CONCAT11(param_18._0_1_,param_17._3_1_)));
  uVar12 = in(uVar23);
  *(undefined1 *)CONCAT31(param_11._0_3_,param_10._3_1_) = uVar12;
  uVar12 = in(uVar23);
  ((undefined1 *)CONCAT31(param_11._0_3_,param_10._3_1_))[1] = uVar12;
  out(*puVar5,uVar23);
  puVar1 = (ushort *)(param_9 + 0x74);
  sVar6 = ((short)&param_18 + 3U & 3) - (*puVar1 & 3);
  *puVar1 = *puVar1 + (ushort)(0 < sVar6) * sVar6;
  pbVar16 = (byte *)(puVar5 + 2);
  out(puVar5[1],uVar23);
  if ((byte)uVar7 < bVar14) {
code_r0x004d88f1:
    FUN_004d109c((undefined4 *)
                 CONCAT13(uStack00000046,
                          CONCAT12(uStack00000045,CONCAT11(bStack00000044,uStack00000043))),
                 CONCAT13(uStack0000004a,
                          CONCAT12(uStack00000049,CONCAT11(uStack00000048,uStack00000047))));
    return;
  }
  puVar1 = (ushort *)(pbVar29 + 0x61);
  sVar6 = ((byte)((uint)param_12 >> 0x18) & 3) - (*puVar1 & 3);
  *puVar1 = *puVar1 + (ushort)(0 < sVar6) * sVar6;
code_r0x004d88ba:
  bVar14 = (byte)((uint)param_7 >> 8);
  *pbVar16 = *pbVar16 & bVar14;
  *pbVar16 = *pbVar16 & bVar14;
  cVar15 = (char)pbVar29;
  *pbVar29 = *pbVar29 + cVar15;
  *pbVar29 = *pbVar29 + cVar15;
  *pbVar29 = *pbVar29 + cVar15;
  *pbVar29 = *pbVar29 + cVar15;
  *pbVar29 = *pbVar29 + cVar15;
  *(undefined2 *)((int)pbVar29 * 3) = in_DS;
  *pbVar29 = *pbVar29 + (char)param_9;
  *pbVar29 = *pbVar29 + cVar15;
  *pbVar29 = *pbVar29 + cVar15;
  *pbVar29 = *pbVar29 + cVar15;
  param_7[-0x4bfbdbbc] = param_7[-0x4bfbdbbc] + cVar15;
  FUN_004d19d4((undefined4 *)
               CONCAT13(uStack00000046,
                        CONCAT12(uStack00000045,CONCAT11(bStack00000044,uStack00000043))),
               CONCAT13(uStack0000004a,
                        CONCAT12(uStack00000049,CONCAT11(uStack00000048,uStack00000047))));
  return;
}

