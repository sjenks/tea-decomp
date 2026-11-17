// name: FUN_0043e8bc
// address: 0x43e8bc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043e8bc(int param_1,byte *param_2)

{
  CHAR local_404 [1024];
  
  FUN_004e0344(local_404,param_2);
  SetWindowTextA(*(HWND *)(*(int *)(param_1 + 0x24c) + 0xc),local_404);
  return;
}

