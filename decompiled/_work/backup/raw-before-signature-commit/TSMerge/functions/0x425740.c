// name: FUN_00425740
// address: 0x425740
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00425740(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x469104);
  if ((*(byte *)(param_2 + 100) & 1) == 0) {
    iVar1 = *(int *)(param_2 + 4);
  }
  else {
    iVar1 = GetDlgCtrlID(*(HWND *)(param_2 + 4));
  }
  FUN_0042aa1c(param_1,iVar1,param_3);
  *param_1 = &PTR_FUN_0046923c;
  param_1[4] = param_2;
  param_1[3] = param_1[3] | 2;
  *in_FS_OFFSET = local_28;
  return param_1;
}

