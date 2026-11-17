// name: GDI32.DLL::CreatePen
// address: 0x4e953e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HPEN __stdcall CreatePen(int iStyle,int cWidth,COLORREF color)

{
  HPEN pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e953e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreatePen(iStyle,cWidth,color);
  return pHVar1;
}

