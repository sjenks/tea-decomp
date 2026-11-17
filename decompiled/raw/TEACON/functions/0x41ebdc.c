// name: FUN_0041ebdc
// address: 0x41ebdc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041ebdc(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0041f3fc(0x431a10);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_0042bc18;
    FUN_0041eb00(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_00414f78();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

