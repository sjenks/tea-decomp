// name: FUN_00410420
// address: 0x410420
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00410420(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  while( true ) {
    iVar5 = (int)param_2 - (int)param_1;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 3;
    }
    if (iVar5 >> 2 < 0x11) break;
    piVar1 = param_2 + -1;
    iVar3 = iVar5 >> 3;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((iVar5 >> 2 & 1U) != 0);
    }
    piVar4 = param_1 + iVar3;
    if (*param_1 < *piVar4) {
      piVar2 = piVar4;
      if ((*piVar1 <= *piVar4) && (piVar2 = param_1, *param_1 < *piVar1)) {
        piVar2 = piVar1;
      }
    }
    else {
      piVar2 = param_1;
      if ((*piVar1 <= *param_1) && (piVar2 = piVar4, *piVar4 < *piVar1)) {
        piVar2 = piVar1;
      }
    }
    piVar1 = (int *)FUN_004104e8(param_1,param_2,*piVar2);
    iVar5 = (int)piVar1 - (int)param_1;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 3;
    }
    iVar3 = (int)param_2 - (int)piVar1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if (iVar5 >> 2 < iVar3 >> 2) {
      FUN_00410420(param_1,piVar1);
      param_1 = piVar1;
    }
    else {
      FUN_00410420(piVar1,param_2);
      param_2 = piVar1;
    }
  }
  return;
}

