// name: GDI32.DLL::GetSystemPaletteEntries
// address: 0x473352
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

UINT __stdcall GetSystemPaletteEntries(HDC hdc,UINT iStart,UINT cEntries,LPPALETTEENTRY pPalEntries)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473352. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetSystemPaletteEntries(hdc,iStart,cEntries,pPalEntries);
  return UVar1;
}

