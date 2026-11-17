// name: KERNEL32.DLL::SetThreadLocale
// address: 0x4604f8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall SetThreadLocale(LCID Locale)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004604f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetThreadLocale(Locale);
  return BVar1;
}

