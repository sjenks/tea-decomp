// name: FUN_0041e7ec
// address: 0x41e7ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041e7ec(int *param_1)

{
  if (param_1[0xf] == 1) {
    GetDlgCtrlID(*(HWND *)(*param_1 + 0xc));
    (**(code **)(*(int *)(param_1[7] + 0xc) + 0x80))();
  }
  param_1[0xf] = 0;
  FUN_004a5774(*param_1);
  return;
}

