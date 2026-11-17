// name: FUN_004a83f4
// address: 0x4a83f4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004a83f4(undefined4 *param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50b314);
  FUN_0048e99c(param_1,param_2);
  param_1[2] = param_2[2];
  *param_1 = &PTR_FUN_005044cc;
  *param_1 = &PTR_FUN_0050b3c0;
  param_1[3] = param_2[3];
  *in_FS_OFFSET = local_28;
  return param_1;
}

