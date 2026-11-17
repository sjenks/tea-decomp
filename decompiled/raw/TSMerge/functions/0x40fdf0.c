// name: FUN_0040fdf0
// address: 0x40fdf0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0040fdf0(UINT *param_1,byte param_2)

{
  if (param_1 != (UINT *)0x0) {
    SetErrorMode(*param_1);
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  return;
}

