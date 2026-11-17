// name: FUN_00414108
// address: 0x414108
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Instruction at (ram,0x0041419c) overlaps instruction at (ram,0x0041419b)
    */

void FUN_00414108(char *param_1,undefined4 param_2,char param_3)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar6;
  byte bVar7;
  undefined2 uVar8;
  char *extraout_EDX;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined1 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined1 *unaff_EDI;
  undefined4 *in_FS_OFFSET;
  bool bVar12;
  byte bVar13;
  int in_stack_00000000;
  byte *pbVar5;
  
  bVar13 = 0;
  *param_1 = *param_1 + (char)param_1;
  *(char *)((int)param_1 * 2) = *(char *)((int)param_1 * 2) + param_3;
  pbVar4 = (byte *)func_0x54418148();
  puVar9 = (undefined1 *)(unaff_ESI + 5 + (uint)bVar13 * -8);
  uVar8 = SUB42(extraout_EDX,0);
  out(*(undefined4 *)(unaff_ESI + 1),uVar8);
  puVar10 = (undefined4 *)(puVar9 + (uint)bVar13 * -2 + 1);
  out(*puVar9,uVar8);
  bVar7 = (byte)extraout_EDX;
  if ((undefined4 *)(unaff_ESI + 1) == (undefined4 *)0x0) {
code_r0x00414135:
    pbVar4[-0x1374aa70] = pbVar4[-0x1374aa70] + bVar7;
    unaff_EBX = *(int **)(in_stack_00000000 + 8);
    FUN_004dce64(0x4ed690);
    bVar12 = unaff_EBX[0x15] == 0;
    unaff_EBP = in_stack_00000000;
code_r0x00414155:
    if ((bVar12) || (unaff_EBX[0x16] != 0)) goto LAB_004141ca;
    iVar6 = FUN_004cc0f0();
    *(int *)(unaff_EBP + -4) = iVar6;
    if (iVar6 == 0) {
      piVar11 = *(int **)(unaff_EBP + -4);
    }
    else {
      *(undefined2 *)(unaff_EBP + -0x18) = 0x14;
      FUN_0049f628(*(int **)(unaff_EBP + -4),0,*(undefined4 *)(*unaff_EBX + 0x14),'\x01',0);
      *(undefined2 *)(unaff_EBP + -0x18) = 8;
      piVar11 = *(int **)(unaff_EBP + -4);
    }
    unaff_EBX[0x16] = (int)piVar11;
  }
  else {
    bVar3 = (char)pbVar4 - *pbVar4;
    pbVar5 = (byte *)CONCAT31((int3)((uint)pbVar4 >> 8),bVar3);
    *pbVar5 = *pbVar5 | bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    pbVar5[(int)extraout_EDX] = pbVar5[(int)extraout_EDX] + bVar3;
    *(char *)((int)unaff_EDI * 2) = *(char *)((int)unaff_EDI * 2) + (char)((uint)pbVar4 >> 8);
    *extraout_EDX = *extraout_EDX + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    pbVar4 = &stack0x0000006f + (int)extraout_EDX * 2;
    bVar3 = *pbVar4;
    bVar1 = *pbVar4;
    *pbVar4 = *pbVar4 + bVar7;
    bVar12 = *pbVar4 == 0;
    piVar11 = puVar10 + (uint)bVar13 * -2 + 1;
    out(*puVar10,uVar8);
    uVar2 = in(uVar8);
    *unaff_EDI = uVar2;
    if (!bVar12) {
      pbVar4 = pbVar5;
      if (!SCARRY1(bVar1,bVar7)) goto code_r0x00414135;
      goto code_r0x00414155;
    }
    if (!CARRY1(bVar3,bVar7)) {
      return;
    }
  }
  FUN_004a7910(*piVar11,2);
  (**(code **)(*(int *)(*(int *)unaff_EBX[0x16] + 8) + 0x10))();
  FUN_00417760(unaff_EBX,*(HWND *)(*(int *)unaff_EBX[0x16] + 0xc));
LAB_004141ca:
  (**(code **)(*(int *)(*unaff_EBX + 8) + 100))();
  BringWindowToTop(*(HWND *)(*unaff_EBX + 0xc));
  unaff_EBX[0x10] = 1;
  *in_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x28);
  return;
}

