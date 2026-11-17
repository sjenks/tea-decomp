// name: FUN_0041ec24
// address: 0x41ec24
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041ec24(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00467ba8(0x479548);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_004796fc;
    if ((*(char *)(param_1 + 2) != '\0') && ((uint *)param_1[1] != (uint *)0x0)) {
      FUN_0041cfe8((uint *)param_1[1],3);
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

