// name: FUN_0042064c
// address: 0x42064c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall FUN_0042064c(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar1 = &DAT_00432078;
  iVar2 = DAT_00432528;
  while (iVar2 != 0) {
    if (((*(byte *)((int)piVar1 + 0x12) & 3) != 0) && (piVar1[2] != 0)) {
      FUN_0042088c(piVar1);
      iVar3 = iVar3 + 1;
    }
    piVar1 = piVar1 + 6;
    iVar2 = iVar2 + -1;
  }
  return iVar3;
}

