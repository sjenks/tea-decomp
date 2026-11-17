// name: KERNEL32.DLL::GetTickCount
// address: 0x4e9368
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __stdcall GetTickCount(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetTickCount();
  return DVar1;
}

