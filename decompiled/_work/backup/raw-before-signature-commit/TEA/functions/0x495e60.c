// name: FUN_00495e60
// address: 0x495e60
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00495e60(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x507634);
  FUN_004cc3c4(param_1 + 4,4,4,1,FUN_004949b6);
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

