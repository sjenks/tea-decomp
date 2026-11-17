// name: KERNEL32.DLL::LocalReAlloc
// address: 0x473218
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HLOCAL __stdcall LocalReAlloc(HLOCAL hMem,SIZE_T uBytes,UINT uFlags)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalReAlloc(hMem,uBytes,uFlags);
  return pvVar1;
}

