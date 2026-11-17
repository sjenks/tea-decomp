// name: FUN_00424644
// address: 0x424644
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00424644(undefined4 *param_1,byte param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  return;
}

