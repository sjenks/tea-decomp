// name: FUN_004b9854
// address: 0x4b9854
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004b9854(int *param_1)

{
  FUN_004b7030(param_1);
  if (param_1[0xd] != 0) {
    PostMessageA(*(HWND *)(*param_1 + 0xc),0x111,param_1[0xd],0);
  }
  return;
}

