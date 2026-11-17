// name: KERNEL32.DLL::GetFileType
// address: 0x4e9302
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __stdcall GetFileType(HANDLE hFile)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9302. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileType(hFile);
  return DVar1;
}

