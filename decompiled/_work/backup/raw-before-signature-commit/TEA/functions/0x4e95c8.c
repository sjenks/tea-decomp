// name: GDI32.DLL::GetTextMetricsA
// address: 0x4e95c8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall GetTextMetricsA(HDC hdc,LPTEXTMETRICA lptm)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e95c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetTextMetricsA(hdc,lptm);
  return BVar1;
}

