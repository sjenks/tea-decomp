// name: GDI32.DLL::CreateCompatibleDC
// address: 0x4e950e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HDC __stdcall CreateCompatibleDC(HDC hdc)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e950e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateCompatibleDC(hdc);
  return pHVar1;
}

