// name: FUN_004380e4
// address: 0x4380e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004380e4(int param_1)

{
  short sVar1;
  HWND pHVar2;
  LRESULT LVar3;
  
  if ((*(HWND *)(param_1 + 0xc) != (HWND)0x0) &&
     (pHVar2 = GetWindow(*(HWND *)(param_1 + 0xc),5), pHVar2 != (HWND)0x0)) {
    sVar1 = 1;
    for (pHVar2 = GetWindow(pHVar2,1); pHVar2 != (HWND)0x0; pHVar2 = GetWindow(pHVar2,3)) {
      LVar3 = FUN_00436e00(pHVar2,*(LPARAM *)(param_1 + 0x6c));
      if (LVar3 != 0) {
        *(short *)(LVar3 + 0x78) = sVar1;
        sVar1 = sVar1 + 1;
      }
    }
  }
  return;
}

