// name: KERNEL32.DLL::IsValidLocale
// address: 0x46046e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall IsValidLocale(LCID Locale,DWORD dwFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046046e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsValidLocale(Locale,dwFlags);
  return BVar1;
}

