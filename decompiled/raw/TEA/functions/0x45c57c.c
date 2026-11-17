// name: FUN_0045c57c
// address: 0x45c57c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045c57c(int param_1,int param_2)

{
  uint uVar1;
  HWND pHVar2;
  int iVar3;
  
  uVar1 = 0;
  while( true ) {
    iVar3 = *(int *)(param_1 + 0x6b8) - *(int *)(param_1 + 0x6b4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if ((uint)(iVar3 >> 2) <= uVar1) break;
    iVar3 = *(int *)(*(int *)(param_1 + 0x6b4) + uVar1 * 4);
    if (*(int *)(iVar3 + 4) == param_2) {
      pHVar2 = GetFocus();
      if (pHVar2 == *(HWND *)(**(int **)(iVar3 + 8) + 0xc)) {
        return;
      }
      SetFocus(*(HWND *)(**(int **)(iVar3 + 8) + 0xc));
      return;
    }
    uVar1 = uVar1 + 1;
  }
  return;
}

