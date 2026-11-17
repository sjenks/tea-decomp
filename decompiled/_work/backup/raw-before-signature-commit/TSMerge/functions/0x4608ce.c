// name: USER32.DLL::RegisterWindowMessageA
// address: 0x4608ce
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

UINT __stdcall RegisterWindowMessageA(LPCSTR lpString)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004608ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = RegisterWindowMessageA(lpString);
  return UVar1;
}

