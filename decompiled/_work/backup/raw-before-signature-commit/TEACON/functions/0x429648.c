// name: KERNEL32.DLL::GetCPInfo
// address: 0x429648
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall GetCPInfo(UINT CodePage,LPCPINFO lpCPInfo)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00429648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetCPInfo(CodePage,lpCPInfo);
  return BVar1;
}

