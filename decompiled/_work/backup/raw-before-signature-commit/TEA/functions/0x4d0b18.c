// name: FUN_004d0b18
// address: 0x4d0b18
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004d0b18(undefined4 *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5143a0);
  if (param_2 == 0) {
    *param_1 = param_1 + 2;
    FUN_004d0b78(param_1 + 2);
  }
  param_1[1] = &PTR_FUN_0051595c;
  *(undefined ***)*param_1 = &PTR_LAB_00515968;
  *in_FS_OFFSET = local_28;
  return param_1;
}

