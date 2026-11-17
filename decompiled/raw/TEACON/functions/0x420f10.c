// name: FUN_00420f10
// address: 0x420f10
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00420f10(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  for (piVar2 = &DAT_0043252c; (iVar1 < DAT_00432528 && (*piVar2 != 0)); piVar2 = piVar2 + 1) {
    iVar1 = iVar1 + 1;
  }
  if (iVar1 == DAT_00432528) {
    return -1;
  }
  (&DAT_0043252c)[iVar1] = param_2;
  *(undefined4 *)(&DAT_00434d98 + iVar1 * 4) = param_1;
  return iVar1;
}

