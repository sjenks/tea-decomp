// name: KERNEL32.DLL::CreateProcessA
// address: 0x4e924e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall
CreateProcessA(LPCSTR lpApplicationName,LPSTR lpCommandLine,
              LPSECURITY_ATTRIBUTES lpProcessAttributes,LPSECURITY_ATTRIBUTES lpThreadAttributes,
              BOOL bInheritHandles,DWORD dwCreationFlags,LPVOID lpEnvironment,
              LPCSTR lpCurrentDirectory,LPSTARTUPINFOA lpStartupInfo,
              LPPROCESS_INFORMATION lpProcessInformation)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e924e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CreateProcessA(lpApplicationName,lpCommandLine,lpProcessAttributes,lpThreadAttributes,
                         bInheritHandles,dwCreationFlags,lpEnvironment,lpCurrentDirectory,
                         lpStartupInfo,lpProcessInformation);
  return BVar1;
}

