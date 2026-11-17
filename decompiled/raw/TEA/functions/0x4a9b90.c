// name: FUN_004a9b90
// address: 0x4a9b90
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004a9b90(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_7c;
  
  FUN_004dce64(0x50ba88);
  if (*(int *)(param_1 + 0x1f) == 0) {
    (**(code **)(*(int *)(param_1 + 0x1b) + 0x3c))();
  }
  (**(code **)(*(int *)(param_1 + 0x1b) + 0x40))();
  *in_FS_OFFSET = local_7c;
  return 0;
}

