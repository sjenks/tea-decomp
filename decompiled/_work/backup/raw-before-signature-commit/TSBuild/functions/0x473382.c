// name: GDI32.DLL::OffsetViewportOrgEx
// address: 0x473382
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall OffsetViewportOrgEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473382. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = OffsetViewportOrgEx(hdc,x,y,lppt);
  return BVar1;
}

