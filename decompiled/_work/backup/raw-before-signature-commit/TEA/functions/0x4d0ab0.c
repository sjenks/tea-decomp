// name: FUN_004d0ab0
// address: 0x4d0ab0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004d0ab0(undefined4 *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x51437c);
  if (param_2 == 0) {
    *param_1 = param_1 + 3;
    FUN_004d0b78(param_1 + 3);
  }
  param_1[1] = &PTR_FUN_00515978;
  *(undefined ***)*param_1 = &PTR_LAB_00515984;
  param_1[2] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

