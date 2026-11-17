// name: FUN_004141fc
// address: 0x4141fc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004141fc(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_004dce64(0x4ed6c0);
  if (param_1[0x16] != 0) {
    (*(code *)**(undefined4 **)(param_1[0x16] + 0xc))();
  }
  param_1[0x16] = 0;
  param_1[0x10] = 2;
  (**(code **)(*(int *)(*param_1 + 8) + 100))();
  *in_FS_OFFSET = local_30;
  return;
}

