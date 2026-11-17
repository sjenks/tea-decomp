// name: FUN_004c1b34
// address: 0x4c1b34
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HCURSOR __cdecl FUN_004c1b34(int param_1,LPCSTR param_2)

{
  HCURSOR pHVar1;
  int iVar2;
  
  pHVar1 = LoadCursorA(*(HINSTANCE *)(param_1 + 8),param_2);
  if (pHVar1 == (HCURSOR)0x0) {
    iVar2 = FUN_004c0b38(param_2,(LPCSTR)0x1);
    if (iVar2 != 0) {
      pHVar1 = FUN_004c1b34(iVar2,param_2);
      return pHVar1;
    }
  }
  return pHVar1;
}

