// name: GDI32.DLL::SetTextAlign
// address: 0x4e9664
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

UINT __stdcall SetTextAlign(HDC hdc,UINT align)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetTextAlign(hdc,align);
  return UVar1;
}

