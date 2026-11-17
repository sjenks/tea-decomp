// name: USER32.DLL::CloseClipboard
// address: 0x4606b8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall CloseClipboard(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004606b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseClipboard();
  return BVar1;
}

