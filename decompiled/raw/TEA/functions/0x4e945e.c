// name: KERNEL32.DLL::SetErrorMode
// address: 0x4e945e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

UINT __stdcall SetErrorMode(UINT uMode)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e945e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetErrorMode(uMode);
  return UVar1;
}

