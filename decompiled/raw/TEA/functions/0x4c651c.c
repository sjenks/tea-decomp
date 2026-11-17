// name: FUN_004c651c
// address: 0x4c651c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004c651c(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x511654);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00511674;
    FUN_004cc0cc();
    FUN_00489c54(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

