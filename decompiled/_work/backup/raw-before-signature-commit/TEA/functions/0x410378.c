// name: FUN_00410378
// address: 0x410378
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00410378(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = param_1;
  if (param_1 != param_2) {
    while (piVar2 = piVar3 + 1, piVar2 != param_2) {
      iVar1 = *piVar2;
      if (iVar1 < *param_1) {
        FUN_004094c0(param_1,piVar2,piVar3 + 2);
        *param_1 = iVar1;
        piVar3 = piVar2;
      }
      else {
        FUN_004103d4(piVar2,iVar1);
        piVar3 = piVar2;
      }
    }
  }
  return;
}

