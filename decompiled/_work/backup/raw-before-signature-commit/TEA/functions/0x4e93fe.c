// name: KERNEL32.DLL::LoadResource
// address: 0x4e93fe
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HGLOBAL __stdcall LoadResource(HMODULE hModule,HRSRC hResInfo)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e93fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LoadResource(hModule,hResInfo);
  return pvVar1;
}

