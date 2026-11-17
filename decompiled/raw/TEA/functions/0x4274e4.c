// name: FUN_004274e4
// address: 0x4274e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Instruction at (ram,0x004275e1) overlaps instruction at (ram,0x004275de)
    */
/* WARNING: Removing unreachable block (ram,0x004275b0) */
/* WARNING: Removing unreachable block (ram,0x0042759a) */
/* WARNING: Removing unreachable block (ram,0x004275af) */

void FUN_004274e4(char *param_1,int param_2,byte param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  char *pcVar5;
  undefined3 uVar10;
  undefined3 uVar11;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined2 uVar12;
  byte *pbVar13;
  int unaff_EBX;
  byte *pbVar14;
  undefined4 *unaff_ESI;
  byte *pbVar15;
  byte *unaff_EDI;
  byte *pbVar16;
  bool bVar17;
  bool bVar18;
  byte *in_stack_ffffbd6b;
  byte *pbStack_4291;
  undefined4 uStack_4289;
  byte *pbStack_4285;
  byte *pbStack_4281;
  byte *pbStack_427d;
  byte *pbStack_4279;
  char cStack_4275;
  char *pcStack_4271;
  undefined1 *puStack_426d;
  byte *pbStack_4261;
  byte *pbStack_425d;
  char cStack_4259;
  char *pcStack_4255;
  char acStack_4224 [16928];
  
  *param_1 = *param_1 + (char)param_1;
  pbVar16 = (byte *)((int)param_1 * 2);
  bVar2 = *pbVar16;
  *pbVar16 = *pbVar16 + param_3;
  pbVar16 = (byte *)&uStack_4289;
  uVar12 = (undefined2)param_2;
  out(*unaff_ESI,uVar12);
  out(*(undefined1 *)(unaff_ESI + 1),uVar12);
  if (unaff_EBX == -1) {
code_r0x0042756d:
    pbVar6 = pbStack_4279;
    pbVar14 = pbStack_4285;
    if (unaff_EDI != (byte *)0xffffffff) {
      uStack_4289 = (byte *)&uStack_4289;
      FUN_004ae93c((int *)pbStack_4281);
      pbVar6 = *(byte **)(*(int *)(pbStack_4281 + 0x90) + 0x168);
      pbVar14 = pbStack_4281;
    }
    if (pbVar6 != (byte *)0x0) {
code_r0x00427598:
      FUN_004a76a8(*(int *)(pbVar14 + 4),0x80,1,(LPARAM)pbVar6);
    }
    pbVar16 = *(byte **)(*(int *)(pbVar14 + 0x90) + 0x16c);
    if (pbVar16 == (byte *)0x0) goto LAB_004275d0;
  }
  else {
    out(*(undefined4 *)((int)unaff_ESI + 5),uVar12);
    bVar3 = in(uVar12);
    *unaff_EDI = bVar3;
    bVar17 = param_2 == -1;
    pcVar5 = pcStack_4271;
    pbVar13 = pbStack_4279;
    pbVar14 = pbStack_427d;
    pbVar15 = uStack_4289;
    if (!CARRY1(bVar2,param_3)) {
      cVar4 = (char)pcStack_4271 - *pcStack_4271;
      pcVar5 = (char *)CONCAT31((int3)((uint)pcStack_4271 >> 8),cVar4);
      *pcVar5 = *pcVar5 + cVar4;
      *(char *)((int)pcVar5 * 2) = *(char *)((int)pcVar5 * 2) + cStack_4275;
      pcStack_4271 = (char *)0x54004285;
      bVar18 = (int)&uStack_4289 + 1 < 0;
      bVar17 = &stack0x00000000 == (undefined1 *)0x4288;
      pbVar16 = (byte *)0x54004285;
      unaff_EDI = pbVar16;
      if (!bVar17) {
        pbVar15 = puStack_426d + 1;
        out(*puStack_426d,(short)pbStack_425d);
        pcVar5 = pcStack_4255;
        pbVar13 = pbStack_425d;
        pbVar14 = pbStack_4261;
        cStack_4275 = cStack_4259;
        goto code_r0x0042751c;
      }
code_r0x0042756b:
      if (bVar18) {
        pbVar14 = pbStack_4261 + 1;
        goto LAB_004275d0;
      }
      goto code_r0x0042756d;
    }
code_r0x0042751c:
    uVar10 = (undefined3)((uint)pbStack_4279 >> 8);
    if (!bVar17) {
      uVar11 = (undefined3)((uint)pcVar5 >> 8);
      cVar4 = (char)pcVar5 - *pcVar5;
      pcVar5 = (char *)CONCAT31(uVar11,cVar4);
      *pcVar5 = *pcVar5 + cVar4;
      *(char *)((int)pcVar5 * 2) = *(char *)((int)pcVar5 * 2) + cStack_4275;
      pbVar6 = (byte *)(CONCAT31(uVar11,cVar4) | 0x85);
      pbVar1 = pbVar13 + (int)pbVar6 * 2 + 0x76;
      *pbVar1 = *pbVar1 + (char)(pbVar13 + 1);
      if (*pbVar1 != 0) {
        uVar12 = SUB42(pbVar13 + 1,0);
        out(*(undefined4 *)pbVar15,uVar12);
        out(pbVar15[4],uVar12);
        if (pbVar16 != (byte *)0xffffffff) {
          pcVar5 = (char *)CONCAT31(uVar10,(char)pbStack_4279 - *pbStack_4279);
          pbVar13 = pbStack_4281;
          pbVar14 = pbStack_4285;
          pbVar15 = pbStack_4291;
          cStack_4275 = (char)pbStack_427d;
          goto code_r0x0042753e;
        }
        pbStack_4279[4] = pbStack_4279[4] + (char)pbStack_4281;
        pbVar16 = pbStack_4279;
        goto code_r0x00427561;
      }
      *(int *)pbVar6 = *(int *)pbVar6 + 1;
      *pbVar6 = *pbVar6 | (byte)pbVar6;
      goto code_r0x00427598;
    }
code_r0x0042753e:
    *pcVar5 = *pcVar5 + (char)pcVar5;
    *(char *)((int)pcVar5 * 2) = *(char *)((int)pcVar5 * 2) + cStack_4275;
    bVar2 = *pbVar15;
    pbVar16 = (byte *)CONCAT31((int3)((uint)pcVar5 >> 8),bVar2);
    if ((*pbVar13 & bVar2) != 0) {
      cVar4 = (char)pbStack_4279 - *pbStack_4279;
      pbVar16 = (byte *)CONCAT31(uVar10,cVar4);
      *pbVar16 = *pbVar16 + cVar4;
      in_stack_ffffbd6b = pbVar14;
code_r0x00427561:
      *(char *)((int)pbVar16 * 2) = *(char *)((int)pbVar16 * 2) + (char)pbStack_427d;
      in_stack_ffffbd6b[0x42] = in_stack_ffffbd6b[0x42] ^ (byte)((uint)pbStack_4285 >> 8);
      pcVar5 = acStack_4224 + (int)pbStack_4281 * 2;
      *pcVar5 = *pcVar5 + (char)pbStack_4281;
      bVar18 = *pcVar5 < '\0';
      pbStack_4261 = pbStack_4285;
      unaff_EDI = in_stack_ffffbd6b;
      goto code_r0x0042756b;
    }
    *pbVar16 = *pbVar16;
    pbVar14[-0x17affbbd] = pbVar14[-0x17affbbd] + cStack_4275;
    *pbVar16 = *pbVar16 | bVar2;
    pbVar16 = pbVar14;
  }
  FUN_004a76a8(*(int *)(pbVar14 + 4),0x80,0,(LPARAM)pbVar16);
LAB_004275d0:
  (**(code **)(**(int **)(pbVar14 + 0x54) + 4))();
  iVar7 = *(int *)(*(int *)(pbVar14 + 0x50) + 8);
  (**(code **)(**(int **)(pbVar14 + 0x54) + 0x24))();
  *(undefined4 *)(iVar7 + 0xc) = 1;
  *(undefined4 *)(iVar7 + 8) = 1;
  iVar7 = (**(code **)(*(int *)(pbVar14 + 0x35) + 0x48))();
  *(int *)(pbVar14 + 0x68) = iVar7;
  (**(code **)(*(int *)(iVar7 + 8) + 0x10))();
  pbVar14[0x6c] = 0;
  pbVar14[0x6d] = 0;
  pbVar14[0x6e] = 0;
  pbVar14[0x6f] = 0;
  iVar7 = GetSystemMetrics(2);
  iVar8 = GetSystemMetrics(3);
  iVar7 = iVar7 + iVar8;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 3;
  }
  *(int *)(pbVar14 + 0x9c) = iVar7 >> 2;
  pbVar16 = pbVar14;
  uVar9 = (**(code **)(*(int *)(pbVar14 + 0x35) + 0x44))();
  (**(code **)(*(int *)(pbVar14 + 0x35) + 0x50))(uVar9,*(int *)(pbVar14 + 0x35),pbVar16,pbVar14);
  return;
}

