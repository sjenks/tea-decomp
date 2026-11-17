// name: KERNEL32.DLL::GetUserDefaultLCID
// address: 0x460402
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LCID __stdcall GetUserDefaultLCID(void)

{
  LCID LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460402. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetUserDefaultLCID();
  return LVar1;
}

