// name: USER32.DLL::DrawFocusRect
// address: 0x4e977e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall DrawFocusRect(HDC hDC,RECT *lprc)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e977e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DrawFocusRect(hDC,lprc);
  return BVar1;
}

