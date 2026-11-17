// name: FUN_0041ae14
// address: 0x41ae14
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041ae14(UINT *param_1,byte param_2)

{
  if (param_1 != (UINT *)0x0) {
    SetErrorMode(*param_1);
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  return;
}

