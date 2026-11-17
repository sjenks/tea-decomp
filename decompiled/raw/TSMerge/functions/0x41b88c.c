// name: FUN_0041b88c
// address: 0x41b88c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041b88c(int param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00455f04(0x467468);
  if (*(undefined4 **)(param_1 + 0x37) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x37))();
  }
  *(undefined4 *)(param_1 + 0x37) = param_2;
  *in_FS_OFFSET = local_30;
  return;
}

