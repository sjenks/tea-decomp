// name: USER32.DLL::EnumThreadWindows
// address: 0x4734dc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall EnumThreadWindows(DWORD dwThreadId,WNDENUMPROC lpfn,LPARAM lParam)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004734dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnumThreadWindows(dwThreadId,lpfn,lParam);
  return BVar1;
}

