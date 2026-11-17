// name: KERNEL32.DLL::LocalUnlock
// address: 0x4604a4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall LocalUnlock(HLOCAL hMem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004604a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = LocalUnlock(hMem);
  return BVar1;
}

