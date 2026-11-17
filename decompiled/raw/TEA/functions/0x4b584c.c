// name: FUN_004b584c
// address: 0x4b584c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004b584c(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x2a);
  while( true ) {
    if (*piVar1 == 0) {
      return;
    }
    if (param_2 == *piVar1) break;
    piVar1 = (int *)(*piVar1 + 4);
  }
  *piVar1 = *(int *)(param_2 + 4);
  return;
}

