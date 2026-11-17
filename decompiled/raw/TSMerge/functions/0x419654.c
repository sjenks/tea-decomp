// name: FUN_00419654
// address: 0x419654
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00419654(int param_1)

{
  if ((*(int *)(param_1 + 6) != 0) && (*(int *)(**(int **)(param_1 + 6) + 0xc) != 0)) {
    UpdateWindow(*(HWND *)(**(int **)(param_1 + 6) + 0xc));
  }
  return;
}

