// name: FUN_0044e5a4
// address: 0x44e5a4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0044e5a4(undefined4 *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x472260);
  if (param_2 == 0) {
    *param_1 = param_1 + 3;
    FUN_0044e66c(param_1 + 3);
  }
  param_1[1] = &PTR_FUN_00473084;
  *(undefined ***)*param_1 = &PTR_LAB_00473090;
  param_1[2] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

