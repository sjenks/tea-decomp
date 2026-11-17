// name: FUN_00458274
// address: 0x458274
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00458274(int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  piVar2 = (int *)FUN_004581e0(*(int *)(param_1 + 8));
  bVar1 = FUN_004581c8(piVar2);
  if (bVar1) {
    piVar2 = (int *)FUN_0045816c(*(int *)(param_1 + 8));
    iVar4 = *piVar2;
    while (piVar2 = (int *)FUN_004581e0(iVar4), *piVar2 == *(int *)(param_1 + 8)) {
      *(int *)(param_1 + 8) = iVar4;
      piVar2 = (int *)FUN_0045816c(iVar4);
      iVar4 = *piVar2;
    }
    piVar2 = (int *)FUN_004581e0(*(int *)(param_1 + 8));
    if (iVar4 != *piVar2) {
      *(int *)(param_1 + 8) = iVar4;
    }
  }
  else {
    puVar3 = (undefined4 *)FUN_004581e0(*(int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = *puVar3;
    while( true ) {
      piVar2 = (int *)FUN_00457fb4(*(int *)(param_1 + 8));
      bVar1 = FUN_004581c8(piVar2);
      if (bVar1) break;
      puVar3 = (undefined4 *)FUN_00457fb4(*(int *)(param_1 + 8));
      *(undefined4 *)(param_1 + 8) = *puVar3;
    }
  }
  return param_1;
}

