// name: FUN_004cdb24
// address: 0x4cdb24
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004cdb24(int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  piVar2 = (int *)FUN_004cda90(*(int *)(param_1 + 8));
  bVar1 = FUN_004cda78(piVar2);
  if (bVar1) {
    piVar2 = (int *)FUN_004cda1c(*(int *)(param_1 + 8));
    iVar4 = *piVar2;
    while (piVar2 = (int *)FUN_004cda90(iVar4), *piVar2 == *(int *)(param_1 + 8)) {
      *(int *)(param_1 + 8) = iVar4;
      piVar2 = (int *)FUN_004cda1c(iVar4);
      iVar4 = *piVar2;
    }
    piVar2 = (int *)FUN_004cda90(*(int *)(param_1 + 8));
    if (iVar4 != *piVar2) {
      *(int *)(param_1 + 8) = iVar4;
    }
  }
  else {
    puVar3 = (undefined4 *)FUN_004cda90(*(int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = *puVar3;
    while( true ) {
      piVar2 = (int *)FUN_004cd864(*(int *)(param_1 + 8));
      bVar1 = FUN_004cda78(piVar2);
      if (bVar1) break;
      puVar3 = (undefined4 *)FUN_004cd864(*(int *)(param_1 + 8));
      *(undefined4 *)(param_1 + 8) = *puVar3;
    }
  }
  return param_1;
}

