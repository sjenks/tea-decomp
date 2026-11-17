// name: KERNEL32.DLL::GlobalLock
// address: 0x460432
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LPVOID __stdcall GlobalLock(HGLOBAL hMem)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460432. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalLock(hMem);
  return pvVar1;
}

