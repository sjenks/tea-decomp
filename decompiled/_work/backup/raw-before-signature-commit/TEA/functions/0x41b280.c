// name: FUN_0041b280
// address: 0x41b280
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041b280(int *param_1)

{
  int iVar1;
  CHAR local_24 [32];
  
  iVar1 = GetWindowTextA(*(HWND *)(*param_1 + 0xc),local_24,0x1f);
  local_24[iVar1] = '\0';
  FUN_004e39d0(local_24);
  return;
}

