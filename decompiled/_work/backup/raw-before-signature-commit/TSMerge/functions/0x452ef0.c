// name: FUN_00452ef0
// address: 0x452ef0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00452ef0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x472f64);
  FUN_00452fe0(param_1,param_2);
  *param_1 = &PTR_FUN_00472fdc;
  param_1[2] = 0;
  param_1[3] = param_3;
  *in_FS_OFFSET = local_28;
  return param_1;
}

