// name: USER32.DLL::CreateMenu
// address: 0x4e9706
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HMENU __stdcall CreateMenu(void)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9706. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateMenu();
  return pHVar1;
}

