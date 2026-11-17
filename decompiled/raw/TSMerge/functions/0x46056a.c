// name: GDI32.DLL::CreateCompatibleDC
// address: 0x46056a
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HDC __stdcall CreateCompatibleDC(HDC hdc)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046056a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateCompatibleDC(hdc);
  return pHVar1;
}

