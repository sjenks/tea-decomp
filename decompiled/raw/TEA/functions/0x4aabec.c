// name: FUN_004aabec
// address: 0x4aabec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004aabec(int param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_004dce64(0x50bcc8);
  if (*(int *)(param_1 + 0x31) != 0) {
    if (*(int *)(**(int **)(param_1 + 0x31) + 0xc) == 0) {
      if (*(int *)(param_1 + 0x31) != 0) {
        (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x31) + 0xc))();
      }
    }
    else {
      FUN_004a76a8(**(int **)(param_1 + 0x31),0x10,0,0);
    }
  }
  *(undefined4 *)(param_1 + 0x31) = param_2;
  if ((((*(int *)(param_1 + 0x31) != 0) && (*(int *)(**(int **)(param_1 + 0x31) + 0xc) == 0)) &&
      (*(int *)(param_1 + 0x2b) != 0)) && (*(int *)(**(int **)(param_1 + 0x2b) + 0xc) != 0)) {
    if (*(int *)(**(int **)(param_1 + 0x31) + 0x14) == 0) {
      (**(code **)(*(int *)(**(int **)(param_1 + 0x31) + 8) + 0x34))();
    }
    FUN_004a7988(**(int **)(param_1 + 0x31),0,0x8000000,0);
    (**(code **)(*(int *)(**(int **)(param_1 + 0x31) + 8) + 0x10))();
  }
  *in_FS_OFFSET = local_30;
  return;
}

