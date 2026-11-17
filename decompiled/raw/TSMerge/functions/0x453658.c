// name: FUN_00453658
// address: 0x453658
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00453658(undefined4 *param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x4732a4);
  *param_1 = &PTR_FUN_0047331c;
  if (DAT_004775d4 == 0) {
    FUN_00454940();
  }
  iVar1 = DAT_004775d4;
  param_1[4] = DAT_004775d4;
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

