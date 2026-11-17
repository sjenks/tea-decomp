// name: FUN_004cb3b4
// address: 0x4cb3b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004cb3b4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x51274c);
  FUN_004cba5c(param_1);
  param_1[10] = param_2;
  param_1[0xb] = 0;
  param_1[1] = param_3;
  *param_1 = 0x10;
  *in_FS_OFFSET = local_28;
  return param_1;
}

