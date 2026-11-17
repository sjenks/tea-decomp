// name: GDI32.DLL::GetViewportExtEx
// address: 0x4e95ce
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall GetViewportExtEx(HDC hdc,LPSIZE lpsize)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e95ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetViewportExtEx(hdc,lpsize);
  return BVar1;
}

