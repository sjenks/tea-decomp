// name: FUN_004a6d7c
// address: 0x4a6d7c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a6d7c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_004a6da0(param_1);
    return;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}

