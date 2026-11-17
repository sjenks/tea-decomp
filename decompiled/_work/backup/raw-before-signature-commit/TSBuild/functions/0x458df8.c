// name: FUN_00458df8
// address: 0x458df8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00458df8(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  piVar3 = (int *)FUN_00457fb4(param_2);
  iVar1 = *piVar3;
  puVar4 = (undefined4 *)FUN_004581e0(iVar1);
  uVar5 = *puVar4;
  puVar4 = (undefined4 *)FUN_00457fb4(param_2);
  *puVar4 = uVar5;
  piVar3 = (int *)FUN_004581e0(iVar1);
  bVar2 = FUN_004581c8(piVar3);
  if (!bVar2) {
    piVar3 = (int *)FUN_004581e0(iVar1);
    piVar3 = (int *)FUN_0045816c(*piVar3);
    *piVar3 = param_2;
  }
  puVar4 = (undefined4 *)FUN_0045816c(param_2);
  uVar5 = *puVar4;
  puVar4 = (undefined4 *)FUN_0045816c(iVar1);
  *puVar4 = uVar5;
  piVar3 = (int *)FUN_00458158(param_1);
  if (param_2 == *piVar3) {
    piVar3 = (int *)FUN_00458158(param_1);
    *piVar3 = iVar1;
  }
  else {
    piVar3 = (int *)FUN_0045816c(param_2);
    piVar3 = (int *)FUN_004581e0(*piVar3);
    if (param_2 == *piVar3) {
      piVar3 = (int *)FUN_0045816c(param_2);
      piVar3 = (int *)FUN_004581e0(*piVar3);
      *piVar3 = iVar1;
    }
    else {
      piVar3 = (int *)FUN_0045816c(param_2);
      piVar3 = (int *)FUN_00457fb4(*piVar3);
      *piVar3 = iVar1;
    }
  }
  piVar3 = (int *)FUN_004581e0(iVar1);
  *piVar3 = param_2;
  piVar3 = (int *)FUN_0045816c(param_2);
  *piVar3 = iVar1;
  return;
}

