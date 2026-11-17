// name: FUN_0041aa8c
// address: 0x41aa8c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041aa8c(int *param_1,LPCSTR param_2)

{
  if (param_1[0x1b] == 0) {
    param_1[0x1b] = 1;
    SetWindowTextA(*(HWND *)(*param_1 + 0xc),param_2);
    param_1[0x1b] = 0;
    FUN_004a76a8(*param_1,0xb9,0,0);
  }
  return;
}

