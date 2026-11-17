// name: FUN_004287db
// address: 0x4287db
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004287db(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 8);
  while( true ) {
    if (*piVar2 == 0) {
      return (int *)0x0;
    }
    if ((int *)piVar2[1] == (int *)0x0) break;
    iVar1 = FUN_00427af9(*(int **)(param_2 + 4),*(undefined4 *)(param_2 + 8),(int *)piVar2[1],
                         (byte)*(undefined4 *)(param_2 + 0xc));
    if (iVar1 != 0) {
      return piVar2;
    }
    piVar2 = piVar2 + 5;
  }
  return piVar2;
}

