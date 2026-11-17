// name: FUN_00409a5c
// address: 0x409a5c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00409a5c(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0041f3fc(0x42c49c);
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = *(undefined4 *)(param_3 * 4 + *(int *)(param_2 + 0xc));
  param_1[5] = 0xffffffff;
  param_1[6] = 0;
  param_1[0x11ff] = 0;
  param_1[1] = DAT_0042c488;
  *param_1 = 0;
  if (DAT_0042c484 == (undefined4 *)0x0) {
    DAT_0042c484 = param_1;
  }
  else {
    *DAT_0042c488 = param_1;
  }
  DAT_0042c488 = param_1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

