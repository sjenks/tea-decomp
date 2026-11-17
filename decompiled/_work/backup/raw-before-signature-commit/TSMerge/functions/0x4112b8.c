// name: FUN_004112b8
// address: 0x4112b8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004112b8(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x465020);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00465040;
    FUN_00454464(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

