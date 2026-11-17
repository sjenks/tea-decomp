// name: KERNEL32.DLL::FileTimeToLocalFileTime
// address: 0x42962a
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall FileTimeToLocalFileTime(FILETIME *lpFileTime,LPFILETIME lpLocalFileTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042962a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FileTimeToLocalFileTime(lpFileTime,lpLocalFileTime);
  return BVar1;
}

