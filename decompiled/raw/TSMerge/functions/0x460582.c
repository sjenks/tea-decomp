// name: GDI32.DLL::CreateFontA
// address: 0x460582
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HFONT __stdcall
CreateFontA(int cHeight,int cWidth,int cEscapement,int cOrientation,int cWeight,DWORD bItalic,
           DWORD bUnderline,DWORD bStrikeOut,DWORD iCharSet,DWORD iOutPrecision,DWORD iClipPrecision
           ,DWORD iQuality,DWORD iPitchAndFamily,LPCSTR pszFaceName)

{
  HFONT pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460582. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateFontA(cHeight,cWidth,cEscapement,cOrientation,cWeight,bItalic,bUnderline,bStrikeOut
                       ,iCharSet,iOutPrecision,iClipPrecision,iQuality,iPitchAndFamily,pszFaceName);
  return pHVar1;
}

