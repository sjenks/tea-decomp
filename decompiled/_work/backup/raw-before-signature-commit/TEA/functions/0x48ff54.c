// name: FUN_0048ff54
// address: 0x48ff54
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0048ff54(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x2e) = *param_2;
  *(undefined4 *)(param_1 + 0x32) = param_2[1];
  if (*(int *)(param_1 + 6) != 0) {
    FUN_00492634(*(int *)(param_1 + 6));
  }
  return;
}

