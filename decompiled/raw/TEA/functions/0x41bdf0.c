// name: FUN_0041bdf0
// address: 0x41bdf0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041bdf0(int *param_1,int param_2)

{
  FUN_004a2138(param_1);
  if (param_2 == 4) {
    GetDlgCtrlID(*(HWND *)(*param_1 + 0xc));
    (**(code **)(*(int *)(param_1[10] + 0xc) + 0x60))();
  }
  return;
}

