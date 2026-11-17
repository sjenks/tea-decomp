// name: FUN_004579b0
// address: 0x4579b0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004579b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  for (piVar2 = &DAT_00474b3c; (iVar1 < DAT_00474b38 && (*piVar2 != 0)); piVar2 = piVar2 + 1) {
    iVar1 = iVar1 + 1;
  }
  if (iVar1 == DAT_00474b38) {
    return -1;
  }
  (&DAT_00474b3c)[iVar1] = param_2;
  *(undefined4 *)(&DAT_00477ac0 + iVar1 * 4) = param_1;
  return iVar1;
}

