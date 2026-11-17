// name: USER32.DLL::LoadMenuA
// address: 0x4e991c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HMENU __stdcall LoadMenuA(HINSTANCE hInstance,LPCSTR lpMenuName)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e991c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadMenuA(hInstance,lpMenuName);
  return pHVar1;
}

