// name: GDI32.DLL::GetViewportOrgEx
// address: 0x4e95d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall GetViewportOrgEx(HDC hdc,LPPOINT lppoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e95d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetViewportOrgEx(hdc,lppoint);
  return BVar1;
}

