// name: KERNEL32.DLL::TlsFree
// address: 0x4e9488
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall TlsFree(DWORD dwTlsIndex)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TlsFree(dwTlsIndex);
  return BVar1;
}

