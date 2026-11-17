// name: FUN_004284a8
// address: 0x4284a8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004284a8(uint *param_1,byte param_2)

{
  if (param_1 != (uint *)0x0) {
    if ((char)param_1[1] != '\0') {
      FUN_004282f8(*param_1);
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  return;
}

