// name: GDI32.DLL::CreateCompatibleDC
// address: 0x4732e6
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HDC __stdcall CreateCompatibleDC(HDC hdc)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004732e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateCompatibleDC(hdc);
  return pHVar1;
}

