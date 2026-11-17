// name: FUN_0045d6e0
// address: 0x45d6e0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_0045d6e0(uint *param_1)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  
  pcVar1 = FUN_00455bf0(param_1);
  piVar3 = DAT_00477dc8;
  if (pcVar1 == (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    for (; (*piVar3 != 0 &&
           ((iVar2 = FUN_0045d164((byte *)*piVar3,(byte *)param_1,(int)pcVar1), iVar2 != 0 ||
            (pcVar1[*piVar3] != '=')))); piVar3 = piVar3 + 1) {
    }
    if (*piVar3 == 0) {
      pcVar1 = (char *)0x0;
    }
    else {
      pcVar1 = pcVar1 + *piVar3 + 1;
    }
  }
  return pcVar1;
}

