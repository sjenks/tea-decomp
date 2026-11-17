// name: FUN_0042503c
// address: 0x42503c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0042503c(int param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  while ((piVar1 != (int *)0x0 && (cVar2 = (**(code **)(*piVar1 + 0x2c))(), cVar2 == '\0'))) {
    piVar1 = *(int **)((int)piVar1 + 0x3e);
  }
  return piVar1;
}

