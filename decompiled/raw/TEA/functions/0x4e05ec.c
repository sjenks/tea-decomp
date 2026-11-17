// name: FUN_004e05ec
// address: 0x4e05ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004e05ec(undefined1 param_1,int param_2)

{
  if (0x4f < *(int *)(param_2 + 0x50)) {
    FUN_004e05a4(param_2);
  }
  if ((*(uint **)(param_2 + 100) == (uint *)0x0) ||
     (*(uint *)(param_2 + 0x5c) < **(uint **)(param_2 + 100))) {
    *(undefined1 *)(param_2 + *(int *)(param_2 + 0x50)) = param_1;
    *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
  }
  *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 1;
  return;
}

