// name: FUN_0044ca94
// address: 0x44ca94
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0044ca94(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = FUN_0044cab8();
  if (param_1 != piVar1) {
    iVar2 = FUN_0044cb28(param_1);
    return iVar2;
  }
  return 1;
}

