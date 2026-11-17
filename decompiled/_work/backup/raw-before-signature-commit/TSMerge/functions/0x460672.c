// name: GDI32.DLL::SetWindowExtEx
// address: 0x460672
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall SetWindowExtEx(HDC hdc,int x,int y,LPSIZE lpsz)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460672. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWindowExtEx(hdc,x,y,lpsz);
  return BVar1;
}

