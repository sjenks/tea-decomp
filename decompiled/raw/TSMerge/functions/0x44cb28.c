// name: FUN_0044cb28
// address: 0x44cb28
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0044cb28(int *param_1)

{
  int *piVar1;
  
  piVar1 = FUN_0044cab8();
  if (param_1 != piVar1) {
    *param_1 = *param_1 + -1;
    return *param_1 + 1;
  }
  return 1;
}

