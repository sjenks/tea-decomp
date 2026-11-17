// name: GDI32.DLL::CreateCompatibleBitmap
// address: 0x460564
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HBITMAP __stdcall CreateCompatibleBitmap(HDC hdc,int cx,int cy)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateCompatibleBitmap(hdc,cx,cy);
  return pHVar1;
}

