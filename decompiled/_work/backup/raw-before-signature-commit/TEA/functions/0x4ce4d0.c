// name: FUN_004ce4d0
// address: 0x4ce4d0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004ce4d0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  piVar2 = (int *)FUN_004cda1c(param_2);
  iVar1 = *piVar2;
  if (iVar1 == *(int *)(param_1 + 0x24)) {
    piVar2 = (int *)FUN_004cdab4(param_1);
    *piVar2 = iVar1;
    piVar2 = (int *)FUN_004cda9c(param_1);
    *piVar2 = iVar1;
    puVar3 = (undefined4 *)FUN_004cda08(param_1);
    uVar4 = FUN_004cdab0();
    *puVar3 = uVar4;
  }
  else {
    piVar2 = (int *)FUN_004cd864(iVar1);
    if (param_2 == *piVar2) {
      puVar3 = (undefined4 *)FUN_004cd864(iVar1);
      uVar4 = FUN_004cdab0();
      *puVar3 = uVar4;
      piVar2 = (int *)FUN_004cda9c(param_1);
      if (param_2 == *piVar2) {
        piVar2 = (int *)FUN_004cda9c(param_1);
        *piVar2 = iVar1;
      }
    }
    else {
      puVar3 = (undefined4 *)FUN_004cda90(iVar1);
      uVar4 = FUN_004cdab0();
      *puVar3 = uVar4;
      piVar2 = (int *)FUN_004cdab4(param_1);
      if (param_2 == *piVar2) {
        piVar2 = (int *)FUN_004cdab4(param_1);
        *piVar2 = iVar1;
      }
    }
  }
  return;
}

