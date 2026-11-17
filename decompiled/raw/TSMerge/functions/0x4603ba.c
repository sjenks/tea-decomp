// name: KERNEL32.DLL::GetModuleFileNameA
// address: 0x4603ba
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __stdcall GetModuleFileNameA(HMODULE hModule,LPSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004603ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetModuleFileNameA(hModule,lpFilename,nSize);
  return DVar1;
}

