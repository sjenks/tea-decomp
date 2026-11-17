// name: GDI32.DLL::RestoreDC
// address: 0x4733a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall RestoreDC(HDC hdc,int nSavedDC)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004733a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = RestoreDC(hdc,nSavedDC);
  return BVar1;
}

