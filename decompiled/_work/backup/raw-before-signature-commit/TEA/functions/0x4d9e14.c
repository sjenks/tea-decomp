// name: FUN_004d9e14
// address: 0x4d9e14
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004d9e14(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x51635c);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_005163bc;
    FUN_004d9a28(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

