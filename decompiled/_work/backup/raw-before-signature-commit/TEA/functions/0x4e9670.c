// name: GDI32.DLL::SetViewportExtEx
// address: 0x4e9670
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall SetViewportExtEx(HDC hdc,int x,int y,LPSIZE lpsz)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetViewportExtEx(hdc,x,y,lpsz);
  return BVar1;
}

