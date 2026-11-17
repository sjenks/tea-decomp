// name: FUN_00492778
// address: 0x492778
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00492778(int param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_004dce64(0x506e70);
  if (*(undefined4 **)(param_1 + 0x37) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x37))();
  }
  *(undefined4 *)(param_1 + 0x37) = param_2;
  *in_FS_OFFSET = local_30;
  return;
}

