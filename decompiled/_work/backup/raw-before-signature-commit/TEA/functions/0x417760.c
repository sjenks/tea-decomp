// name: FUN_00417760
// address: 0x417760
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00417760(undefined4 param_1,HWND param_2)

{
  int iVar1;
  
  iVar1 = GetSystemMetrics(0);
  SendMessageA(param_2,0x418,0,iVar1 + -0x10);
  return;
}

