// name: FUN_0048ee7c
// address: 0x48ee7c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0048ee7c(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x506364);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_005044cc;
    FUN_0048ea24(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

