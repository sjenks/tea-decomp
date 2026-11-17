// name: FUN_00401d10
// address: 0x401d10
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00401d10(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_24 [8];
  int *local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x4ea534);
  iVar2 = FUN_004cf628((int)local_14,param_3);
  local_1c = (int *)0x0;
  iVar4 = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (iVar4 == -1 || iVar4 + 1 < 0) {
    uVar1 = *(uint *)(*(int *)(param_2 + 8) + -4);
    local_1c = FUN_004cf7b0(local_24,uVar1,uVar1);
    local_1c = local_1c + 3;
    FUN_004dc7d4(local_1c,*(undefined4 **)(param_2 + 8),uVar1);
  }
  else {
    local_1c = *(int **)(param_2 + 8);
    piVar3 = local_1c + -3;
    if (piVar3 != &DAT_00513d58) {
      *piVar3 = *piVar3 + 1;
    }
  }
  iVar2 = FUN_004d573c((int)local_24,iVar2);
  *(undefined4 *)(param_1 + 8) = 0;
  iVar4 = *(int *)(*(int *)(iVar2 + 8) + -0xc);
  if (iVar4 == -1 || iVar4 + 1 < 0) {
    uVar1 = *(uint *)(*(int *)(iVar2 + 8) + -4);
    piVar3 = FUN_004cf7b0(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar3 + 3;
    FUN_004dc7d4(*(undefined4 **)(param_1 + 8),*(undefined4 **)(iVar2 + 8),uVar1);
  }
  else {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar2 + 8);
    piVar3 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar3 != &DAT_00513d58) {
      *piVar3 = *piVar3 + 1;
    }
  }
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
      if (iVar4 != 0) goto LAB_00401fb7;
    }
    FUN_004cc0bc();
    local_c = 0;
  }
LAB_00401fb7:
  if (local_1c != (int *)0x0) {
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
      if (iVar4 != 0) goto LAB_00402066;
    }
    FUN_004cc0bc();
  }
LAB_00402066:
  *in_FS_OFFSET = local_48;
  return param_1;
}

