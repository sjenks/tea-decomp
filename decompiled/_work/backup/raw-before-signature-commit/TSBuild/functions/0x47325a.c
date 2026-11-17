// name: KERNEL32.DLL::SetErrorMode
// address: 0x47325a
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

UINT __stdcall SetErrorMode(UINT uMode)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047325a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetErrorMode(uMode);
  return UVar1;
}

