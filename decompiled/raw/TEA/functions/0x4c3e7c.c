// name: FUN_004c3e7c
// address: 0x4c3e7c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004c3e7c(int param_1)

{
  if (*(int *)(param_1 + 0x4a) != 0) {
    GlobalUnlock(*(HGLOBAL *)(param_1 + 0x4a));
    *(undefined4 *)(param_1 + 0x56) = 0;
  }
  if (*(int *)(param_1 + 0x4e) != 0) {
    GlobalUnlock(*(HGLOBAL *)(param_1 + 0x4e));
    *(undefined4 *)(param_1 + 0x5a) = 0;
  }
  if (*(int *)(param_1 + 0x52) != 0) {
    DeleteDC(*(HDC *)(param_1 + 0x52));
    *(undefined4 *)(param_1 + 0x52) = 0;
  }
  return;
}

