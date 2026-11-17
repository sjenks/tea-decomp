// name: GDI32.DLL::ExtTextOutA
// address: 0x4605b2
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall
ExtTextOutA(HDC hdc,int x,int y,UINT options,RECT *lprect,LPCSTR lpString,UINT c,INT *lpDx)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004605b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ExtTextOutA(hdc,x,y,options,lprect,lpString,c,lpDx);
  return BVar1;
}

