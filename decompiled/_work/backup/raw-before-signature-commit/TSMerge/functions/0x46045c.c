// name: KERNEL32.DLL::HeapFree
// address: 0x46045c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall HeapFree(HANDLE hHeap,DWORD dwFlags,LPVOID lpMem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046045c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = HeapFree(hHeap,dwFlags,lpMem);
  return BVar1;
}

