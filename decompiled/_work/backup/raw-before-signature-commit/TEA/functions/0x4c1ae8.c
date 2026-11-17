// name: FUN_004c1ae8
// address: 0x4c1ae8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HMENU __cdecl FUN_004c1ae8(int param_1,LPCSTR param_2)

{
  HMENU pHVar1;
  int iVar2;
  
  pHVar1 = LoadMenuA(*(HINSTANCE *)(param_1 + 8),param_2);
  if (pHVar1 == (HMENU)0x0) {
    iVar2 = FUN_004c0b38(param_2,(LPCSTR)0x4);
    if (iVar2 != 0) {
      pHVar1 = FUN_004c1ae8(iVar2,param_2);
      return pHVar1;
    }
  }
  return pHVar1;
}

