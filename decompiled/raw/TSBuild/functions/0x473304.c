// name: GDI32.DLL::CreateFontIndirectA
// address: 0x473304
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HFONT __stdcall CreateFontIndirectA(LOGFONTA *lplf)

{
  HFONT pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateFontIndirectA(lplf);
  return pHVar1;
}

