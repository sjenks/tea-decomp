// name: ADVAPI32.DLL::RegCreateKeyExA
// address: 0x4e921e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LSTATUS __stdcall
RegCreateKeyExA(HKEY hKey,LPCSTR lpSubKey,DWORD Reserved,LPSTR lpClass,DWORD dwOptions,
               REGSAM samDesired,LPSECURITY_ATTRIBUTES lpSecurityAttributes,PHKEY phkResult,
               LPDWORD lpdwDisposition)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e921e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegCreateKeyExA(hKey,lpSubKey,Reserved,lpClass,dwOptions,samDesired,lpSecurityAttributes,
                          phkResult,lpdwDisposition);
  return LVar1;
}

