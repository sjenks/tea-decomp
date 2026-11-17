// name: USER32.DLL::IsMenu
// address: 0x4735c6
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall IsMenu(HMENU hMenu)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004735c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsMenu(hMenu);
  return BVar1;
}

