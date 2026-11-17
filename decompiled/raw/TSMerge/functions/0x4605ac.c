// name: GDI32.DLL::DeleteObject
// address: 0x4605ac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall DeleteObject(HGDIOBJ ho)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004605ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteObject(ho);
  return BVar1;
}

