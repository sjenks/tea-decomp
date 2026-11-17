// name: KERNEL32.DLL::GetCurrentProcessId
// address: 0x4730e6
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __stdcall GetCurrentProcessId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004730e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentProcessId();
  return DVar1;
}

