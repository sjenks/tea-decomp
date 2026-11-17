// name: KERNEL32.DLL::HeapDestroy
// address: 0x460456
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall HeapDestroy(HANDLE hHeap)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460456. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = HeapDestroy(hHeap);
  return BVar1;
}

