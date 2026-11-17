// name: ADVAPI32.DLL::RegSetValueExA
// address: 0x4e9236
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LSTATUS __stdcall
RegSetValueExA(HKEY hKey,LPCSTR lpValueName,DWORD Reserved,DWORD dwType,BYTE *lpData,DWORD cbData)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9236. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegSetValueExA(hKey,lpValueName,Reserved,dwType,lpData,cbData);
  return LVar1;
}

