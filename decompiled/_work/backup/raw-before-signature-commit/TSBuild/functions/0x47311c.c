// name: KERNEL32.DLL::GetFullPathNameA
// address: 0x47311c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __stdcall
GetFullPathNameA(LPCSTR lpFileName,DWORD nBufferLength,LPSTR lpBuffer,LPSTR *lpFilePart)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047311c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFullPathNameA(lpFileName,nBufferLength,lpBuffer,lpFilePart);
  return DVar1;
}

