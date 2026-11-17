// name: KERNEL32.DLL::GetLastError
// address: 0x4e930e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __stdcall GetLastError(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e930e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetLastError();
  return DVar1;
}

