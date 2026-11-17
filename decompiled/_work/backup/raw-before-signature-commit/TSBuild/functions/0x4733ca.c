// name: GDI32.DLL::SetBkColor
// address: 0x4733ca
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

COLORREF __stdcall SetBkColor(HDC hdc,COLORREF color)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004733ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = SetBkColor(hdc,color);
  return CVar1;
}

