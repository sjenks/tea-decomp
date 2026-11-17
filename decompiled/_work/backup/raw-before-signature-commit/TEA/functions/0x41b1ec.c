// name: FUN_0041b1ec
// address: 0x41b1ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041b1ec(int *param_1,LPCSTR param_2)

{
  if (param_1[8] == 0) {
    param_1[8] = 1;
    SetWindowTextA(*(HWND *)(*param_1 + 0xc),param_2);
    param_1[8] = 0;
  }
  return;
}

