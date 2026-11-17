// name: FUN_0049468c
// address: 0x49468c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049468c(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x507430);
  if (param_1 != 0) {
    FUN_00487178();
    FUN_00487090();
    if (*(uint **)(param_1 + 4) != (uint *)0x0) {
      FUN_004886b0(*(uint **)(param_1 + 4),3);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

