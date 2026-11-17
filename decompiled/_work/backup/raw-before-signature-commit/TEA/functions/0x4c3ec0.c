// name: FUN_004c3ec0
// address: 0x4c3ec0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004c3ec0(int param_1)

{
  if (*(int *)(param_1 + 0x4a) != 0) {
    GlobalUnlock(*(HGLOBAL *)(param_1 + 0x4a));
    GlobalFree(*(HGLOBAL *)(param_1 + 0x4a));
    *(undefined4 *)(param_1 + 0x4a) = 0;
    *(undefined4 *)(param_1 + 0x56) = 0;
  }
  return;
}

