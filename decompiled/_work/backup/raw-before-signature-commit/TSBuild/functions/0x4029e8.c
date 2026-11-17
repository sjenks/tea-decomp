// name: FUN_004029e8
// address: 0x4029e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004029e8(int param_1)

{
  int iVar1;
  
  iVar1 = GetWindowTextLengthA(*(HWND *)(*(int *)(param_1 + 0xd6) + 0xc));
  if ((*(int *)(param_1 + 0x20) != 0) && (0 < iVar1)) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x702) + 8) + 0x60))();
    *(undefined4 *)(param_1 + 0x1c) = 1;
    return;
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0x702) + 8) + 0x60))();
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

