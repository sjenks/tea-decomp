// name: FUN_0041eaa4
// address: 0x41eaa4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041eaa4(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0041f3fc(0x4319bc);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_0042b39c;
    FUN_0041ea84(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_00414f78();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

