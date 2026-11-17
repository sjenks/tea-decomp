// name: FUN_00411848
// address: 0x411848
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00411848(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  piVar1 = *(int **)(param_1 + 8);
  while( true ) {
    if ((int *)(*(int *)(param_1 + 4) * 8 + *(int *)(param_1 + 8)) <= piVar1) {
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)FUN_004119ac(param_1);
      }
      *piVar2 = param_2;
      piVar2[1] = param_3;
      return;
    }
    if (param_2 == *piVar1) break;
    if ((piVar2 == (int *)0x0) && (*piVar1 == 0)) {
      piVar2 = piVar1;
    }
    piVar1 = piVar1 + 2;
  }
  piVar1[1] = param_3;
  return;
}

