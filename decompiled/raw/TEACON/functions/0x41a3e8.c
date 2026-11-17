// name: FUN_0041a3e8
// address: 0x41a3e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0041a3e8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00418cd4(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_00418ce0(param_1);
    iVar2 = FUN_00418cd4(param_1);
    return iVar1 - iVar2;
  }
  iVar1 = FUN_004197a4(param_1);
  if ((iVar1 != 0) && (*(char *)(param_1 + 0x28) != '\0')) {
    iVar1 = FUN_004197c8(param_1);
    iVar2 = FUN_004197a4(param_1);
    return iVar1 - iVar2;
  }
  return 0;
}

