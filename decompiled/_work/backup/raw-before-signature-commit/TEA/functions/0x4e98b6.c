// name: USER32.DLL::InsertMenuItemA
// address: 0x4e98b6
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall InsertMenuItemA(HMENU hmenu,UINT item,BOOL fByPosition,LPCMENUITEMINFOA lpmi)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e98b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InsertMenuItemA(hmenu,item,fByPosition,lpmi);
  return BVar1;
}

