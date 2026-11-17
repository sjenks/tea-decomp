// name: FUN_00452d1c
// address: 0x452d1c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00452d1c(int param_1)

{
  int *piVar1;
  HWND pHVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x6d0);
  if (-1 < iVar3) {
    iVar4 = *(int *)(param_1 + 0x6b8) - *(int *)(param_1 + 0x6b4);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 3;
    }
    if (iVar3 < iVar4 >> 2) {
      piVar1 = *(int **)(*(int *)(iVar3 * 4 + *(int *)(param_1 + 0x6b4)) + 8);
      pHVar2 = GetFocus();
      if (pHVar2 == *(HWND *)(*piVar1 + 0xc)) {
        iVar3 = FUN_0042ba14((int)piVar1);
        return iVar3;
      }
    }
  }
  return 0;
}

