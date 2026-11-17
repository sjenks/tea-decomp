// name: KERNEL32.DLL::MoveFileA
// address: 0x4e942e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall MoveFileA(LPCSTR lpExistingFileName,LPCSTR lpNewFileName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e942e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = MoveFileA(lpExistingFileName,lpNewFileName);
  return BVar1;
}

