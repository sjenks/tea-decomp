// name: USER32.DLL::SetMenuItemInfoA
// address: 0x4e99ca
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall SetMenuItemInfoA(HMENU hmenu,UINT item,BOOL fByPositon,LPCMENUITEMINFOA lpmii)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e99ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetMenuItemInfoA(hmenu,item,fByPositon,lpmii);
  return BVar1;
}

