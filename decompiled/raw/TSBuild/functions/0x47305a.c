// name: ADVAPI32.DLL::RegQueryValueExA
// address: 0x47305a
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LSTATUS __stdcall
RegQueryValueExA(HKEY hKey,LPCSTR lpValueName,LPDWORD lpReserved,LPDWORD lpType,LPBYTE lpData,
                LPDWORD lpcbData)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047305a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegQueryValueExA(hKey,lpValueName,lpReserved,lpType,lpData,lpcbData);
  return LVar1;
}

