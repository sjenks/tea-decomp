// name: FUN_004030f4
// address: 0x4030f4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004030f4(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ea9ac);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_004eac88;
    FUN_0040317c(param_1 + 0x30,param_1[0x31],param_1[0x32]);
    FUN_004cc0bc();
    FUN_004c651c(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

