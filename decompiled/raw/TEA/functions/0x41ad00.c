// name: FUN_0041ad00
// address: 0x41ad00
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041ad00(int *param_1,int param_2)

{
  if (param_1[0x1b] == 0) {
    param_1[0x1b] = 1;
    FUN_00483a88(*(HWND *)(*param_1 + 0xc),param_2,0);
    param_1[0x1b] = 0;
    FUN_004a76a8(*param_1,0xb9,0,0);
  }
  return;
}

