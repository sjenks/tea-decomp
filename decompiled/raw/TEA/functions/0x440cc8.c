// name: FUN_00440cc8
// address: 0x440cc8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00440cc8(int param_1)

{
  while (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = **(undefined4 **)(param_1 + 0x10);
    FUN_004cc0bc();
    FUN_004cc0bc();
  }
  return;
}

