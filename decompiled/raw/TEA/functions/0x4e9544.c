// name: GDI32.DLL::CreateRectRgn
// address: 0x4e9544
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HRGN __stdcall CreateRectRgn(int x1,int y1,int x2,int y2)

{
  HRGN pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateRectRgn(x1,y1,x2,y2);
  return pHVar1;
}

