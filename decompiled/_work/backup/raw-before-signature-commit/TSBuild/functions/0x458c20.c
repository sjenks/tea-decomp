// name: FUN_00458c20
// address: 0x458c20
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00458c20(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  piVar2 = (int *)FUN_0045816c(param_2);
  iVar1 = *piVar2;
  if (iVar1 == *(int *)(param_1 + 0x24)) {
    piVar2 = (int *)FUN_00458204(param_1);
    *piVar2 = iVar1;
    piVar2 = (int *)FUN_004581ec(param_1);
    *piVar2 = iVar1;
    puVar3 = (undefined4 *)FUN_00458158(param_1);
    uVar4 = FUN_00458200();
    *puVar3 = uVar4;
  }
  else {
    piVar2 = (int *)FUN_00457fb4(iVar1);
    if (param_2 == *piVar2) {
      puVar3 = (undefined4 *)FUN_00457fb4(iVar1);
      uVar4 = FUN_00458200();
      *puVar3 = uVar4;
      piVar2 = (int *)FUN_004581ec(param_1);
      if (param_2 == *piVar2) {
        piVar2 = (int *)FUN_004581ec(param_1);
        *piVar2 = iVar1;
      }
    }
    else {
      puVar3 = (undefined4 *)FUN_004581e0(iVar1);
      uVar4 = FUN_00458200();
      *puVar3 = uVar4;
      piVar2 = (int *)FUN_00458204(param_1);
      if (param_2 == *piVar2) {
        piVar2 = (int *)FUN_00458204(param_1);
        *piVar2 = iVar1;
      }
    }
  }
  return;
}

