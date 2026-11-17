// name: FUN_0041ad44
// address: 0x41ad44
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041ad44(int *param_1,LONG *param_2)

{
  tagPOINT local_14;
  int local_c;
  int local_8;
  
  SetFocus(*(HWND *)(*param_1 + 0xc));
  local_c = 0;
  local_8 = -1;
  FUN_004691fc(param_1,(LPARAM)&local_c);
  if (local_c == local_8) {
    local_14.x = *param_2;
    local_14.y = param_2[1];
    ScreenToClient(*(HWND *)(*param_1 + 0xc),&local_14);
    local_c = FUN_004a76a8(*param_1,0xd7,0,(LPARAM)&local_14);
    local_8 = local_c;
    FUN_0046924c(param_1,(LPARAM)&local_c);
  }
  return;
}

