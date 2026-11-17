// name: KERNEL32.DLL::GetPrivateProfileStringA
// address: 0x4e9332
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __stdcall
GetPrivateProfileStringA
          (LPCSTR lpAppName,LPCSTR lpKeyName,LPCSTR lpDefault,LPSTR lpReturnedString,DWORD nSize,
          LPCSTR lpFileName)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9332. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetPrivateProfileStringA(lpAppName,lpKeyName,lpDefault,lpReturnedString,nSize,lpFileName);
  return DVar1;
}

