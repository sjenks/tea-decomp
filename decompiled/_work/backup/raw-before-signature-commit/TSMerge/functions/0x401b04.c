// name: FUN_00401b04
// address: 0x401b04
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_00401b04(int param_1)

{
  bool bVar1;
  uint local_408 [257];
  
  bVar1 = *(int *)(param_1 + 0x1c) != 2;
  if (bVar1) {
    GetWindowTextA(*(HWND *)(*(int *)(param_1 + 0x700) + 0xc),(LPSTR)local_408,0x401);
    FUN_0044cf10(param_1 + 0xe08,local_408);
    GetWindowTextA(*(HWND *)(*(int *)(param_1 + 0x7b2) + 0xc),(LPSTR)local_408,0x401);
    FUN_0044cf10(param_1 + 0xe18,local_408);
    GetWindowTextA(*(HWND *)(*(int *)(param_1 + 0x864) + 0xc),(LPSTR)local_408,0x401);
    FUN_0044cf10(param_1 + 0xe28,local_408);
    *(undefined4 *)(param_1 + 0xe00) = *(undefined4 *)(param_1 + 0xdd8);
    *(undefined4 *)(param_1 + 0xe04) = *(undefined4 *)(param_1 + 0xddc);
    FUN_0040c638(param_1 + 0xdf0);
  }
  return bVar1;
}

