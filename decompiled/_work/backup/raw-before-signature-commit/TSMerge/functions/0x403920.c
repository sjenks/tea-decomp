// name: FUN_00403920
// address: 0x403920
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00403920(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar1 = FUN_0042d1a4(*(int *)(param_1 + 0x20),0xf0,0,0);
  if (iVar1 == 1) {
    SetWindowTextA(*(HWND *)(*(int *)(param_1 + 0x7b2) + 0xc),&DAT_0046132a);
    (**(code **)(*(int *)(*(int *)(param_1 + 0xb26) + 8) + 0x60))();
    iVar1 = GetWindowTextLengthA(*(HWND *)(*(int *)(param_1 + 0x700) + 0xc));
    if ((0 < iVar1) &&
       (iVar1 = GetWindowTextLengthA(*(HWND *)(*(int *)(param_1 + 0x864) + 0xc)), 0 < iVar1)) {
      *(undefined4 *)(param_1 + 0x1c) = 1;
    }
  }
  else {
    (**(code **)(*(int *)(*(int *)(param_1 + 0xb26) + 8) + 0x60))();
    iVar1 = GetWindowTextLengthA(*(HWND *)(*(int *)(param_1 + 0x700) + 0xc));
    if (((0 < iVar1) &&
        (iVar1 = GetWindowTextLengthA(*(HWND *)(*(int *)(param_1 + 0x7b2) + 0xc)), 0 < iVar1)) &&
       (iVar1 = GetWindowTextLengthA(*(HWND *)(*(int *)(param_1 + 0x864) + 0xc)), 0 < iVar1)) {
      *(undefined4 *)(param_1 + 0x1c) = 1;
    }
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0xc7e) + 8) + 0x60))();
  return;
}

