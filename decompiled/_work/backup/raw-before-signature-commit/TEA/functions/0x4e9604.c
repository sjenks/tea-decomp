// name: GDI32.DLL::Polyline
// address: 0x4e9604
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall Polyline(HDC hdc,POINT *apt,int cpt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = Polyline(hdc,apt,cpt);
  return BVar1;
}

