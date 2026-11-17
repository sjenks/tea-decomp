// name: GDI32.DLL::DeleteDC
// address: 0x4e955c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall DeleteDC(HDC hdc)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e955c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteDC(hdc);
  return BVar1;
}

