// name: KERNEL32.DLL::UnlockFile
// address: 0x46051c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall
UnlockFile(HANDLE hFile,DWORD dwFileOffsetLow,DWORD dwFileOffsetHigh,DWORD nNumberOfBytesToUnlockLow
          ,DWORD nNumberOfBytesToUnlockHigh)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046051c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnlockFile(hFile,dwFileOffsetLow,dwFileOffsetHigh,nNumberOfBytesToUnlockLow,
                     nNumberOfBytesToUnlockHigh);
  return BVar1;
}

