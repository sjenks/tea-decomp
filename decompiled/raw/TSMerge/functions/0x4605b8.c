// name: GDI32.DLL::GetBkColor
// address: 0x4605b8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

COLORREF __stdcall GetBkColor(HDC hdc)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004605b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = GetBkColor(hdc);
  return CVar1;
}

