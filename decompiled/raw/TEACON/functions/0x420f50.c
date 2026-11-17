// name: FUN_00420f50
// address: 0x420f50
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_00420f50(uint param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (param_2 == 0xffffffff) {
    param_2 = 0;
    for (piVar1 = &DAT_0043252c; ((int)param_2 < (int)DAT_00432528 && (*piVar1 != 0));
        piVar1 = piVar1 + 1) {
      param_2 = param_2 + 1;
    }
  }
  if ((param_1 < DAT_00432528) && (param_2 < DAT_00432528)) {
    if (((&DAT_0043252c)[param_1] != 0) && ((&DAT_0043252c)[param_2] == 0)) {
      (&DAT_0043252c)[param_2] = (&DAT_0043252c)[param_1];
      *(undefined4 *)(&DAT_00434d98 + param_2 * 4) = param_3;
      return param_2;
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}

