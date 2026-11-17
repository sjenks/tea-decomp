// name: FUN_0041826c
// address: 0x41826c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041826c(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004a76a8(*param_1,0xf0,0,0);
  if (iVar1 != 0) {
    GetDlgCtrlID(*(HWND *)(*param_1 + 0xc));
    (**(code **)(*(int *)(param_1[8] + 0xc) + 0x4c))();
    return;
  }
  FUN_004a5774(*param_1);
  return;
}

