// name: FUN_00450e88
// address: 0x450e88
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00450e88(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0044f29c(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_0044f2a8(param_1);
    iVar2 = FUN_0044f29c(param_1);
    return iVar1 - iVar2;
  }
  iVar1 = FUN_00450228(param_1);
  if ((iVar1 != 0) && (*(char *)(param_1 + 0x28) != '\0')) {
    iVar1 = FUN_0045024c(param_1);
    iVar2 = FUN_00450228(param_1);
    return iVar1 - iVar2;
  }
  return 0;
}

