// name: GDI32.DLL::CreateBrushIndirect
// address: 0x4e9502
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HBRUSH __stdcall CreateBrushIndirect(LOGBRUSH *plbrush)

{
  HBRUSH pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9502. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateBrushIndirect(plbrush);
  return pHVar1;
}

