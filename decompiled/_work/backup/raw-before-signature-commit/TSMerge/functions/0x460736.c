// name: USER32.DLL::DrawTextExA
// address: 0x460736
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall
DrawTextExA(HDC hdc,LPSTR lpchText,int cchText,LPRECT lprc,UINT format,LPDRAWTEXTPARAMS lpdtp)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460736. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DrawTextExA(hdc,lpchText,cchText,lprc,format,lpdtp);
  return iVar1;
}

