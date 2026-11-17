// name: KERNEL32.DLL::GlobalHandle
// address: 0x4731a6
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HGLOBAL __stdcall GlobalHandle(LPCVOID pMem)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004731a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalHandle(pMem);
  return pvVar1;
}

