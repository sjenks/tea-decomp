// name: ADVAPI32.DLL::RegQueryInfoKeyA
// address: 0x473054
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LSTATUS __stdcall
RegQueryInfoKeyA(HKEY hKey,LPSTR lpClass,LPDWORD lpcchClass,LPDWORD lpReserved,LPDWORD lpcSubKeys,
                LPDWORD lpcbMaxSubKeyLen,LPDWORD lpcbMaxClassLen,LPDWORD lpcValues,
                LPDWORD lpcbMaxValueNameLen,LPDWORD lpcbMaxValueLen,LPDWORD lpcbSecurityDescriptor,
                PFILETIME lpftLastWriteTime)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegQueryInfoKeyA(hKey,lpClass,lpcchClass,lpReserved,lpcSubKeys,lpcbMaxSubKeyLen,
                           lpcbMaxClassLen,lpcValues,lpcbMaxValueNameLen,lpcbMaxValueLen,
                           lpcbSecurityDescriptor,lpftLastWriteTime);
  return LVar1;
}

