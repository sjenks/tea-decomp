// name: KERNEL32.DLL::SetLastError
// address: 0x429738
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall SetLastError(DWORD dwErrCode)

{
                    /* WARNING: Could not recover jumptable at 0x00429738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetLastError(dwErrCode);
  return;
}

