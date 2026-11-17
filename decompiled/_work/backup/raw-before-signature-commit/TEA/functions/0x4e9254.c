// name: KERNEL32.DLL::DeleteFileA
// address: 0x4e9254
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall DeleteFileA(LPCSTR lpFileName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteFileA(lpFileName);
  return BVar1;
}

