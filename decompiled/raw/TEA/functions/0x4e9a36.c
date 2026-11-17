// name: USER32.DLL::TranslateMessage
// address: 0x4e9a36
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall TranslateMessage(MSG *lpMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9a36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TranslateMessage(lpMsg);
  return BVar1;
}

