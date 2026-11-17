// name: FUN_00444d80
// address: 0x444d80
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HCURSOR __cdecl FUN_00444d80(int param_1,LPCSTR param_2)

{
  HCURSOR pHVar1;
  int iVar2;
  
  pHVar1 = LoadCursorA(*(HINSTANCE *)(param_1 + 8),param_2);
  if (pHVar1 == (HCURSOR)0x0) {
    iVar2 = FUN_00443d84(param_2,(LPCSTR)0x1);
    if (iVar2 != 0) {
      pHVar1 = FUN_00444d80(iVar2,param_2);
      return pHVar1;
    }
  }
  return pHVar1;
}

