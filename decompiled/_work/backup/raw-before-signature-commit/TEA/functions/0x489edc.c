// name: FUN_00489edc
// address: 0x489edc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00489edc(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x504e08);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00504fbc;
    if ((*(char *)(param_1 + 2) != '\0') && ((uint *)param_1[1] != (uint *)0x0)) {
      FUN_004886b0((uint *)param_1[1],3);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

