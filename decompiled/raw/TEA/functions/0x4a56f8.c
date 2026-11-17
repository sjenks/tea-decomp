// name: FUN_004a56f8
// address: 0x4a56f8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a56f8(int param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_004dce64(0x50b120);
  if (*(undefined4 **)(param_1 + 0x44) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x44))();
  }
  *(undefined4 *)(param_1 + 0x44) = param_2;
  *in_FS_OFFSET = local_30;
  return;
}

