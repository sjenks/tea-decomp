// name: GDI32.DLL::GetTextColor
// address: 0x473358
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

COLORREF __stdcall GetTextColor(HDC hdc)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = GetTextColor(hdc);
  return CVar1;
}

