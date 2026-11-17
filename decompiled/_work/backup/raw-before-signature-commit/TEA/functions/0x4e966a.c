// name: GDI32.DLL::SetTextColor
// address: 0x4e966a
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

COLORREF __stdcall SetTextColor(HDC hdc,COLORREF color)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e966a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = SetTextColor(hdc,color);
  return CVar1;
}

