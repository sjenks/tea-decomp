// name: GDI32.DLL::TextOutA
// address: 0x460678
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall TextOutA(HDC hdc,int x,int y,LPCSTR lpString,int c)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TextOutA(hdc,x,y,lpString,c);
  return BVar1;
}

