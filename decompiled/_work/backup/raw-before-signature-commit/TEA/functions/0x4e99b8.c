// name: USER32.DLL::SetCursor
// address: 0x4e99b8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HCURSOR __stdcall SetCursor(HCURSOR hCursor)

{
  HCURSOR pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e99b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetCursor(hCursor);
  return pHVar1;
}

