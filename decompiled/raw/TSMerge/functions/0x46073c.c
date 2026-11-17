// name: USER32.DLL::EnableMenuItem
// address: 0x46073c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall EnableMenuItem(HMENU hMenu,UINT uIDEnableItem,UINT uEnable)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046073c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnableMenuItem(hMenu,uIDEnableItem,uEnable);
  return BVar1;
}

