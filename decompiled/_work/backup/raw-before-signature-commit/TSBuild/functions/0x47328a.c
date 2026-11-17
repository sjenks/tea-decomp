// name: KERNEL32.DLL::TlsSetValue
// address: 0x47328a
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall TlsSetValue(DWORD dwTlsIndex,LPVOID lpTlsValue)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047328a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TlsSetValue(dwTlsIndex,lpTlsValue);
  return BVar1;
}

