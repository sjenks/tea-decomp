// name: KERNEL32.DLL::FreeLibrary
// address: 0x460348
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall FreeLibrary(HMODULE hLibModule)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeLibrary(hLibModule);
  return BVar1;
}

