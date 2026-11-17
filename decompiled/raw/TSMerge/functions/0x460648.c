// name: GDI32.DLL::SelectPalette
// address: 0x460648
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HPALETTE __stdcall SelectPalette(HDC hdc,HPALETTE hPal,BOOL bForceBkgd)

{
  HPALETTE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SelectPalette(hdc,hPal,bForceBkgd);
  return pHVar1;
}

