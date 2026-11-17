// name: FUN_00438c8c
// address: 0x438c8c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00438c8c(int param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  FUN_00455f04(0x46cc2c);
  if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
    FUN_00420a90(local_10,param_2,0);
    (**(code **)(*(int *)(param_1 + 8) + 0x58))();
    FUN_00420b3c(local_10,2);
  }
  *in_FS_OFFSET = local_34;
  return;
}

