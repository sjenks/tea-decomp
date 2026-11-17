// name: FUN_0042e818
// address: 0x42e818
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

FARPROC __stdcall FUN_0042e818(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA(s_USER32_0047c991);
  pFVar1 = GetProcAddress(hModule,s_DefWindowProcA_0047c998);
  return pFVar1;
}

