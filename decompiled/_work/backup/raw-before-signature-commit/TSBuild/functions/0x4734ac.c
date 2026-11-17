// name: USER32.DLL::DrawTextA
// address: 0x4734ac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall DrawTextA(HDC hdc,LPCSTR lpchText,int cchText,LPRECT lprc,UINT format)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004734ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DrawTextA(hdc,lpchText,cchText,lprc,format);
  return iVar1;
}

