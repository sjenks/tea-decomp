// name: FUN_00462b2c
// address: 0x462b2c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00462b2c(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4fb280);
  if (param_1 != 0) {
    FUN_0041bfe0((int *)(param_1 + 0x310),2);
    FUN_00417b74((int *)(param_1 + 0x248),2);
    FUN_0041b094((int *)(param_1 + 0x18c),2);
    FUN_0041b094((int *)(param_1 + 0xd0),2);
    FUN_0041851c((int *)(param_1 + 8),2);
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

