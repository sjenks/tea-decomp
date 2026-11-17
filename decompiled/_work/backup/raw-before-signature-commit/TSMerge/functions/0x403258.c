// name: FUN_00403258
// address: 0x403258
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00403258(int param_1,byte *param_2)

{
  CHAR local_404 [1024];
  
  FUN_00457ef4(local_404,param_2);
  SetWindowTextA(*(HWND *)(*(int *)(param_1 + 0x9cc) + 0xc),local_404);
  return;
}

