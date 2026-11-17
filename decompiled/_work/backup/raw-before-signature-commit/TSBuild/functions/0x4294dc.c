// name: FUN_004294dc
// address: 0x4294dc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004294dc(int param_1)

{
  int *piVar1;
  int iVar2;
  
  for (piVar1 = *(int **)(param_1 + 0x20); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[8]) {
    iVar2 = FUN_0042a0c8(piVar1);
    *(int *)piVar1[3] = iVar2;
  }
  return;
}

