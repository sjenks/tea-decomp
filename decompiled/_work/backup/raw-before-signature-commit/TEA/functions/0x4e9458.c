// name: KERNEL32.DLL::SetEndOfFile
// address: 0x4e9458
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall SetEndOfFile(HANDLE hFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetEndOfFile(hFile);
  return BVar1;
}

