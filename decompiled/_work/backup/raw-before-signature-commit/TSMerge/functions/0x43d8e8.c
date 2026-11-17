// name: FUN_0043d8e8
// address: 0x43d8e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043d8e8(int *param_1)

{
  FUN_0043b398(param_1);
  if (param_1[0xd] != 0) {
    PostMessageA(*(HWND *)(*param_1 + 0xc),0x111,param_1[0xd],0);
  }
  return;
}

