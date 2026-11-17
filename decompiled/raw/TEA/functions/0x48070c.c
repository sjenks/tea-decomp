// name: FUN_0048070c
// address: 0x48070c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0048070c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_00480608(param_1);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xa8) - *(int *)(iVar1 + 0xa4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    uVar3 = *(undefined4 *)(((iVar2 >> 2) + -1) * 4 + *(int *)(iVar1 + 0xa4));
  }
  return uVar3;
}

