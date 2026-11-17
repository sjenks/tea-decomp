// name: FUN_00452f48
// address: 0x452f48
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00452f48(int *param_1,LPSTR param_2,int param_3)

{
  if (param_3 == 0) {
    GetWindowTextA(*(HWND *)(*param_1 + 0xc),param_2,param_1[5]);
  }
  else if (param_3 == 1) {
    SetWindowTextA(*(HWND *)(*param_1 + 0xc),param_2);
  }
  return param_1[5];
}

