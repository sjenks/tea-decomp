// name: FUN_004a7560
// address: 0x4a7560
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a7560(int param_1,int param_2)

{
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x7a) != 0) {
      *(undefined4 *)(param_2 + 0x7e) = *(undefined4 *)(*(int *)(param_1 + 0x7a) + 0x7e);
      *(int *)(*(int *)(param_1 + 0x7a) + 0x7e) = param_2;
      *(int *)(param_1 + 0x7a) = param_2;
      return;
    }
    *(int *)(param_1 + 0x7a) = param_2;
    *(int *)(param_2 + 0x7e) = param_2;
  }
  return;
}

