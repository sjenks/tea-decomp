// name: FUN_00435880
// address: 0x435880
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00435880(int param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x4f36a4);
  iVar2 = FUN_004cf628((int)local_14,param_2);
  iVar3 = FUN_004d573c(iVar2,param_3);
  *(undefined4 *)(param_1 + 8) = 0;
  iVar2 = *(int *)(*(int *)(iVar3 + 8) + -0xc);
  if (iVar2 == -1 || iVar2 + 1 < 0) {
    uVar1 = *(uint *)(*(int *)(iVar3 + 8) + -4);
    piVar4 = FUN_004cf7b0(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar4 + 3;
    FUN_004dc7d4(*(undefined4 **)(param_1 + 8),*(undefined4 **)(iVar3 + 8),uVar1);
  }
  else {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar3 + 8);
    piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar4 != &DAT_00513d58) {
      *piVar4 = *piVar4 + 1;
    }
  }
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar4 = (int *)(local_c + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar2 = *piVar4 + 1;
      }
      if (iVar2 != 0) goto LAB_004359fe;
    }
    FUN_004cc0bc();
  }
LAB_004359fe:
  *in_FS_OFFSET = local_38;
  return param_1;
}

