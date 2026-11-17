// name: KERNEL32.DLL::HeapAlloc
// address: 0x46044a
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LPVOID __stdcall HeapAlloc(HANDLE hHeap,DWORD dwFlags,SIZE_T dwBytes)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046044a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = HeapAlloc(hHeap,dwFlags,dwBytes);
  return pvVar1;
}

