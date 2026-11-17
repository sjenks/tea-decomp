// name: USER32.DLL::GetSubMenu
// address: 0x473554
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HMENU __stdcall GetSubMenu(HMENU hMenu,int nPos)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetSubMenu(hMenu,nPos);
  return pHVar1;
}

