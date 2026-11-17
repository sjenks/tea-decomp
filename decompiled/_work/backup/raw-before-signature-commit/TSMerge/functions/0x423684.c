// name: FUN_00423684
// address: 0x423684
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_00423684(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA(s_USER32_00468bb5);
  GetProcAddress(hModule,s_DefWindowProcA_00468bbc);
  return;
}

