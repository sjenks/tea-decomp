// name: FUN_004d2218
// address: 0x4d2218
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004d2218(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x51485c);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00515a14;
    FUN_004d2174(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

