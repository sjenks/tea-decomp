// name: KERNEL32.DLL::FileTimeToSystemTime
// address: 0x429630
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall FileTimeToSystemTime(FILETIME *lpFileTime,LPSYSTEMTIME lpSystemTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00429630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FileTimeToSystemTime(lpFileTime,lpSystemTime);
  return BVar1;
}

