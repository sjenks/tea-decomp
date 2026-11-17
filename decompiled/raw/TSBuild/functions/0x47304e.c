// name: ADVAPI32.DLL::RegOpenKeyExA
// address: 0x47304e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LSTATUS __stdcall
RegOpenKeyExA(HKEY hKey,LPCSTR lpSubKey,DWORD ulOptions,REGSAM samDesired,PHKEY phkResult)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047304e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegOpenKeyExA(hKey,lpSubKey,ulOptions,samDesired,phkResult);
  return LVar1;
}

