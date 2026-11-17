// name: USER32.DLL::LoadAcceleratorsA
// address: 0x4e9904
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HACCEL __stdcall LoadAcceleratorsA(HINSTANCE hInstance,LPCSTR lpTableName)

{
  HACCEL pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadAcceleratorsA(hInstance,lpTableName);
  return pHVar1;
}

