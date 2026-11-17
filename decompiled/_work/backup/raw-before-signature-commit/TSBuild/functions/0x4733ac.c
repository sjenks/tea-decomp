// name: GDI32.DLL::ScaleViewportExtEx
// address: 0x4733ac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall ScaleViewportExtEx(HDC hdc,int xn,int dx,int yn,int yd,LPSIZE lpsz)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004733ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ScaleViewportExtEx(hdc,xn,dx,yn,yd,lpsz);
  return BVar1;
}

