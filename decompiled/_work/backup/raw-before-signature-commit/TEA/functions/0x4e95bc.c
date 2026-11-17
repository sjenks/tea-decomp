// name: GDI32.DLL::GetTextExtentPoint32A
// address: 0x4e95bc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall GetTextExtentPoint32A(HDC hdc,LPCSTR lpString,int c,LPSIZE psizl)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e95bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetTextExtentPoint32A(hdc,lpString,c,psizl);
  return BVar1;
}

