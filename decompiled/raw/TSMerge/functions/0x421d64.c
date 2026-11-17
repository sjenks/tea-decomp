// name: FUN_00421d64
// address: 0x421d64
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00421d64(int param_1,byte param_2)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_00421944(*(undefined4 *)(param_1 + 0xc),param_1);
    }
    FUN_0044b2dc();
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  return;
}

