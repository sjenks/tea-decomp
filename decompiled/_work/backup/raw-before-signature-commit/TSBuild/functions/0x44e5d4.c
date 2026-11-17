// name: FUN_0044e5d4
// address: 0x44e5d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044e5d4(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x482c10);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00482c30;
    FUN_0042bcb0(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

