// name: KERNEL32.DLL::GetFileTime
// address: 0x460396
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall
GetFileTime(HANDLE hFile,LPFILETIME lpCreationTime,LPFILETIME lpLastAccessTime,
           LPFILETIME lpLastWriteTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460396. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetFileTime(hFile,lpCreationTime,lpLastAccessTime,lpLastWriteTime);
  return BVar1;
}

