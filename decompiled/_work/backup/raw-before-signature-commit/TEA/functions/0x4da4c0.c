// name: FUN_004da4c0
// address: 0x4da4c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_004da4c0(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  for (piVar1 = DAT_0051bbf0; ((uVar2 < DAT_0051bbf4 && (*piVar1 != 0)) && (param_1 != *piVar1));
      piVar1 = piVar1 + 1) {
    uVar2 = uVar2 + 1;
  }
  if (DAT_0051bbf0[uVar2] == 0) {
    return DAT_0051bbf4;
  }
  return uVar2;
}

