// name: GDI32.DLL::BitBlt
// address: 0x4732d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall BitBlt(HDC hdc,int x,int y,int cx,int cy,HDC hdcSrc,int x1,int y1,DWORD rop)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004732d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = BitBlt(hdc,x,y,cx,cy,hdcSrc,x1,y1,rop);
  return BVar1;
}

