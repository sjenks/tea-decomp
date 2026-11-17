// name: GDI32.DLL::CreateDCA
// address: 0x4e9514
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HDC __stdcall CreateDCA(LPCSTR pwszDriver,LPCSTR pwszDevice,LPCSTR pszPort,DEVMODEA *pdm)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateDCA(pwszDriver,pwszDevice,pszPort,pdm);
  return pHVar1;
}

