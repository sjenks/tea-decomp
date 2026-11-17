// name: KERNEL32.DLL::LocalReAlloc
// address: 0x4e9416
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HLOCAL __stdcall LocalReAlloc(HLOCAL hMem,SIZE_T uBytes,UINT uFlags)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9416. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalReAlloc(hMem,uBytes,uFlags);
  return pvVar1;
}

