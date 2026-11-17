// name: FUN_00462d9c
// address: 0x462d9c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00462d9c(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_3c;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x4fb734);
  *(undefined4 *)(param_1 + 8) = 0;
  iVar3 = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    uVar1 = *(uint *)(*(int *)(param_2 + 8) + -4);
    piVar4 = FUN_004cf7b0(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar4 + 3;
    FUN_004dc7d4(*(undefined4 **)(param_1 + 8),*(undefined4 **)(param_2 + 8),uVar1);
  }
  else {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar4 != &DAT_00513d58) {
      *piVar4 = *piVar4 + 1;
    }
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_004cc3c4((int *)(param_1 + 0x20),0x10,4,1,FUN_00462d44);
  FUN_004cc3c4((int *)(param_1 + 0x60),0x10,4,1,FUN_00462d44);
  FUN_004cc3c4((int *)(param_1 + 0xa0),0x10,4,1,FUN_00462d44);
  FUN_004cc3c4((int *)(param_1 + 0xf0),0x10,4,1,FUN_00462d44);
  puVar2 = FUN_00407734((uint *)(s_ViewWindowX_004fb408 + 0xb));
  *(undefined4 **)(param_1 + 0x140) = puVar2;
  iVar3 = FUN_004cc0f0();
  if (iVar3 != 0) {
    FUN_004649b0((int)local_14);
    FUN_00437fc4(iVar3,(int)local_14);
  }
  *(int *)(param_1 + 0x144) = iVar3;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar4 = (int *)(local_c + -0xc);
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
      if (iVar3 != 0) goto LAB_00462fc9;
    }
    FUN_004cc0bc();
    local_c = 0;
  }
LAB_00462fc9:
  FUN_004cf628(param_1 + 0x148,(uint *)s_Nobody_004fb484);
  FUN_004cf628(param_1 + 0x158,(uint *)s_Nobody_004fb484);
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *in_FS_OFFSET = local_3c;
  return param_1;
}

