// name: GDI32.DLL::GetWindowExtEx
// address: 0x4e95da
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall GetWindowExtEx(HDC hdc,LPSIZE lpsize)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e95da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetWindowExtEx(hdc,lpsize);
  return BVar1;
}

