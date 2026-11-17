// name: GDI32.DLL::CreateDIBPatternBrush
// address: 0x460570
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HBRUSH __stdcall CreateDIBPatternBrush(HGLOBAL h,UINT iUsage)

{
  HBRUSH pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateDIBPatternBrush(h,iUsage);
  return pHVar1;
}

