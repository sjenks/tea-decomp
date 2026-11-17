// name: KERNEL32.DLL::VirtualAlloc
// address: 0x429762
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LPVOID __stdcall VirtualAlloc(LPVOID lpAddress,SIZE_T dwSize,DWORD flAllocationType,DWORD flProtect)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00429762. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = VirtualAlloc(lpAddress,dwSize,flAllocationType,flProtect);
  return pvVar1;
}

