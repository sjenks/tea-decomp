// name: FUN_00440414
// address: 0x440414
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00440414(int param_1,char *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  LPSTR local_c [2];
  
  FUN_00467ba8(0x480098);
  FUN_0042b3f0((int *)local_c,0x104);
  GetWindowTextA(*(HWND *)(param_1 + 8),local_c[0],0x104);
  iVar1 = FUN_00467724(local_c[0],param_2);
  if (iVar1 != 0) {
    SetWindowTextA(*(HWND *)(param_1 + 8),param_2);
  }
  FUN_0042b4b0(local_c,0);
  *in_FS_OFFSET = local_30;
  return;
}

