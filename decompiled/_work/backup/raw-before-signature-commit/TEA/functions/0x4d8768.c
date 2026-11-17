// name: FUN_004d8768
// address: 0x4d8768
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004d88ef) overlaps instruction at (ram,0x004d88ee)
    */
/* WARNING: Removing unreachable block (ram,0x004d887a) */

void FUN_004d8768(byte *param_1,byte *param_2,undefined4 param_3,char *param_4,byte *param_5,
                 char *param_6,byte *param_7)

{
  char *pcVar1;
  ushort *puVar2;
  int iVar3;
  undefined1 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  byte bVar7;
  short sVar8;
  undefined4 *puVar9;
  char cVar10;
  byte bVar11;
  int *piVar12;
  byte *pbVar13;
  undefined3 uVar14;
  byte bVar15;
  char *pcVar16;
  char *pcVar17;
  byte bVar19;
  undefined2 uVar18;
  char cVar20;
  byte bVar21;
  char *unaff_EBX;
  ushort uVar22;
  byte *unaff_EBP;
  byte *unaff_ESI;
  char *unaff_EDI;
  undefined2 in_DS;
  int in_FS_OFFSET;
  bool bVar23;
  bool bVar24;
  char *pcStackY_d;
  undefined1 uStackY_9;
  undefined3 uVar25;
  undefined1 in_stack_fffffffb;
  uint uVar26;
  
  uVar26 = 0x3000000;
  bVar19 = (byte)((uint)param_2 >> 8);
  *param_1 = *param_1 + bVar19;
  cVar10 = (char)param_1;
  *param_1 = *param_1 + cVar10;
  *param_1 = *param_1 + cVar10;
  *unaff_EDI = *unaff_EDI + bVar19;
  *param_1 = *param_1 + cVar10;
  cVar20 = (char)unaff_EBX;
  *(char *)((int)param_1 * 2) = *(char *)((int)param_1 * 2) + cVar20;
  *param_1 = *param_1 + cVar10;
  *param_1 = *param_1 + cVar10;
  *param_1 = *param_1 + cVar10;
  *param_1 = *param_1 + cVar10;
  *param_1 = *param_1 + cVar10;
  bVar15 = (byte)param_3;
  *unaff_EBX = *unaff_EBX + bVar15;
  *param_1 = *param_1 + cVar10;
  *unaff_EBX = *unaff_EBX + bVar15;
  *param_1 = *param_1 + cVar10;
  *param_1 = *param_1 + cVar20;
  bVar11 = *unaff_EBP;
  pcVar16 = (char *)CONCAT31((int3)((uint)param_3 >> 8),bVar15 & bVar11);
  *(byte **)param_1 = param_1 + *(int *)param_1;
  unaff_EBX[0x74] = unaff_EBX[0x74] + bVar19;
  bVar7 = param_2[in_FS_OFFSET];
  bVar21 = (byte)((uint)unaff_EBX >> 8);
  uVar18 = SUB42(param_2,0);
  out(*unaff_ESI,uVar18);
  if (bVar21 == bVar7) {
    if (SBORROW1(bVar21,bVar7)) {
code_r0x004d8817:
      cVar10 = (char)param_1;
      *unaff_EBX = *unaff_EBX + cVar10;
      *param_1 = *param_1 + cVar10;
      param_1[0x10004d83] = param_1[0x10004d83] + (char)((uint)pcVar16 >> 8);
      *param_1 = *param_1 + cVar10;
      *unaff_EBX = *unaff_EBX + cVar10;
      *param_1 = *param_1 + cVar10;
      *param_1 = *param_1 + cVar10;
      *param_1 = *param_1 + cVar10;
      *param_1 = *param_1 + cVar10;
      *param_1 = *param_1 + cVar10;
      *param_1 = *param_1 + cVar10;
      *param_1 = *param_1 + cVar10;
      *param_1 = *param_1 + cVar20;
      *param_1 = *param_1 + cVar10;
      *unaff_EBX = *unaff_EBX + cVar10;
      *param_1 = *param_1 + bVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(unaff_ESI[1],uVar18);
    puVar2 = (ushort *)(unaff_EDI + (int)unaff_EBX * 2 + 0x62);
    sVar8 = ((short)(unaff_ESI + 1) + 1U & 3) - (*puVar2 & 3);
    *puVar2 = *puVar2 + (ushort)(0 < sVar8) * sVar8;
    if (-1 < (char)(bVar21 - bVar7)) goto code_r0x004d8817;
    pcVar5 = unaff_EDI + 4;
    uVar6 = in(uVar18);
    *(undefined4 *)unaff_EDI = uVar6;
    _uStackY_9 = (byte *)0x3e7261;
    piVar12 = (int *)CONCAT22((short)((uint)param_1 >> 0x10),
                              CONCAT11((char)((uint)param_1 >> 8) + (bVar15 & bVar11),cVar10));
    LOCK();
    pcVar17 = *(char **)unaff_EBP;
    *(char **)unaff_EBP = pcVar16;
    UNLOCK();
    *(char *)piVar12 = (char)*piVar12 + cVar10;
    *(char *)piVar12 = (char)*piVar12 + cVar10;
    pbVar13 = (byte *)((int)piVar12 + *piVar12);
    bVar11 = (byte)pbVar13;
    *pbVar13 = *pbVar13 + bVar11;
    *pbVar13 = *pbVar13 + bVar11;
    *pbVar13 = *pbVar13 + bVar11;
    *pbVar13 = *pbVar13 + bVar11;
    *pbVar13 = *pbVar13 + bVar11;
    *pbVar13 = *pbVar13 + bVar11;
    *pbVar13 = *pbVar13 + bVar11;
    pcStackY_d = (char *)0x3000000;
    *pbVar13 = *pbVar13 + bVar19;
    *pbVar13 = *pbVar13 + bVar11;
    *pbVar13 = *pbVar13 + bVar11;
    *pcVar5 = *pcVar5 + bVar19;
    *pbVar13 = *pbVar13 + bVar11;
    cVar10 = (char)((uint)pbVar13 >> 8);
    *pbVar13 = *pbVar13 + cVar10;
    *pbVar13 = *pbVar13 + bVar11;
    *pbVar13 = *pbVar13 + bVar11;
    *pbVar13 = *pbVar13 + bVar11;
    *pbVar13 = *pbVar13 + bVar11;
    *pbVar13 = *pbVar13 + bVar11;
    *pbVar13 = *pbVar13 + bVar11;
    uVar14 = (undefined3)((uint)pbVar13 >> 8);
    bVar11 = bVar11 | *pbVar13;
    pbVar13 = (byte *)CONCAT31(uVar14,bVar11);
    *pbVar13 = *pbVar13 + bVar11;
    bVar11 = bVar11 | *pbVar13;
    param_1 = (byte *)CONCAT31(uVar14,bVar11);
    *param_1 = *param_1 + bVar11;
    pcVar16 = pcVar17;
    if (*param_1 == 0) goto code_r0x004d8817;
    unaff_EBP = unaff_EBP + -1;
    uVar22 = (ushort)unaff_EBP;
    *pcVar17 = *pcVar17 + bVar11;
    pcVar1 = (char *)((int)param_1 * 2 + 0x73);
    *pcVar1 = *pcVar1 + cVar10;
    if (*pcVar1 == '\0') {
      unaff_EBX[0x74] = unaff_EBX[0x74] + bVar19;
      bVar24 = bVar21 == param_2[in_FS_OFFSET];
      if (SBORROW1(bVar21,param_2[in_FS_OFFSET])) {
        *param_1 = *param_1 | bVar11;
        *param_1 = *param_1 + bVar11;
        *param_1 = *param_1 + bVar11;
        *param_1 = *param_1 + bVar11;
        iVar3 = CONCAT13(in_stack_fffffffb,0x3e72) + -0x4c;
        uVar25 = (undefined3)iVar3;
        _uStackY_9 = (byte *)CONCAT31(uVar25,0x61);
        in_stack_fffffffb = (undefined1)((uint)iVar3 >> 0x18);
        param_7 = param_1;
        param_4 = unaff_EBX;
        goto code_r0x004d88ba;
      }
      goto code_r0x004d886b;
    }
    bVar11 = *param_2;
    pbVar13 = unaff_ESI + 1;
    out(*unaff_ESI,uVar18);
    if (bVar21 == bVar11) {
      if (!SBORROW1(bVar21,bVar11)) {
        out(*pbVar13,uVar18);
        puVar2 = (ushort *)(&stack0x00000057 + (int)pcVar5);
        sVar8 = ((short)pbVar13 + 1U & 3) - (*puVar2 & 3);
        *puVar2 = *puVar2 + (ushort)(0 < sVar8) * sVar8;
        goto code_r0x004d8817;
      }
      goto code_r0x004d887b;
    }
    if (bVar11 <= bVar21) {
      (**(code **)(param_1 + 0x24448390))();
      goto code_r0x004d88f1;
    }
    pbVar13 = (byte *)(pcVar17 + 0x6e);
    *pbVar13 = *pbVar13 & (byte)((uint)pcVar17 >> 8);
    if (*pbVar13 != 0) goto code_r0x004d88f1;
  }
  else {
    if (bVar7 <= bVar21) {
      *param_1 = *param_1 + bVar21;
      *param_1 = *param_1 + cVar10;
      param_1 = param_1 + *(int *)param_1;
      *param_1 = *param_1 + (char)param_1;
      *param_1 = *param_1 + (char)param_2;
      goto code_r0x004d8817;
    }
    *param_1 = *param_1 + cVar10;
    *param_1 = *param_1 + cVar10;
    *param_1 = *param_1 + cVar10;
    *param_2 = *param_2 + cVar10;
    *param_1 = *param_1 + cVar10;
    *param_2 = *param_2 + cVar10;
    *param_1 = *param_1 + cVar10;
    param_1[0x1004d8a] = param_1[0x1004d8a] + cVar10;
    pcVar17 = (char *)((int)param_1 * 2 + 0x3a647473);
    *pcVar17 = *pcVar17 + (char)param_2;
    bVar24 = bVar19 == param_1[0x61];
    pcStackY_d = pcVar16;
    _uStackY_9 = param_1;
code_r0x004d886b:
    uVar22 = (ushort)unaff_EBP;
    pbVar13 = (byte *)((longlong)*(int *)(param_2 + 0x3c) * 0x736e6f63);
    bVar23 = (longlong)(int)pbVar13 != (longlong)*(int *)(param_2 + 0x3c) * 0x736e6f63;
    if (!bVar24) {
      uVar22 = 0;
code_r0x004d887b:
      out(*pbVar13,uVar18);
      pcStackY_d = (char *)0x2c726100;
      uVar25 = (undefined3)((uint)_uStackY_9 >> 8);
      _uStackY_9 = (byte *)CONCAT31(uVar25,0x73);
      if ((char)param_1 == 'c') goto LAB_004d88f8;
      bVar23 = bVar21 < *param_2;
    }
    puVar2 = (ushort *)(param_1 + 0x61);
    sVar8 = (uVar22 & 3) - (*puVar2 & 3);
    *puVar2 = *puVar2 + (ushort)(0 < sVar8) * sVar8;
    if (bVar23) {
LAB_004d88f8:
      uVar25 = (undefined3)((uint)_uStackY_9 >> 8);
      FUN_004d1114((undefined4 *)(CONCAT13(in_stack_fffffffb,uVar25) + -0xc),0x3000000);
      return;
    }
    param_1 = param_7;
    param_2 = param_5;
    unaff_EBX = param_4;
    if (0 < sVar8) {
      halt_baddata();
    }
  }
  pbVar13 = _uStackY_9;
  if ((char)param_1 == 's') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar11 = *param_2;
  uVar25 = (undefined3)((uint)_uStackY_9 >> 8);
  puVar9 = (undefined4 *)CONCAT13(in_stack_fffffffb,uVar25);
  uVar18 = SUB42(param_5,0);
  uVar4 = in(uVar18);
  *(undefined1 *)CONCAT13(uStackY_9,pcStackY_d._1_3_) = uVar4;
  uVar4 = in(uVar18);
  ((undefined1 *)CONCAT13(uStackY_9,pcStackY_d._1_3_))[1] = uVar4;
  out(*puVar9,uVar18);
  puVar2 = (ushort *)(param_6 + 0x74);
  *puVar2 = *puVar2 + (ushort)(0 < (short)-(*puVar2 & 3)) * -(*puVar2 & 3);
  unaff_ESI = (byte *)(puVar9 + 2);
  out(puVar9[1],uVar18);
  _uStackY_9 = pbVar13;
  if ((byte)((uint)unaff_EBX >> 8) < bVar11) {
code_r0x004d88f1:
    uVar25 = (undefined3)((uint)_uStackY_9 >> 8);
    FUN_004d109c((undefined4 *)CONCAT13(in_stack_fffffffb,uVar25),uVar26);
    return;
  }
  puVar2 = (ushort *)(param_7 + 0x61);
  *puVar2 = *puVar2 + (ushort)(0 < (short)-(*puVar2 & 3)) * -(*puVar2 & 3);
  pcVar17 = param_6;
code_r0x004d88ba:
  bVar11 = (byte)((uint)param_4 >> 8);
  *unaff_ESI = *unaff_ESI & bVar11;
  *unaff_ESI = *unaff_ESI & bVar11;
  cVar10 = (char)param_7;
  *param_7 = *param_7 + cVar10;
  *param_7 = *param_7 + cVar10;
  *param_7 = *param_7 + cVar10;
  *param_7 = *param_7 + cVar10;
  *param_7 = *param_7 + cVar10;
  *(undefined2 *)((int)param_7 * 3) = in_DS;
  *param_7 = *param_7 + (char)pcVar17;
  *param_7 = *param_7 + cVar10;
  *param_7 = *param_7 + cVar10;
  *param_7 = *param_7 + cVar10;
  param_4[-0x4bfbdbbc] = param_4[-0x4bfbdbbc] + cVar10;
  uVar25 = (undefined3)((uint)_uStackY_9 >> 8);
  FUN_004d19d4((undefined4 *)CONCAT13(in_stack_fffffffb,uVar25),0x3000000);
  return;
}

