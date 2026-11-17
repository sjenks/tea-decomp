// name: KERNEL32.DLL::GetFileAttributesW
// address: 0x473104
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __stdcall GetFileAttributesW(LPCWSTR lpFileName)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileAttributesW(lpFileName);
  return DVar1;
}

