// name: FUN_004c3de8
// address: 0x4c3de8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004c3de8(int param_1,byte param_2)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x4a) != 0) {
      GlobalUnlock(*(HGLOBAL *)(param_1 + 0x4a));
      GlobalFree(*(HGLOBAL *)(param_1 + 0x4a));
    }
    if (*(int *)(param_1 + 0x4e) != 0) {
      GlobalUnlock(*(HGLOBAL *)(param_1 + 0x4e));
      GlobalFree(*(HGLOBAL *)(param_1 + 0x4e));
    }
    if (*(int *)(param_1 + 0x52) != 0) {
      DeleteDC(*(HDC *)(param_1 + 0x52));
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  return;
}

