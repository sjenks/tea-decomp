// name: KERNEL32.DLL::CreateFileW
// address: 0x4e9248
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HANDLE __stdcall
CreateFileW(LPCWSTR lpFileName,DWORD dwDesiredAccess,DWORD dwShareMode,
           LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD dwCreationDisposition,
           DWORD dwFlagsAndAttributes,HANDLE hTemplateFile)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateFileW(lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,
                       dwCreationDisposition,dwFlagsAndAttributes,hTemplateFile);
  return pvVar1;
}

