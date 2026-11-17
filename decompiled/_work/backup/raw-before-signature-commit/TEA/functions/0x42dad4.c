// name: FUN_0042dad4
// address: 0x42dad4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042dad4(int *param_1)

{
  tagPOINT local_c;
  
  local_c.x = 0;
  local_c.y = 0;
  GetCursorPos(&local_c);
  ScreenToClient(*(HWND *)(*param_1 + 0xc),&local_c);
  FUN_0042d78c(param_1,1,(int)&local_c);
  return;
}

