// name: KERNEL32.DLL::UnlockFile
// address: 0x473296
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall
UnlockFile(HANDLE hFile,DWORD dwFileOffsetLow,DWORD dwFileOffsetHigh,DWORD nNumberOfBytesToUnlockLow
          ,DWORD nNumberOfBytesToUnlockHigh)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473296. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnlockFile(hFile,dwFileOffsetLow,dwFileOffsetHigh,nNumberOfBytesToUnlockLow,
                     nNumberOfBytesToUnlockHigh);
  return BVar1;
}

