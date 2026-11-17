// name: KERNEL32.DLL::LocalFree
// address: 0x46048c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HLOCAL __stdcall LocalFree(HLOCAL hMem)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046048c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalFree(hMem);
  return pvVar1;
}

