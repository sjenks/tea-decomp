// name: USER32.DLL::CreatePopupMenu
// address: 0x4e970c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HMENU __stdcall CreatePopupMenu(void)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e970c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreatePopupMenu();
  return pHVar1;
}

