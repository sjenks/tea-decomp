// name: KERNEL32.DLL::GetCurrentProcessId
// address: 0x46036c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __stdcall GetCurrentProcessId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046036c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentProcessId();
  return DVar1;
}

