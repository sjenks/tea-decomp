// name: FUN_004a70e4
// address: 0x4a70e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a70e4(int param_1)

{
  DWORD DVar1;
  LONG LVar2;
  DWORD local_8;
  
  local_8 = 0;
  GetWindowThreadProcessId(*(HWND *)(param_1 + 0xc),&local_8);
  DVar1 = GetCurrentProcessId();
  if (DVar1 == local_8) {
    LVar2 = GetWindowLongA(*(HWND *)(param_1 + 0xc),-4);
    if (LVar2 == *(int *)(param_1 + 0x68)) {
      if (*(int *)(param_1 + 0x40) == 0) {
        *(code **)(param_1 + 0x40) = DefWindowProcA;
      }
    }
    else {
      FUN_0049ae74();
      LVar2 = SetWindowLongA(*(HWND *)(param_1 + 0xc),-4,*(LONG *)(param_1 + 0x68));
      *(LONG *)(param_1 + 0x40) = LVar2;
    }
  }
  return;
}

