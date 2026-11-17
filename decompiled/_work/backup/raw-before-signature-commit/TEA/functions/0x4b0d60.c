// name: FUN_004b0d60
// address: 0x4b0d60
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004b0d60(int param_1,byte param_2)

{
  BOOL BVar1;
  
  BVar1 = IsWindowEnabled(*(HWND *)(param_1 + 8));
  if ((bool)param_2 != (BVar1 != 0)) {
    EnableWindow(*(HWND *)(param_1 + 8),(uint)param_2);
  }
  FUN_004a4da8(param_1);
  return;
}

