// name: KERNEL32.DLL::RaiseException
// address: 0x4e9440
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall
RaiseException(DWORD dwExceptionCode,DWORD dwExceptionFlags,DWORD nNumberOfArguments,
              ULONG_PTR *lpArguments)

{
                    /* WARNING: Could not recover jumptable at 0x004e9440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RaiseException(dwExceptionCode,dwExceptionFlags,nNumberOfArguments,lpArguments);
  return;
}

