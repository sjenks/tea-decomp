// name: KERNEL32.DLL::GetFileSize
// address: 0x460390
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __stdcall GetFileSize(HANDLE hFile,LPDWORD lpFileSizeHigh)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileSize(hFile,lpFileSizeHigh);
  return DVar1;
}

