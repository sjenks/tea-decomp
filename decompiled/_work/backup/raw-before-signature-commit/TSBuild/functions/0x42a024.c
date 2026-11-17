// name: FUN_0042a024
// address: 0x42a024
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0042a024(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47b998);
  FUN_00456b14(param_1 + 4,4,4,1,FUN_00428cde);
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[6] = 0x10000;
  param_1[5] = 0x10000;
  param_1[4] = 0x10000;
  param_1[3] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

