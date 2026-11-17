// name: KERNEL32.DLL::GetEnvironmentStrings
// address: 0x429660
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LPCH __stdcall GetEnvironmentStrings(void)

{
  LPCH pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00429660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetEnvironmentStrings();
  return pCVar1;
}

