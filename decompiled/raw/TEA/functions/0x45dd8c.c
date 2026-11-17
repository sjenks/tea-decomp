// name: FUN_0045dd8c
// address: 0x45dd8c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0045dd8c(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int local_28 [9];
  
  iVar3 = 0;
  piVar1 = local_28;
  do {
    *piVar1 = 0;
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar3 < 9);
  uVar2 = 0;
  while( true ) {
    iVar3 = *(int *)(param_1 + 0x6b8) - *(int *)(param_1 + 0x6b4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if ((uint)(iVar3 >> 2) <= uVar2) break;
    local_28[*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x6b4) + uVar2 * 4) + 8) + 0xec) +
             -0x10a4] = 1;
    uVar2 = uVar2 + 1;
  }
  iVar3 = 0;
  piVar1 = local_28;
  do {
    if (*piVar1 == 0) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar3 < 9);
  return 0;
}

