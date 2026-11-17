// name: KERNEL32.DLL::GetFileAttributesA
// address: 0x460384
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __stdcall GetFileAttributesA(LPCSTR lpFileName)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileAttributesA(lpFileName);
  return DVar1;
}

