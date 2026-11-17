// name: FUN_0041b5d4
// address: 0x41b5d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041b5d4(int *param_1)

{
  if (param_1[8] == 0) {
    param_1[8] = 1;
    SetWindowTextA(*(HWND *)(*param_1 + 0xc),s_Beta_Test_Expiry_004ed29c + 0x10);
    param_1[8] = 0;
  }
  return;
}

