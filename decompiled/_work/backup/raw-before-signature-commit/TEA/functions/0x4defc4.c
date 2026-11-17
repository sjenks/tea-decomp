// name: FUN_004defc4
// address: 0x4defc4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004defc4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  for (piVar2 = &DAT_005177f4; (iVar1 < DAT_005177f0 && (*piVar2 != 0)); piVar2 = piVar2 + 1) {
    iVar1 = iVar1 + 1;
  }
  if (iVar1 == DAT_005177f0) {
    return -1;
  }
  (&DAT_005177f4)[iVar1] = param_2;
  *(undefined4 *)(&DAT_0051c0f8 + iVar1 * 4) = param_1;
  return iVar1;
}

