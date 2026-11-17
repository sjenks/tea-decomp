// name: FUN_004cd46c
// address: 0x4cd46c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_004cd46c(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(uint *)(param_1 + -4) & 0xfffffffc;
}

