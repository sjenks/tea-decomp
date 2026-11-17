// name: FUN_004d2174
// address: 0x4d2174
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004d2174(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x514838);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00515a3c;
    FUN_00402880((int)(param_1 + 0x10),2);
    FUN_00402880((int)(param_1 + 0xc),2);
    FUN_00402880((int)(param_1 + 8),2);
    FUN_0047bce0(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

