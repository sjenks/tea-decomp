// name: FUN_0041ca64
// address: 0x41ca64
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0041ca64(undefined4 *param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0041f3fc(0x430cb4);
  *param_1 = &PTR_FUN_00430d2c;
  if (DAT_004348a8 == 0) {
    FUN_0041dd4c();
  }
  iVar1 = DAT_004348a8;
  param_1[4] = DAT_004348a8;
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

