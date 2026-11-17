// name: GDI32.DLL::CreatePalette
// address: 0x47330a
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HPALETTE __stdcall CreatePalette(LOGPALETTE *plpal)

{
  HPALETTE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047330a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreatePalette(plpal);
  return pHVar1;
}

