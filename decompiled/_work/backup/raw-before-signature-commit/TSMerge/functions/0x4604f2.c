// name: KERNEL32.DLL::SetLastError
// address: 0x4604f2
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall SetLastError(DWORD dwErrCode)

{
                    /* WARNING: Could not recover jumptable at 0x004604f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetLastError(dwErrCode);
  return;
}

