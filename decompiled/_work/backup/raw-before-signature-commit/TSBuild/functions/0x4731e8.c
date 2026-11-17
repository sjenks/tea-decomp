// name: KERNEL32.DLL::IsValidLocale
// address: 0x4731e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall IsValidLocale(LCID Locale,DWORD dwFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004731e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsValidLocale(Locale,dwFlags);
  return BVar1;
}

