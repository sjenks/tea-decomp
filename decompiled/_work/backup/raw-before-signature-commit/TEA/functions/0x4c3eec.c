// name: FUN_004c3eec
// address: 0x4c3eec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004c3eec(int param_1)

{
  if (*(int *)(param_1 + 0x4e) != 0) {
    GlobalUnlock(*(HGLOBAL *)(param_1 + 0x4e));
    GlobalFree(*(HGLOBAL *)(param_1 + 0x4e));
    *(undefined4 *)(param_1 + 0x4e) = 0;
    *(undefined4 *)(param_1 + 0x5a) = 0;
  }
  return;
}

