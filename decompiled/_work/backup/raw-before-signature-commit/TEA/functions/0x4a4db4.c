// name: FUN_004a4db4
// address: 0x4a4db4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a4db4(int param_1)

{
  WINDOWPLACEMENT local_30;
  
  local_30.length = 0x2c;
  GetWindowPlacement(*(HWND *)(param_1 + 0xc),&local_30);
  return;
}

