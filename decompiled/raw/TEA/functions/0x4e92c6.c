// name: KERNEL32.DLL::GetCurrentProcess
// address: 0x4e92c6
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HANDLE __stdcall GetCurrentProcess(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e92c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetCurrentProcess();
  return pvVar1;
}

