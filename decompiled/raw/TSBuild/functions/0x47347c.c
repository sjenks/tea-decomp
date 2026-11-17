// name: USER32.DLL::DestroyMenu
// address: 0x47347c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall DestroyMenu(HMENU hMenu)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047347c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DestroyMenu(hMenu);
  return BVar1;
}

