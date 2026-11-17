// name: KERNEL32.DLL::GetStdHandle
// address: 0x473158
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HANDLE __stdcall GetStdHandle(DWORD nStdHandle)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetStdHandle(nStdHandle);
  return pvVar1;
}

