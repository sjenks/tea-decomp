// name: USER32.DLL::LoadCursorA
// address: 0x4735f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HCURSOR __stdcall LoadCursorA(HINSTANCE hInstance,LPCSTR lpCursorName)

{
  HCURSOR pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004735f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadCursorA(hInstance,lpCursorName);
  return pHVar1;
}

