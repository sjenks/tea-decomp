// name: FUN_004a819c
// address: 0x4a819c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a819c(int param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_004dce64(0x50b28c);
  if (*(int *)(param_1 + 100) != 0) {
    if (*(int *)(**(int **)(param_1 + 100) + 0xc) == 0) {
      if (*(int *)(param_1 + 100) != 0) {
        (*(code *)**(undefined4 **)(*(int *)(param_1 + 100) + 0xc))();
      }
    }
    else {
      FUN_004a76a8(**(int **)(param_1 + 100),0x10,0,0);
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

