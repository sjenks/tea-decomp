// name: FUN_00406ec8
// address: 0x406ec8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00406ec8(int param_1)

{
  while (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = **(undefined4 **)(param_1 + 0x10);
    FUN_0045680c();
    FUN_0045680c();
  }
  return;
}

