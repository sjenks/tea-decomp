// name: FUN_00463c18
// address: 0x463c18
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00463c18(undefined4 *param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x48793c);
  *param_1 = &PTR_FUN_004879b4;
  if (DAT_0048d084 == 0) {
    FUN_00465da4();
  }
  iVar1 = DAT_0048d084;
  param_1[4] = DAT_0048d084;
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

