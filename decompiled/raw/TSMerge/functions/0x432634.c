// name: FUN_00432634
// address: 0x432634
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00432634(int *param_1)

{
  if ((*(byte *)(*param_1 + 0x74) & 0x80) != 0) {
    FUN_0042b294(*param_1);
    return;
  }
  FUN_0042c550(*param_1);
  return;
}

