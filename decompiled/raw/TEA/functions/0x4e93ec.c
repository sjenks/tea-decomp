// name: KERNEL32.DLL::LCMapStringA
// address: 0x4e93ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall
LCMapStringA(LCID Locale,DWORD dwMapFlags,LPCSTR lpSrcStr,int cchSrc,LPSTR lpDestStr,int cchDest)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e93ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LCMapStringA(Locale,dwMapFlags,lpSrcStr,cchSrc,lpDestStr,cchDest);
  return iVar1;
}

