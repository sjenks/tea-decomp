// name: FUN_0044e60c
// address: 0x44e60c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0044e60c(undefined4 *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x472284);
  if (param_2 == 0) {
    *param_1 = param_1 + 2;
    FUN_0044e66c(param_1 + 2);
  }
  param_1[1] = &PTR_FUN_00473068;
  *(undefined ***)*param_1 = &PTR_LAB_00473074;
  *in_FS_OFFSET = local_28;
  return param_1;
}

