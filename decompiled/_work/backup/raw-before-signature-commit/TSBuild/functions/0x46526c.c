// name: FUN_0046526c
// address: 0x46526c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_0046526c(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  for (piVar1 = DAT_0048d06c; ((uVar2 < DAT_0048d070 && (*piVar1 != 0)) && (param_1 != *piVar1));
      piVar1 = piVar1 + 1) {
    uVar2 = uVar2 + 1;
  }
  if (DAT_0048d06c[uVar2] == 0) {
    return DAT_0048d070;
  }
  return uVar2;
}

