// name: GDI32.DLL::PatBlt
// address: 0x46060c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall PatBlt(HDC hdc,int x,int y,int w,int h,DWORD rop)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046060c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PatBlt(hdc,x,y,w,h,rop);
  return BVar1;
}

