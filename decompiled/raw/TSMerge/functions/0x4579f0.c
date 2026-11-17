// name: FUN_004579f0
// address: 0x4579f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_004579f0(uint param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (param_2 == 0xffffffff) {
    param_2 = 0;
    for (piVar1 = &DAT_00474b3c; ((int)param_2 < (int)DAT_00474b38 && (*piVar1 != 0));
        piVar1 = piVar1 + 1) {
      param_2 = param_2 + 1;
    }
  }
  if ((param_1 < DAT_00474b38) && (param_2 < DAT_00474b38)) {
    if (((&DAT_00474b3c)[param_1] != 0) && ((&DAT_00474b3c)[param_2] == 0)) {
      (&DAT_00474b3c)[param_2] = (&DAT_00474b3c)[param_1];
      *(undefined4 *)(&DAT_00477ac0 + param_2 * 4) = param_3;
      return param_2;
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}

