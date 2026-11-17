// name: GDI32.DLL::SelectObject
// address: 0x460642
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HGDIOBJ __stdcall SelectObject(HDC hdc,HGDIOBJ h)

{
  HGDIOBJ pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460642. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = SelectObject(hdc,h);
  return pvVar1;
}

