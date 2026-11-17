// name: FUN_0042cef8
// address: 0x42cef8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042cef8(int param_1,byte param_2)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_0042cad8(*(undefined4 *)(param_1 + 0xc),param_1);
    }
    FUN_0045681c();
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  return;
}

