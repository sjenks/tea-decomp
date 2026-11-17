// name: USER32.DLL::CloseClipboard
// address: 0x473434
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall CloseClipboard(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseClipboard();
  return BVar1;
}

