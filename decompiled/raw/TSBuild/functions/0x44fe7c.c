// name: FUN_0044fe7c
// address: 0x44fe7c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HACCEL __cdecl FUN_0044fe7c(int param_1,LPCSTR param_2)

{
  HACCEL pHVar1;
  int iVar2;
  
  pHVar1 = LoadAcceleratorsA(*(HINSTANCE *)(param_1 + 8),param_2);
  if (pHVar1 == (HACCEL)0x0) {
    iVar2 = FUN_0044ef18(param_2,(LPCSTR)0x9);
    if (iVar2 != 0) {
      pHVar1 = FUN_0044fe7c(iVar2,param_2);
      return pHVar1;
    }
  }
  return pHVar1;
}

