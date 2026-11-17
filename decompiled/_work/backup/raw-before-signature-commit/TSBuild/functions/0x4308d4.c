// name: FUN_004308d4
// address: 0x4308d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004308d4(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47cee0);
  if ((*(byte *)(param_2 + 100) & 1) == 0) {
    iVar1 = *(int *)(param_2 + 4);
  }
  else {
    iVar1 = GetDlgCtrlID(*(HWND *)(param_2 + 4));
  }
  FUN_00435bb0(param_1,iVar1,param_3);
  *param_1 = &PTR_FUN_0047d018;
  param_1[4] = param_2;
  param_1[3] = param_1[3] | 2;
  *in_FS_OFFSET = local_28;
  return param_1;
}

