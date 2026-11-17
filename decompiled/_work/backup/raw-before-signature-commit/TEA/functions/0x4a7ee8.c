// name: FUN_004a7ee8
// address: 0x4a7ee8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a7ee8(int param_1,int param_2,HWND param_3)

{
  LRESULT LVar1;
  
  if (param_2 == 0) {
    if ((*(byte *)(param_1 + 0x74) & 0x10) == 0) {
      LVar1 = FUN_004a614c(param_3,*(LPARAM *)(param_1 + 0x6c));
      if (LVar1 != 0) {
        (**(code **)(*(int *)(LVar1 + 8) + 0x2c))();
      }
    }
    else {
      (**(code **)(*(int *)(param_1 + 8) + 0x2c))();
    }
  }
  FUN_004a5774(param_1);
  return;
}

