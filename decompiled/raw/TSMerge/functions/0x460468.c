// name: KERNEL32.DLL::IsBadReadPtr
// address: 0x460468
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall IsBadReadPtr(void *lp,UINT_PTR ucb)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsBadReadPtr(lp,ucb);
  return BVar1;
}

