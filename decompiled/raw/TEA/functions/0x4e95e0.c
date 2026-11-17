// name: GDI32.DLL::GetWindowOrgEx
// address: 0x4e95e0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall GetWindowOrgEx(HDC hdc,LPPOINT lppoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e95e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetWindowOrgEx(hdc,lppoint);
  return BVar1;
}

