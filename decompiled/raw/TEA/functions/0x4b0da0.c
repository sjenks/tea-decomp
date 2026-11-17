// name: FUN_004b0da0
// address: 0x4b0da0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004b0da0(int param_1,char *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  LPSTR local_c [2];
  
  FUN_004dce64(0x50cfd8);
  FUN_00497298((int *)local_c,0x104);
  GetWindowTextA(*(HWND *)(param_1 + 8),local_c[0],0x104);
  iVar1 = FUN_004dc978(local_c[0],param_2);
  if (iVar1 != 0) {
    SetWindowTextA(*(HWND *)(param_1 + 8),param_2);
  }
  FUN_00497358(local_c,0);
  *in_FS_OFFSET = local_30;
  return;
}

