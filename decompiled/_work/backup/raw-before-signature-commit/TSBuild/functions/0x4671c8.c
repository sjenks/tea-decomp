// name: FUN_004671c8
// address: 0x4671c8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004671c8(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x488974);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00476b30;
    FUN_004671a8(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

