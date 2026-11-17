// name: FUN_004d805c
// address: 0x4d805c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004d805c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5157f0);
  FUN_004d8180(param_1,param_2);
  *param_1 = &PTR_FUN_0051588c;
  param_1[2] = 0;
  param_1[3] = param_3;
  *in_FS_OFFSET = local_28;
  return param_1;
}

