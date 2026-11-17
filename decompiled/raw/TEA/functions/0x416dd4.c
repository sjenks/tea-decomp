// name: FUN_00416dd4
// address: 0x416dd4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00416dd4(int param_1,int param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  int iVar5;
  undefined4 local_60;
  undefined1 local_3c [8];
  int local_34;
  int local_2c [2];
  undefined1 local_24 [8];
  undefined4 *local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x4ede74);
  FUN_004cf628((int)local_14,*(uint **)(param_2 + 0x50));
  uVar1 = *(uint *)(local_c + -4);
  pcVar2 = FUN_004dc9f4(param_3);
  FUN_004cfad4((int)local_14,uVar1,0,(uint)param_3,(uint)pcVar2,0,(uint)pcVar2);
  FUN_004cf628((int)local_24,param_4);
  iVar5 = 0;
  iVar4 = 0;
  FUN_004649b0((int)local_3c);
  FUN_0044e83c(local_2c,(int)local_3c,iVar4,iVar5);
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar3 = (int *)(local_34 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_00416f01;
    }
    FUN_004cc0bc();
    local_34 = 0;
  }
LAB_00416f01:
  FUN_0044e94c((int)local_2c,(int)local_14,(int)local_24);
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_1c[-3] == -1 || local_1c[-3] + 1 < 0) {
    uVar1 = local_1c[-1];
    piVar3 = FUN_004cf7b0(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar3 + 3;
    FUN_004dc7d4(*(undefined4 **)(param_1 + 8),local_1c,uVar1);
  }
  else {
    *(undefined4 **)(param_1 + 8) = local_1c;
    piVar3 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar3 != &DAT_00513d58) {
      *piVar3 = *piVar3 + 1;
    }
  }
  FUN_0044e920((int)local_2c,2);
  if (local_1c != (undefined4 *)0x0) {
    if (local_1c[-3] != -1) {
      piVar3 = local_1c + -3;
      if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_004170cc;
    }
    FUN_004cc0bc();
    local_1c = (undefined4 *)0x0;
  }
LAB_004170cc:
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_0041715f;
    }
    FUN_004cc0bc();
  }
LAB_0041715f:
  *in_FS_OFFSET = local_60;
  return param_1;
}

