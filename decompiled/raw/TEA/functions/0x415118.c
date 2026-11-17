// name: FUN_00415118
// address: 0x415118
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00415118(int param_1)

{
  int iVar1;
  
  iVar1 = GetDlgCtrlID(*(HWND *)(param_1 + 0xc));
  if (((iVar1 != 2) && (iVar1 != 0x286e)) && (iVar1 != 0x5fa)) {
    (**(code **)(*(int *)(param_1 + 8) + 0x60))();
  }
  return;
}

