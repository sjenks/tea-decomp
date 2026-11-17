// name: FUN_0042dc98
// address: 0x42dc98
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042dc98(int param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00455f04(0x46aa48);
  if (*(int *)(param_1 + 100) != 0) {
    if (*(int *)(**(int **)(param_1 + 100) + 0xc) == 0) {
      if (*(int *)(param_1 + 100) != 0) {
        (*(code *)**(undefined4 **)(*(int *)(param_1 + 100) + 0xc))();
      }
    }
    else {
      FUN_0042d1a4(**(int **)(param_1 + 100),0x10,0,0);
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

