// name: USER32.DLL::LoadIconA
// address: 0x4735f6
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HICON __stdcall LoadIconA(HINSTANCE hInstance,LPCSTR lpIconName)

{
  HICON pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004735f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadIconA(hInstance,lpIconName);
  return pHVar1;
}

