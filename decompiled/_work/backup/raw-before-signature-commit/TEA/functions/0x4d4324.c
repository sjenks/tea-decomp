// name: FUN_004d4324
// address: 0x4d4324
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004d4324(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004d17a8(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_004d17b4(param_1);
    iVar2 = FUN_004d17a8(param_1);
    return iVar1 - iVar2;
  }
  iVar1 = FUN_004d348c(param_1);
  if ((iVar1 != 0) && (*(char *)(param_1 + 0x28) != '\0')) {
    iVar1 = FUN_004d34b0(param_1);
    iVar2 = FUN_004d348c(param_1);
    return iVar1 - iVar2;
  }
  return 0;
}

