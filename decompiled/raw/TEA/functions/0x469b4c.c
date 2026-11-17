// name: FUN_00469b4c
// address: 0x469b4c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00469b4c(UINT *param_1,byte param_2)

{
  if (param_1 != (UINT *)0x0) {
    SetErrorMode(*param_1);
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  return;
}

