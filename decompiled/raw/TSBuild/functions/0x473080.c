// name: KERNEL32.DLL::DuplicateHandle
// address: 0x473080
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall
DuplicateHandle(HANDLE hSourceProcessHandle,HANDLE hSourceHandle,HANDLE hTargetProcessHandle,
               LPHANDLE lpTargetHandle,DWORD dwDesiredAccess,BOOL bInheritHandle,DWORD dwOptions)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DuplicateHandle(hSourceProcessHandle,hSourceHandle,hTargetProcessHandle,lpTargetHandle,
                          dwDesiredAccess,bInheritHandle,dwOptions);
  return BVar1;
}

