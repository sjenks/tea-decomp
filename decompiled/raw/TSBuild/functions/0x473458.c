// name: USER32.DLL::CreatePopupMenu
// address: 0x473458
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HMENU __stdcall CreatePopupMenu(void)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreatePopupMenu();
  return pHVar1;
}

