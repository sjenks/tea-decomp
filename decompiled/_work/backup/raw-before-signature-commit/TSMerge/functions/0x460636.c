// name: GDI32.DLL::ScaleWindowExtEx
// address: 0x460636
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall ScaleWindowExtEx(HDC hdc,int xn,int xd,int yn,int yd,LPSIZE lpsz)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460636. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ScaleWindowExtEx(hdc,xn,xd,yn,yd,lpsz);
  return BVar1;
}

