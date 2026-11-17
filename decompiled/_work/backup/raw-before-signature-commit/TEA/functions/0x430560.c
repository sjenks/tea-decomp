// name: FUN_00430560
// address: 0x430560
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00430560(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4f2b98);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

