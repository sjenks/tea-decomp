// name: FUN_0045f4af
// address: 0x45f4af
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0045f4af(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 8);
  while( true ) {
    if (*piVar2 == 0) {
      return (int *)0x0;
    }
    if ((int *)piVar2[1] == (int *)0x0) break;
    iVar1 = FUN_0045e7cd(*(int **)(param_2 + 4),*(undefined4 *)(param_2 + 8),(int *)piVar2[1],
                         (byte)*(undefined4 *)(param_2 + 0xc));
    if (iVar1 != 0) {
      return piVar2;
    }
    piVar2 = piVar2 + 5;
  }
  return piVar2;
}

