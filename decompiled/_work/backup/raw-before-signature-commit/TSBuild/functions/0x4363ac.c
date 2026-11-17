// name: FUN_004363ac
// address: 0x4363ac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004363ac(int param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00467ba8(0x47e6b8);
  if (*(undefined4 **)(param_1 + 0x44) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x44))();
  }
  *(undefined4 *)(param_1 + 0x44) = param_2;
  *in_FS_OFFSET = local_30;
  return;
}

