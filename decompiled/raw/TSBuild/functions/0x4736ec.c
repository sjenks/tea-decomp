// name: USER32.DLL::UnregisterClassA
// address: 0x4736ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall UnregisterClassA(LPCSTR lpClassName,HINSTANCE hInstance)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004736ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnregisterClassA(lpClassName,hInstance);
  return BVar1;
}

