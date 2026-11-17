// name: KERNEL32.DLL::SetThreadLocale
// address: 0x42973e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall SetThreadLocale(LCID Locale)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042973e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetThreadLocale(Locale);
  return BVar1;
}

