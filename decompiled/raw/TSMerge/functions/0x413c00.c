// name: FUN_00413c00
// address: 0x413c00
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00413c00(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00455f04(0x465794);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00465948;
    if ((*(char *)(param_1 + 2) != '\0') && ((uint *)param_1[1] != (uint *)0x0)) {
      FUN_00411fc4((uint *)param_1[1],3);
    }
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

