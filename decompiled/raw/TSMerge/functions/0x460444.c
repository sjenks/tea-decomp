// name: KERNEL32.DLL::GlobalUnlock
// address: 0x460444
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall GlobalUnlock(HGLOBAL hMem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GlobalUnlock(hMem);
  return BVar1;
}

