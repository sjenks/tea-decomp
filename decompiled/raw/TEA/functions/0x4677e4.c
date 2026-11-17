// name: FUN_004677e4
// address: 0x4677e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004677e4(int param_1,int param_2)

{
  uint local_3ec [250];
  
  if ((param_2 < 0x2e86) || (0x2e99 < param_2)) {
    GetWindowTextA(*(HWND *)(**(int **)(param_1 + -0xb93c + param_2 * 4) + 0xc),(LPSTR)local_3ec,999
                  );
    FUN_0045dfbc(*(int **)(param_1 + 0x60),local_3ec);
  }
  else {
    FUN_00415388();
  }
  return;
}

