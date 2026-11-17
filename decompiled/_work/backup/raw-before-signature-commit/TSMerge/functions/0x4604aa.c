// name: KERNEL32.DLL::LockFile
// address: 0x4604aa
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall
LockFile(HANDLE hFile,DWORD dwFileOffsetLow,DWORD dwFileOffsetHigh,DWORD nNumberOfBytesToLockLow,
        DWORD nNumberOfBytesToLockHigh)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004604aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = LockFile(hFile,dwFileOffsetLow,dwFileOffsetHigh,nNumberOfBytesToLockLow,
                   nNumberOfBytesToLockHigh);
  return BVar1;
}

