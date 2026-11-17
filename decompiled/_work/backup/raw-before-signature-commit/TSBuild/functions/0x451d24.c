// name: FUN_00451d24
// address: 0x451d24
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00451d24(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x4839e4);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00483a04;
    if (param_1[1] != 0) {
      *(undefined4 *)(param_1[1] + 0x44) = 0;
    }
    FUN_0041e99c(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

