// name: KERNEL32.DLL::VirtualFree
// address: 0x4e94ac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall VirtualFree(LPVOID lpAddress,SIZE_T dwSize,DWORD dwFreeType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e94ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VirtualFree(lpAddress,dwSize,dwFreeType);
  return BVar1;
}

