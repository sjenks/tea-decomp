// name: FUN_004b0e28
// address: 0x4b0e28
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004b0e28(int param_1,WPARAM param_2)

{
  WPARAM WVar1;
  
  WVar1 = SendMessageA(*(HWND *)(param_1 + 8),0xf0,0,0);
  if (param_2 != WVar1) {
    SendMessageA(*(HWND *)(param_1 + 8),0xf1,param_2,0);
  }
  return;
}

