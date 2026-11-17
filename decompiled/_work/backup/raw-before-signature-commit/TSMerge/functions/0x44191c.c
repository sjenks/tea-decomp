// name: FUN_0044191c
// address: 0x44191c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044191c(int param_1,char param_2)

{
  FUN_0042aa5c(param_1);
  EnableMenuItem(*(HMENU *)(param_1 + 0x10),*(UINT *)(param_1 + 0x14),param_2 == '\0' | 0x400);
  return;
}

