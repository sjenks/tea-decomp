// name: FUN_0049ac18
// address: 0x49ac18
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

FARPROC __stdcall FUN_0049ac18(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA(s_USER32_005087ad);
  pFVar1 = GetProcAddress(hModule,s_DefWindowProcA_005087b4);
  return pFVar1;
}

