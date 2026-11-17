// name: FUN_004d2628
// address: 0x4d2628
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004d2628(int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  piVar2 = (int *)FUN_004ce568(*(undefined4 *)(param_1 + 8));
  if (*piVar2 == 0) {
    piVar2 = (int *)FUN_004cda1c(*(int *)(param_1 + 8));
    piVar2 = (int *)FUN_004cda1c(*piVar2);
    if (*piVar2 == *(int *)(param_1 + 8)) {
      puVar3 = (undefined4 *)FUN_004cda90(*(int *)(param_1 + 8));
      *(undefined4 *)(param_1 + 8) = *puVar3;
      return param_1;
    }
  }
  piVar2 = (int *)FUN_004cd864(*(int *)(param_1 + 8));
  bVar1 = FUN_004cda78(piVar2);
  if (bVar1) {
    piVar2 = (int *)FUN_004cda1c(*(int *)(param_1 + 8));
    iVar4 = *piVar2;
    while (piVar2 = (int *)FUN_004cd864(iVar4), *piVar2 == *(int *)(param_1 + 8)) {
      *(int *)(param_1 + 8) = iVar4;
      piVar2 = (int *)FUN_004cda1c(iVar4);
      iVar4 = *piVar2;
    }
    *(int *)(param_1 + 8) = iVar4;
  }
  else {
    piVar2 = (int *)FUN_004cd864(*(int *)(param_1 + 8));
    iVar4 = *piVar2;
    while( true ) {
      piVar2 = (int *)FUN_004cda90(iVar4);
      bVar1 = FUN_004cda78(piVar2);
      if (bVar1) break;
      piVar2 = (int *)FUN_004cda90(iVar4);
      iVar4 = *piVar2;
    }
    *(int *)(param_1 + 8) = iVar4;
  }
  return param_1;
}

