// name: FUN_004b47ac
// address: 0x4b47ac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004b47ac(int param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  FUN_004dce64(0x50d948);
  if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
    FUN_00497aec(local_10,param_2,0);
    (**(code **)(*(int *)(param_1 + 8) + 0x58))();
    FUN_00497bf4(local_10,2);
  }
  *in_FS_OFFSET = local_34;
  return;
}

