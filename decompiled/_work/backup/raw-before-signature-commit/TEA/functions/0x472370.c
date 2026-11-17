// name: FUN_00472370
// address: 0x472370
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00472370(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x88) + -6;
  iVar3 = *(int *)(param_1 + 0x88) + 3;
  if (iVar1 < 0) {
    iVar3 = iVar3 - iVar1;
    iVar1 = 0;
  }
  iVar2 = *(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xf;
  }
  iVar2 = (iVar2 >> 4) + -1;
  if ((iVar2 < iVar3) && (iVar1 = iVar1 - (iVar3 - iVar2), iVar1 < 0)) {
    iVar1 = 0;
  }
  return iVar1 + 1;
}

