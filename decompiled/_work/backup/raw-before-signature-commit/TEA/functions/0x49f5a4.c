// name: FUN_0049f5a4
// address: 0x49f5a4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0049f5a4(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5097b0);
  if ((*(byte *)(param_2 + 100) & 1) == 0) {
    iVar1 = *(int *)(param_2 + 4);
  }
  else {
    iVar1 = GetDlgCtrlID(*(HWND *)(param_2 + 4));
  }
  FUN_004a4d68(param_1,iVar1,param_3);
  *param_1 = &PTR_FUN_005098e8;
  param_1[4] = param_2;
  param_1[3] = param_1[3] | 2;
  *in_FS_OFFSET = local_28;
  return param_1;
}

