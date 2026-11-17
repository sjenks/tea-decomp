// name: FUN_00494064
// address: 0x494064
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00494064(uint *param_1,byte param_2)

{
  if (param_1 != (uint *)0x0) {
    if ((char)param_1[1] != '\0') {
      FUN_00493eb4(*param_1);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  return;
}

