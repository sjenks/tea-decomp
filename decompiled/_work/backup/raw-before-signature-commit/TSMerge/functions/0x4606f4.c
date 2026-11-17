// name: USER32.DLL::DeleteMenu
// address: 0x4606f4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall DeleteMenu(HMENU hMenu,UINT uPosition,UINT uFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004606f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteMenu(hMenu,uPosition,uFlags);
  return BVar1;
}

