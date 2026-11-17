// name: FUN_004a5644
// address: 0x4a5644
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a5644(int param_1,int param_2)

{
  HWND pHVar1;
  
  if (param_2 != *(int *)(param_1 + 0x14)) {
    if (*(int *)(param_1 + 0x14) != 0) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0x14) + 8) + 0x80))();
    }
    *(undefined4 *)(param_1 + 0x7e) = 0;
    *(int *)(param_1 + 0x14) = param_2;
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_004a7560(*(int *)(param_1 + 0x14),param_1);
    }
  }
  if ((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    if (*(int *)(param_1 + 0xc) == 0) {
      pHVar1 = (HWND)0x0;
    }
    else {
      pHVar1 = GetParent(*(HWND *)(param_1 + 0xc));
    }
    if (pHVar1 != *(HWND *)(*(int *)(param_1 + 0x14) + 0xc)) {
      if (param_2 == 0) {
        SetParent(*(HWND *)(param_1 + 0xc),(HWND)0x0);
      }
      else if (*(int *)(param_2 + 0xc) != 0) {
        SetParent(*(HWND *)(param_1 + 0xc),*(HWND *)(param_2 + 0xc));
      }
    }
  }
  return;
}

