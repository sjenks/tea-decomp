// name: FUN_0045d000
// address: 0x45d000
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0045d000(int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  piVar2 = (int *)FUN_00458cb8(*(undefined4 *)(param_1 + 8));
  if (*piVar2 == 0) {
    piVar2 = (int *)FUN_0045816c(*(int *)(param_1 + 8));
    piVar2 = (int *)FUN_0045816c(*piVar2);
    if (*piVar2 == *(int *)(param_1 + 8)) {
      puVar3 = (undefined4 *)FUN_004581e0(*(int *)(param_1 + 8));
      *(undefined4 *)(param_1 + 8) = *puVar3;
      return param_1;
    }
  }
  piVar2 = (int *)FUN_00457fb4(*(int *)(param_1 + 8));
  bVar1 = FUN_004581c8(piVar2);
  if (bVar1) {
    piVar2 = (int *)FUN_0045816c(*(int *)(param_1 + 8));
    iVar4 = *piVar2;
    while (piVar2 = (int *)FUN_00457fb4(iVar4), *piVar2 == *(int *)(param_1 + 8)) {
      *(int *)(param_1 + 8) = iVar4;
      piVar2 = (int *)FUN_0045816c(iVar4);
      iVar4 = *piVar2;
    }
    *(int *)(param_1 + 8) = iVar4;
  }
  else {
    piVar2 = (int *)FUN_00457fb4(*(int *)(param_1 + 8));
    iVar4 = *piVar2;
    while( true ) {
      piVar2 = (int *)FUN_004581e0(iVar4);
      bVar1 = FUN_004581c8(piVar2);
      if (bVar1) break;
      piVar2 = (int *)FUN_004581e0(iVar4);
      iVar4 = *piVar2;
    }
    *(int *)(param_1 + 8) = iVar4;
  }
  return param_1;
}

