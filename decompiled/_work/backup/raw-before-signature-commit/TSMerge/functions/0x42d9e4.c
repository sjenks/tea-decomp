// name: FUN_0042d9e4
// address: 0x42d9e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042d9e4(int param_1,int param_2,HWND param_3)

{
  LRESULT LVar1;
  
  if (param_2 == 0) {
    if ((*(byte *)(param_1 + 0x74) & 0x10) == 0) {
      LVar1 = FUN_0042bc6c(param_3,*(LPARAM *)(param_1 + 0x6c));
      if (LVar1 != 0) {
        (**(code **)(*(int *)(LVar1 + 8) + 0x2c))();
      }
    }
    else {
      (**(code **)(*(int *)(param_1 + 8) + 0x2c))();
    }
  }
  FUN_0042b294(param_1);
  return;
}

