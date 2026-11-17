// name: KERNEL32.DLL::GetModuleHandleA
// address: 0x4603c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004603c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetModuleHandleA(lpModuleName);
  return pHVar1;
}

