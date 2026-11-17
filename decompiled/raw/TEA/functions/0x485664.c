// name: FUN_00485664
// address: 0x485664
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00485664(int param_1,char param_2)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  if (param_2 != '\0') {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
    return;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffe;
  return;
}

