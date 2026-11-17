// name: KERNEL32.DLL::GetCPInfo
// address: 0x4e92ba
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall GetCPInfo(UINT CodePage,LPCPINFO lpCPInfo)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e92ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetCPInfo(CodePage,lpCPInfo);
  return BVar1;
}

