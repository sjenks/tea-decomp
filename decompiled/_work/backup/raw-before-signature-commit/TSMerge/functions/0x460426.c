// name: KERNEL32.DLL::GlobalFree
// address: 0x460426
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HGLOBAL __stdcall GlobalFree(HGLOBAL hMem)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460426. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalFree(hMem);
  return pvVar1;
}

