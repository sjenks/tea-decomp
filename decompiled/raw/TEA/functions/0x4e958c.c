// name: GDI32.DLL::GetCurrentObject
// address: 0x4e958c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HGDIOBJ __stdcall GetCurrentObject(HDC hdc,UINT type)

{
  HGDIOBJ pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e958c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetCurrentObject(hdc,type);
  return pvVar1;
}

