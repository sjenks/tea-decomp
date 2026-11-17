// name: GDI32.DLL::SetViewportOrgEx
// address: 0x4733e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall SetViewportOrgEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004733e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetViewportOrgEx(hdc,x,y,lppt);
  return BVar1;
}

