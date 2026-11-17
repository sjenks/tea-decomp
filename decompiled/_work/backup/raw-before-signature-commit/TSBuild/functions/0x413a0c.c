// name: FUN_00413a0c
// address: 0x413a0c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00413a0c(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if ((*piVar1 == 0) && (piVar1 == *(int **)(piVar1[1] + 4))) {
    *(int *)(param_1 + 8) = piVar1[3];
  }
  else if (*(int *)(*(int *)(param_1 + 8) + 8) == 0) {
    for (iVar2 = *(int *)(*(int *)(param_1 + 8) + 4); *(int *)(param_1 + 8) == *(int *)(iVar2 + 8);
        iVar2 = *(int *)(iVar2 + 4)) {
      *(int *)(param_1 + 8) = iVar2;
    }
    *(int *)(param_1 + 8) = iVar2;
  }
  else {
    for (iVar2 = *(int *)(*(int *)(param_1 + 8) + 8); *(int *)(iVar2 + 0xc) != 0;
        iVar2 = *(int *)(iVar2 + 0xc)) {
    }
    *(int *)(param_1 + 8) = iVar2;
  }
  return;
}

