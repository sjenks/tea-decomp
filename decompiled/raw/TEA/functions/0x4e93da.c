// name: KERNEL32.DLL::InterlockedIncrement
// address: 0x4e93da
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LONG __stdcall InterlockedIncrement(LONG *lpAddend)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e93da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = InterlockedIncrement(lpAddend);
  return LVar1;
}

