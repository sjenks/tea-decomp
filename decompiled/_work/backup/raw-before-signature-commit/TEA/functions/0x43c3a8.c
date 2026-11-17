// name: FUN_0043c3a8
// address: 0x43c3a8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043c3a8(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4f4e4c);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_004f4ec0;
    FUN_004cc0bc();
    FUN_00402f80(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

