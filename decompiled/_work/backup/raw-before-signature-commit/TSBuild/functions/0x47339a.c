// name: GDI32.DLL::ResetDCA
// address: 0x47339a
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HDC __stdcall ResetDCA(HDC hdc,DEVMODEA *lpdm)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047339a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = ResetDCA(hdc,lpdm);
  return pHVar1;
}

