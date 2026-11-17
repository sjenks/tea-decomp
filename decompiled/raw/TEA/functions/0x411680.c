// name: FUN_00411680
// address: 0x411680
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00411680(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ecae0);
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = *(undefined4 *)(param_3 * 4 + *(int *)(param_2 + 0xc));
  param_1[5] = 0xffffffff;
  param_1[6] = 0;
  param_1[0x11ff] = 0;
  param_1[1] = DAT_004ecacc;
  *param_1 = 0;
  if (DAT_004ecac8 == (undefined4 *)0x0) {
    DAT_004ecac8 = param_1;
  }
  else {
    *DAT_004ecacc = param_1;
  }
  DAT_004ecacc = param_1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

