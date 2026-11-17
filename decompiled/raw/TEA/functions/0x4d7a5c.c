// name: FUN_004d7a5c
// address: 0x4d7a5c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004d7a5c(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5154cc);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 4) = *param_3;
  *in_FS_OFFSET = local_28;
  return param_1;
}

