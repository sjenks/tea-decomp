// name: FUN_0041dcdc
// address: 0x41dcdc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041dcdc(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if ((int)((uint)*(byte *)(param_1 + 0x15) << 0x1c) >> 0x1c != 1) {
    if (*(int *)((int)param_1 + 6) != 0) {
      piVar4 = (int *)0x0;
      for (piVar2 = *(int **)(*(int *)((int)param_1 + 6) + 8);
          (piVar2 != (int *)0x0 && (piVar2 != param_1)); piVar2 = *(int **)((int)piVar2 + 0x3e)) {
        if (piVar2 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *piVar2;
        }
        piVar1 = FUN_00468488((int)piVar2,iVar3,(int *)&DAT_0041d680,(int *)&DAT_0041d840,0);
        if ((piVar1 == (int *)0x0) ||
           (((int)((uint)*(byte *)(piVar1 + 0x15) << 0x18) >> 0x1c != 1 &&
            ((int)((uint)*(byte *)(piVar1 + 0x15) << 0x18) >> 0x1c != 3)))) {
          piVar4 = (int *)0x0;
        }
        else if (piVar4 == (int *)0x0) {
          piVar4 = piVar1;
        }
      }
      piVar2 = param_1;
      if (piVar4 == (int *)0x0) {
        piVar4 = param_1;
      }
      while (piVar1 = piVar2, *(int *)((int)piVar1 + 0x3e) != 0) {
        piVar2 = *(int **)((int)piVar1 + 0x3e);
        if (piVar2 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *piVar2;
        }
        piVar2 = FUN_00468488((int)piVar2,iVar3,(int *)&DAT_0041d680,(int *)&DAT_0041d840,0);
        if ((piVar2 == (int *)0x0) ||
           (((int)((uint)*(byte *)(piVar2 + 0x15) << 0x18) >> 0x1c != 1 &&
            ((int)((uint)*(byte *)(piVar2 + 0x15) << 0x18) >> 0x1c != 3)))) break;
      }
      while( true ) {
        if ((int)((uint)*(byte *)(piVar4 + 0x15) << 0x1c) >> 0x1c == 1) {
          *(byte *)(piVar4 + 0x15) = *(byte *)(piVar4 + 0x15) & 0xf0;
          FUN_0042477c((int)piVar4);
          FUN_004247c8((int)piVar4);
        }
        if (piVar1 == piVar4) break;
        piVar2 = *(int **)((int)piVar4 + 0x3e);
        if (piVar2 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *piVar2;
        }
        piVar4 = FUN_00468488((int)piVar2,iVar3,(int *)&DAT_0041d680,(int *)&DAT_0041d840,0);
      }
    }
    *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) & 0xf0 | 1;
  }
  return;
}

