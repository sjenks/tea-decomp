// name: KERNEL32.DLL::GetProcAddress
// address: 0x4e9338
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

FARPROC __stdcall GetProcAddress(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}

