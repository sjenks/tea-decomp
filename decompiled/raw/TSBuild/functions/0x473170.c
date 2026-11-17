// name: KERNEL32.DLL::GetTickCount
// address: 0x473170
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __stdcall GetTickCount(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetTickCount();
  return DVar1;
}

