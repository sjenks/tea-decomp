// name: FUN_0045efb0
// address: 0x45efb0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0045efb0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0045bef8(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_0045bf04(param_1);
    iVar2 = FUN_0045bef8(param_1);
    return iVar1 - iVar2;
  }
  iVar1 = FUN_0045de3c(param_1);
  if ((iVar1 != 0) && (*(char *)(param_1 + 0x28) != '\0')) {
    iVar1 = FUN_0045de60(param_1);
    iVar2 = FUN_0045de3c(param_1);
    return iVar1 - iVar2;
  }
  return 0;
}

