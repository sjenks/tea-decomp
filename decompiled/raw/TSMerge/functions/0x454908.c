// name: FUN_00454908
// address: 0x454908
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00454908(undefined4 *param_1,byte param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((uint *)param_1[1] != (uint *)0x0) {
      FUN_0045aff8((ushort)*param_1,(uint *)param_1[1]);
      FUN_0044b2dc();
    }
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  return;
}

