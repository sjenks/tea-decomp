// name: KERNEL32.DLL::LoadResource
// address: 0x473200
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HGLOBAL __stdcall LoadResource(HMODULE hModule,HRSRC hResInfo)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LoadResource(hModule,hResInfo);
  return pvVar1;
}

