// name: FUN_004dafc0
// address: 0x4dafc0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004dafc0(undefined4 *param_1,byte param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((uint *)param_1[1] != (uint *)0x0) {
      FUN_004e3578((ushort)*param_1,(uint *)param_1[1]);
      FUN_004cc0cc();
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  return;
}

