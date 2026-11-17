// name: FUN_00420e2c
// address: 0x420e2c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00420e2c(int param_1,int param_2)

{
  BOOL BVar1;
  
  if (param_2 == *(int *)(param_1 + 0x228) + 0x1e96) {
    BVar1 = IsWindowEnabled(*(HWND *)(*(int *)(param_1 + 0x444) + 0xc));
    if (BVar1 != 0) {
      FUN_0042056c(param_1,*(int *)(param_1 + 0x228) + 0x1edc);
      return;
    }
  }
  else if (param_2 == *(int *)(param_1 + 0x228) + 0x1ea0) {
    BVar1 = IsWindowEnabled(*(HWND *)(*(int *)(param_1 + 0x398) + 0xc));
    if (BVar1 != 0) {
      FUN_0042056c(param_1,*(int *)(param_1 + 0x228) + 0x1ed2);
    }
  }
  return;
}

