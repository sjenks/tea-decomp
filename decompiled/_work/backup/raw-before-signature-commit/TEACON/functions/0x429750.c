// name: KERNEL32.DLL::TlsGetValue
// address: 0x429750
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LPVOID __stdcall TlsGetValue(DWORD dwTlsIndex)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00429750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = TlsGetValue(dwTlsIndex);
  return pvVar1;
}

