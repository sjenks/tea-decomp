// name: FUN_004d8e6c
// address: 0x4d8e6c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004d8e6c(undefined4 *param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x515c08);
  *param_1 = &PTR_FUN_00515c80;
  if (DAT_0051bc08 == 0) {
    FUN_004daff8();
  }
  iVar1 = DAT_0051bc08;
  param_1[4] = DAT_0051bc08;
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

