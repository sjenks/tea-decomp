// name: FUN_00497aec
// address: 0x497aec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00497aec(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x507e04);
  *param_1 = &PTR_FUN_00508078;
  param_1[1] = param_2;
  *(bool *)(param_1 + 2) = param_3 != 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

