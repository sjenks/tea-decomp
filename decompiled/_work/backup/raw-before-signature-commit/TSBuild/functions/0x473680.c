// name: USER32.DLL::SetCursor
// address: 0x473680
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HCURSOR __stdcall SetCursor(HCURSOR hCursor)

{
  HCURSOR pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetCursor(hCursor);
  return pHVar1;
}

