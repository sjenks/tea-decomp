// name: KERNEL32.DLL::GetVersionExA
// address: 0x47318e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall GetVersionExA(LPOSVERSIONINFOA lpVersionInformation)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047318e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetVersionExA(lpVersionInformation);
  return BVar1;
}

