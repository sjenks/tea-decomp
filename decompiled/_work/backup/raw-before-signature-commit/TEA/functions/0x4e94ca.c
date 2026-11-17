// name: KERNEL32.DLL::WritePrivateProfileStringA
// address: 0x4e94ca
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall
WritePrivateProfileStringA(LPCSTR lpAppName,LPCSTR lpKeyName,LPCSTR lpString,LPCSTR lpFileName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e94ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WritePrivateProfileStringA(lpAppName,lpKeyName,lpString,lpFileName);
  return BVar1;
}

