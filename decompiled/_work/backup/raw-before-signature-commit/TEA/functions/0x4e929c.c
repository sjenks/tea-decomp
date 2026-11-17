// name: KERNEL32.DLL::FlushFileBuffers
// address: 0x4e929c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall FlushFileBuffers(HANDLE hFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlushFileBuffers(hFile);
  return BVar1;
}

