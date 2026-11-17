// name: FUN_00495318
// address: 0x495318
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00495318(int param_1)

{
  int *piVar1;
  int iVar2;
  
  for (piVar1 = *(int **)(param_1 + 0x20); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[8]) {
    iVar2 = FUN_00495f04(piVar1);
    *(int *)piVar1[3] = iVar2;
  }
  return;
}

