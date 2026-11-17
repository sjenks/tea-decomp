// name: FUN_004a95d8
// address: 0x4a95d8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004a95d8(int param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x2b) != 0) {
    puVar1 = (uint *)(**(int **)(param_1 + 0x2b) + 0x74);
    *puVar1 = *puVar1 & 0xffffffef;
    uVar3 = FUN_004a793c(**(int **)(param_1 + 0x2b));
    if ((uVar3 & 0x40000) != 0) {
      FUN_004a795c(**(int **)(param_1 + 0x2b),uVar3 & 0xfffbffff);
    }
    if (*(int *)(param_1 + 0x31) != 0) {
      if (*(int *)(param_1 + 0x2b) == 0) {
        iVar4 = *(int *)(param_1 + 0x2b);
      }
      else {
        iVar4 = **(int **)(param_1 + 0x2b);
      }
      if (*(int *)(**(int **)(param_1 + 0x31) + 0x14) == iVar4) {
        (**(code **)(*(int *)(**(int **)(param_1 + 0x31) + 8) + 0x34))();
      }
    }
  }
  uVar2 = *(undefined4 *)(param_1 + 0x2b);
  *(undefined4 *)(param_1 + 0x2b) = param_2;
  if (*(int *)(param_1 + 0x2b) != 0) {
    puVar1 = (uint *)(**(int **)(param_1 + 0x2b) + 0x74);
    *puVar1 = *puVar1 | 0x10;
    uVar3 = FUN_004a793c(**(int **)(param_1 + 0x2b));
    if ((uVar3 & 0x40000) == 0) {
      FUN_004a795c(**(int **)(param_1 + 0x2b),uVar3 | 0x40000);
    }
    if (((*(int *)(param_1 + 0x31) != 0) && (*(int *)(**(int **)(param_1 + 0x31) + 0x14) == 0)) &&
       (*(int *)(**(int **)(param_1 + 0x2b) + 0xc) != 0)) {
      (**(code **)(*(int *)(**(int **)(param_1 + 0x31) + 8) + 0x34))();
    }
  }
  return uVar2;
}

