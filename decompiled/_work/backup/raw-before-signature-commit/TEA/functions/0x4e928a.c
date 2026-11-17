// name: KERNEL32.DLL::FindNextFileA
// address: 0x4e928a
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall FindNextFileA(HANDLE hFindFile,LPWIN32_FIND_DATAA lpFindFileData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e928a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FindNextFileA(hFindFile,lpFindFileData);
  return BVar1;
}

