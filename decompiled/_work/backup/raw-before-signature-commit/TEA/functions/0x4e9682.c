// name: GDI32.DLL::SetWindowOrgEx
// address: 0x4e9682
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall SetWindowOrgEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9682. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWindowOrgEx(hdc,x,y,lppt);
  return BVar1;
}

