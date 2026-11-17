// name: FUN_004ce5e0
// address: 0x4ce5e0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004ce5e0(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  piVar3 = (int *)FUN_004cda90(param_2);
  iVar1 = *piVar3;
  puVar4 = (undefined4 *)FUN_004cd864(iVar1);
  uVar5 = *puVar4;
  puVar4 = (undefined4 *)FUN_004cda90(param_2);
  *puVar4 = uVar5;
  piVar3 = (int *)FUN_004cd864(iVar1);
  bVar2 = FUN_004cda78(piVar3);
  if (!bVar2) {
    piVar3 = (int *)FUN_004cd864(iVar1);
    piVar3 = (int *)FUN_004cda1c(*piVar3);
    *piVar3 = param_2;
  }
  puVar4 = (undefined4 *)FUN_004cda1c(param_2);
  uVar5 = *puVar4;
  puVar4 = (undefined4 *)FUN_004cda1c(iVar1);
  *puVar4 = uVar5;
  piVar3 = (int *)FUN_004cda08(param_1);
  if (param_2 == *piVar3) {
    piVar3 = (int *)FUN_004cda08(param_1);
    *piVar3 = iVar1;
  }
  else {
    piVar3 = (int *)FUN_004cda1c(param_2);
    piVar3 = (int *)FUN_004cd864(*piVar3);
    if (param_2 == *piVar3) {
      piVar3 = (int *)FUN_004cda1c(param_2);
      piVar3 = (int *)FUN_004cd864(*piVar3);
      *piVar3 = iVar1;
    }
    else {
      piVar3 = (int *)FUN_004cda1c(param_2);
      piVar3 = (int *)FUN_004cda90(*piVar3);
      *piVar3 = iVar1;
    }
  }
  piVar3 = (int *)FUN_004cd864(iVar1);
  *piVar3 = param_2;
  piVar3 = (int *)FUN_004cda1c(param_2);
  *piVar3 = iVar1;
  return;
}

