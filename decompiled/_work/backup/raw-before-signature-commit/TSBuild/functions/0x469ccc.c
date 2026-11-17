// name: FUN_00469ccc
// address: 0x469ccc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00469ccc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  for (piVar2 = &DAT_00489528; (iVar1 < DAT_00489524 && (*piVar2 != 0)); piVar2 = piVar2 + 1) {
    iVar1 = iVar1 + 1;
  }
  if (iVar1 == DAT_00489524) {
    return -1;
  }
  (&DAT_00489528)[iVar1] = param_2;
  *(undefined4 *)(&DAT_0048d570 + iVar1 * 4) = param_1;
  return iVar1;
}

