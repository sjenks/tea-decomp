// name: FUN_0042c290
// address: 0x42c290
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Instruction at (ram,0x0042c2cd) overlaps instruction at (ram,0x0042c2cb)
    */
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void FUN_0042c290(char *param_1,byte *param_2,char param_3)

{
  int *piVar1;
  undefined6 uVar2;
  char *pcVar3;
  byte *pbVar4;
  uint unaff_EBX;
  undefined4 uVar5;
  char *pcVar6;
  int unaff_EBP;
  undefined4 uVar7;
  char *pcVar8;
  char *pcVar9;
  int unaff_EDI;
  undefined4 *in_FS_OFFSET;
  bool bVar10;
  
  *param_1 = *param_1 + (char)param_1;
  *(char *)((int)param_1 * 2) = *(char *)((int)param_1 * 2) + param_3;
  uVar2 = *(undefined6 *)param_2;
  pcVar3 = (char *)uVar2;
  *(int *)(param_1 + -4) = unaff_EDI + -1;
  bVar10 = (byte)(unaff_EBX >> 8) < *param_2;
  *(char **)(param_1 + -9) = param_1 + -5;
  if (bVar10) {
    uVar7 = *(undefined4 *)(param_1 + 0x1f);
    uVar5 = *(undefined4 *)(param_1 + 0x27);
    pbVar4 = *(byte **)(param_1 + 0x33);
    if (bVar10) {
      *pbVar4 = *pbVar4 | (byte)pbVar4;
    }
    pcVar8 = param_1 + 0x33;
    pcVar9 = param_1 + 0x33;
    *(undefined4 *)(param_1 + 0x33) = uVar7;
    *(undefined4 *)(param_1 + 0xb) = uVar5;
    unaff_EBX = *(uint *)(param_1 + 0x3f);
    param_1[7] = -0x3c;
    param_1[8] = -0x3e;
    param_1[9] = 'B';
    param_1[10] = '\0';
    FUN_00467ba8(0x47c388);
    param_1[0x2b] = '\x04';
    param_1[0x2c] = '\0';
    param_1[0x2d] = '\0';
    param_1[0x2e] = '\0';
    if (*(int *)(param_1 + 0x3b) == 0) goto LAB_0042c3b1;
    param_1[0x1f] = '\b';
    param_1[0x20] = '\0';
    *(undefined ***)(*(int *)(param_1 + 0x3b) + 0x18) = &PTR_FUN_0047c3a8;
    *(undefined ***)(*(int *)(param_1 + 0x3b) + 4) = &PTR_LAB_0047c420;
    **(undefined4 **)(*(int *)(param_1 + 0x3b) + 0x10) = &PTR_LAB_0047c440;
    **(undefined4 **)(*(int *)(param_1 + 0x3b) + 0x14) = &PTR_LAB_0047c44c;
    *(undefined ***)(**(int **)(param_1 + 0x3b) + 8) = &PTR_LAB_0047c458;
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(*(int *)(param_1 + 0x3b) + 0x4e);
    param_1[3] = '#';
    param_1[4] = -0x3d;
    param_1[5] = 'B';
    param_1[6] = '\0';
    FUN_0045681c();
    piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x3b) + 0x10) + -4);
    *piVar1 = *piVar1 + -5;
    *(int *)(**(int **)(param_1 + 0x3b) + -4) = *(int *)(**(int **)(param_1 + 0x3b) + -4) + -5;
    *(int *)(param_1 + 0x2b) = *(int *)(param_1 + 0x2b) + -4;
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_1 + 0x3b);
    param_1[-0xffffffff00000001] = 'E';
    param_1[0] = -0x3d;
    param_1[1] = 'B';
    param_1[2] = '\0';
    FUN_00425710(*(int **)(param_1 + 3),*(uint *)(param_1 + 7));
    pcVar6 = param_1 + 0xb;
    piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x3b) + 0x10) + -4);
    *piVar1 = *piVar1 + 5;
    *(int *)(**(int **)(param_1 + 0x3b) + -4) = *(int *)(**(int **)(param_1 + 0x3b) + -4) + 5;
    pcVar3 = param_1 + 0xb;
    pcVar9 = param_1 + 0x33;
    if ((unaff_EBX & 2) != 0) goto code_r0x0042c360;
  }
  else {
    pcVar8 = (char *)(unaff_EBP + -2);
    *(int *)(unaff_EBX + 0x6a02f86d) = *(int *)(unaff_EBX + 0x6a02f86d) + 1;
    *(char *)(unaff_EBX + 0xc2830855) = *(char *)(unaff_EBX + 0xc2830855) + param_3;
    *pcVar3 = *pcVar3 + (char)uVar2;
    pcVar3 = param_1 + -9;
code_r0x0042c360:
    pcVar6 = pcVar3;
    piVar1 = (int *)(*(int *)(*(int *)(pcVar8 + 8) + 0x10) + -4);
    *piVar1 = *piVar1 + 0x96;
    *(int *)(pcVar8 + -8) = *(int *)(pcVar8 + -8) + -2;
    *(undefined4 *)(pcVar6 + -4) = 0;
    *(int *)(pcVar6 + -8) = *(int *)(pcVar8 + 8) + 0x62;
    *(undefined4 *)(pcVar6 + -0xc) = 0x42c37f;
    FUN_00435f74(*(undefined4 **)(pcVar6 + -8),*(uint *)(pcVar6 + -4));
    piVar1 = (int *)(*(int *)(*(int *)(pcVar8 + 8) + 0x10) + -4);
    *piVar1 = *piVar1 + -0x96;
    *(int *)(pcVar8 + -8) = *(int *)(pcVar8 + -8) + -1;
    *(undefined4 *)(pcVar6 + -4) = 0;
    *(int *)(pcVar6 + -8) = *(int *)(pcVar8 + 8) + 0x5a;
    *(undefined4 *)(pcVar6 + -0xc) = 0x42c3a0;
    FUN_0041e99c(*(undefined4 **)(pcVar6 + -8),pcVar6[-4]);
    pcVar9 = pcVar8;
  }
  if ((unaff_EBX & 1) != 0) {
    *(undefined4 *)(pcVar6 + -4) = *(undefined4 *)(pcVar9 + 8);
    *(undefined4 *)(pcVar6 + -8) = 0x42c3b0;
    FUN_0045680c();
  }
LAB_0042c3b1:
  *in_FS_OFFSET = *(undefined4 *)(pcVar9 + -0x24);
  return;
}

