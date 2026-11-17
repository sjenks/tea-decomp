// name: FUN_0041dd14
// address: 0x41dd14
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041dd14(undefined4 *param_1,byte param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((uint *)param_1[1] != (uint *)0x0) {
      FUN_004247b0((ushort)*param_1,(uint *)param_1[1]);
      FUN_00414f88();
    }
    if ((param_2 & 1) != 0) {
      FUN_00414f78();
    }
  }
  return;
}

