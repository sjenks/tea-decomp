// name: KERNEL32.DLL::LocalLock
// address: 0x4e9410
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LPVOID __stdcall LocalLock(HLOCAL hMem)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalLock(hMem);
  return pvVar1;
}

