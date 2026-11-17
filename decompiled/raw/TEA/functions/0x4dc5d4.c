// name: FUN_004dc5d4
// address: 0x4dc5d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004dc5d4(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x516cb8);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_004ecac0;
    FUN_004dc478(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

