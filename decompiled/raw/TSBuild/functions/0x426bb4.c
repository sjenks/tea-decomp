// name: FUN_00426bb4
// address: 0x426bb4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00426bb4(int *param_1)

{
  BOOL BVar1;
  
  if (*(int *)((int)param_1 + 0x49) != 0) {
    BVar1 = KillTimer(*(HWND *)(*param_1 + 0xc),*(UINT_PTR *)((int)param_1 + 0x49));
    if (BVar1 != 0) {
      *(undefined4 *)((int)param_1 + 0x49) = 0;
    }
  }
  if (param_1[9] != 0) {
    (**(code **)(*(int *)param_1[9] + 0x40))();
    param_1[9] = 0;
  }
  FUN_00437d00();
  return;
}

