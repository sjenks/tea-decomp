// name: FUN_004992f8
// address: 0x4992f8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004992f8(int param_1,byte param_2)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_00498ed8(*(undefined4 *)(param_1 + 0xc),param_1);
    }
    FUN_004cc0cc();
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  return;
}

