// name: USER32.DLL::GetSysColorBrush
// address: 0x4607e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HBRUSH __stdcall GetSysColorBrush(int nIndex)

{
  HBRUSH pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004607e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetSysColorBrush(nIndex);
  return pHVar1;
}

