// name: KERNEL32.DLL::GetModuleFileNameA
// address: 0x42968a
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __stdcall GetModuleFileNameA(HMODULE hModule,LPSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042968a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetModuleFileNameA(hModule,lpFilename,nSize);
  return DVar1;
}

