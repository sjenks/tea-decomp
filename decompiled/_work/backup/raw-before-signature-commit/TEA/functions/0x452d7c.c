// name: FUN_00452d7c
// address: 0x452d7c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00452d7c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x6d0);
  if (-1 < iVar1) {
    iVar3 = *(int *)(param_1 + 0x6b8) - *(int *)(param_1 + 0x6b4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if (iVar1 < iVar3 >> 2) {
      uVar2 = FUN_0042ba08(*(int *)(*(int *)(iVar1 * 4 + *(int *)(param_1 + 0x6b4)) + 8));
      return uVar2;
    }
  }
  return 0;
}

