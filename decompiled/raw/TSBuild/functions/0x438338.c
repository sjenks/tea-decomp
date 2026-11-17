// name: FUN_00438338
// address: 0x438338
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LRESULT __cdecl FUN_00438338(int param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)(param_1 + 0xc),param_2,param_3,param_4);
  return LVar1;
}

