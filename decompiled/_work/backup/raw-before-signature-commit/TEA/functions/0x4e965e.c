// name: GDI32.DLL::SetPixel
// address: 0x4e965e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

COLORREF __stdcall SetPixel(HDC hdc,int x,int y,COLORREF color)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e965e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = SetPixel(hdc,x,y,color);
  return CVar1;
}

