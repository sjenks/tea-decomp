// name: GDI32.DLL::CreateSolidBrush
// address: 0x4e9550
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HBRUSH __stdcall CreateSolidBrush(COLORREF color)

{
  HBRUSH pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateSolidBrush(color);
  return pHVar1;
}

