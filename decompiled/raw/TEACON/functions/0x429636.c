// name: KERNEL32.DLL::FindClose
// address: 0x429636
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall FindClose(HANDLE hFindFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00429636. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FindClose(hFindFile);
  return BVar1;
}

