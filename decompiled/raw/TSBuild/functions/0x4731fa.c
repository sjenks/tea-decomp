// name: KERNEL32.DLL::LoadLibraryA
// address: 0x4731fa
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HMODULE __stdcall LoadLibraryA(LPCSTR lpLibFileName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004731fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryA(lpLibFileName);
  return pHVar1;
}

