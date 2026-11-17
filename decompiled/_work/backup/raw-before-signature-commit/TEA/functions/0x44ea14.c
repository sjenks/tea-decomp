// name: FUN_0044ea14
// address: 0x44ea14
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0044ea14(int param_1,int param_2,int param_3,uint *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  int *local_c;
  
  FUN_004dce64(0x4f7408);
  local_c = (int *)0x0;
  iVar3 = *(int *)(*(int *)(param_3 + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    uVar1 = *(uint *)(*(int *)(param_3 + 8) + -4);
    local_c = FUN_004cf7b0(local_14,uVar1,uVar1);
    local_c = local_c + 3;
    FUN_004dc7d4(local_c,*(undefined4 **)(param_3 + 8),uVar1);
  }
  else {
    local_c = *(int **)(param_3 + 8);
    piVar4 = local_c + -3;
    if (piVar4 != &DAT_00513d58) {
      *piVar4 = *piVar4 + 1;
    }
  }
  uVar2 = FUN_0044e94c(param_1,param_2,(int)local_14);
  FUN_0044efa4((char *)local_c,param_4);
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
      if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_0044eb6e;
    }
    FUN_004cc0bc();
  }
LAB_0044eb6e:
  *in_FS_OFFSET = local_38;
  return uVar2;
}

