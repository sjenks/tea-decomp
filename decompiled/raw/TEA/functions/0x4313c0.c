// name: FUN_004313c0
// address: 0x4313c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004313c0(int param_1,byte param_2)

{
  if (param_1 != 0) {
    FUN_00429fb8(param_1,*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8));
    FUN_004cc0bc();
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  return;
}

