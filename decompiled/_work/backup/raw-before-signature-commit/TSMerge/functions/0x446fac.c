// name: FUN_00446fac
// address: 0x446fac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00446fac(int *param_1)

{
  tagRECT local_1c;
  tagPOINT local_c;
  
  if (((char)param_1[0xe] != '\0') && (param_1[1] != 0)) {
    local_1c.left = 0;
    local_1c.top = 0;
    local_1c.right = 0;
    local_1c.bottom = 0;
    local_c.x = 0;
    local_c.y = 0;
    GetCursorPos(&local_c);
    ScreenToClient(*(HWND *)(param_1[1] + 0xc),&local_c);
    FUN_0042d568(param_1[1],&local_1c);
    (**(code **)(*param_1 + 0x2c))();
  }
  return;
}

