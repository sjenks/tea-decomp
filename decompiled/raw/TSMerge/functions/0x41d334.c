// name: FUN_0041d334
// address: 0x41d334
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041d334(uint *param_1,byte param_2)

{
  if (param_1 != (uint *)0x0) {
    if ((char)param_1[1] != '\0') {
      FUN_0041d184(*param_1);
    }
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  return;
}

