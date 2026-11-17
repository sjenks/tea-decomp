// name: GDI32.DLL::Rectangle
// address: 0x460618
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall Rectangle(HDC hdc,int left,int top,int right,int bottom)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = Rectangle(hdc,left,top,right,bottom);
  return BVar1;
}

