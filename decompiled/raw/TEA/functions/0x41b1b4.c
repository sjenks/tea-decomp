// name: FUN_0041b1b4
// address: 0x41b1b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041b1b4(int *param_1)

{
  if (param_1[8] == 0) {
    param_1[8] = 1;
    GetDlgCtrlID(*(HWND *)(*param_1 + 0xc));
    (**(code **)(*(int *)(param_1[7] + 0xc) + 0x58))();
    param_1[8] = 0;
  }
  return;
}

