// name: KERNEL32.DLL::FindResourceA
// address: 0x4e9290
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HRSRC __stdcall FindResourceA(HMODULE hModule,LPCSTR lpName,LPCSTR lpType)

{
  HRSRC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = FindResourceA(hModule,lpName,lpType);
  return pHVar1;
}

