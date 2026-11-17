// name: FUN_00438e2c
// address: 0x438e2c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00438e2c(int param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00467ba8(0x47e824);
  if (*(int *)(param_1 + 100) != 0) {
    if (*(int *)(**(int **)(param_1 + 100) + 0xc) == 0) {
      if (*(int *)(param_1 + 100) != 0) {
        (*(code *)**(undefined4 **)(*(int *)(param_1 + 100) + 0xc))();
      }
    }
    else {
      FUN_00438338(**(int **)(param_1 + 100),0x10,0,0);
    }
  }
  *(undefined4 *)(param_1 + 100) = param_2;
  if ((*(int *)(param_1 + 100) != 0) && (*(int *)(**(int **)(param_1 + 100) + 0xc) == 0)) {
    puVar1 = (uint *)(**(int **)(param_1 + 100) + 0x18);
    *puVar1 = *puVar1 | 0x8000000;
    (**(code **)(*(int *)(**(int **)(param_1 + 100) + 8) + 0x10))();
  }
  *in_FS_OFFSET = local_30;
  return;
}

