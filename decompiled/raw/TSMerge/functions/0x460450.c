// name: KERNEL32.DLL::HeapCreate
// address: 0x460450
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HANDLE __stdcall HeapCreate(DWORD flOptions,SIZE_T dwInitialSize,SIZE_T dwMaximumSize)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = HeapCreate(flOptions,dwInitialSize,dwMaximumSize);
  return pvVar1;
}

