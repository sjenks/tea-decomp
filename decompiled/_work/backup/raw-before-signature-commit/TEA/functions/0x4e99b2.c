// name: USER32.DLL::SetClipboardData
// address: 0x4e99b2
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HANDLE __stdcall SetClipboardData(UINT uFormat,HANDLE hMem)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e99b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = SetClipboardData(uFormat,hMem);
  return pvVar1;
}

