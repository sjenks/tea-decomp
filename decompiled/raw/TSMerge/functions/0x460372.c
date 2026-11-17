// name: KERNEL32.DLL::GetCurrentThreadId
// address: 0x460372
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __stdcall GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460372. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}

