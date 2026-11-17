// name: KERNEL32.DLL::GlobalAlloc
// address: 0x4e9398
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HGLOBAL __stdcall GlobalAlloc(UINT uFlags,SIZE_T dwBytes)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalAlloc(uFlags,dwBytes);
  return pvVar1;
}

