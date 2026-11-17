// name: FUN_00435280
// address: 0x435280
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00435280(int param_1,char *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  LPSTR local_c [2];
  
  FUN_00455f04(0x46c2bc);
  FUN_0042027c((int *)local_c,0x104);
  GetWindowTextA(*(HWND *)(param_1 + 8),local_c[0],0x104);
  iVar1 = FUN_00455b74(local_c[0],param_2);
  if (iVar1 != 0) {
    SetWindowTextA(*(HWND *)(param_1 + 8),param_2);
  }
  FUN_0042033c(local_c,0);
  *in_FS_OFFSET = local_30;
  return;
}

