// name: FUN_00448a7c
// address: 0x448a7c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00448a7c(int *param_1)

{
  FUN_0044652c(param_1);
  if (param_1[0xd] != 0) {
    PostMessageA(*(HWND *)(*param_1 + 0xc),0x111,param_1[0xd],0);
  }
  return;
}

