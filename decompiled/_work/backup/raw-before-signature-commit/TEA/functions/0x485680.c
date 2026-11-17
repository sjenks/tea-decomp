// name: FUN_00485680
// address: 0x485680
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00485680(int param_1,char param_2)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
  if (param_2 != '\0') {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
    return;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffd;
  return;
}

