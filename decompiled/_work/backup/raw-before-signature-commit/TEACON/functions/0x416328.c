// name: FUN_00416328
// address: 0x416328
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_00416328(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(uint *)(param_1 + -4) & 0xfffffffc;
}

