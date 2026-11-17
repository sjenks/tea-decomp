// name: FUN_0042aa68
// address: 0x42aa68
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042aa68(int param_1)

{
  WINDOWPLACEMENT local_30;
  
  local_30.length = 0x2c;
  GetWindowPlacement(*(HWND *)(param_1 + 0xc),&local_30);
  return;
}

