// name: USER32.DLL::FindWindowA
// address: 0x460766
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HWND __stdcall FindWindowA(LPCSTR lpClassName,LPCSTR lpWindowName)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460766. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = FindWindowA(lpClassName,lpWindowName);
  return pHVar1;
}

