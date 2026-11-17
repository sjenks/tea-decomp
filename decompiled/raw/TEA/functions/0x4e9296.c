// name: KERNEL32.DLL::FindResourceExA
// address: 0x4e9296
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HRSRC __stdcall FindResourceExA(HMODULE hModule,LPCSTR lpType,LPCSTR lpName,WORD wLanguage)

{
  HRSRC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9296. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = FindResourceExA(hModule,lpType,lpName,wLanguage);
  return pHVar1;
}

