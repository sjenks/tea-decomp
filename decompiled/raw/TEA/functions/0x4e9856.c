// name: USER32.DLL::GetSubMenu
// address: 0x4e9856
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HMENU __stdcall GetSubMenu(HMENU hMenu,int nPos)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9856. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetSubMenu(hMenu,nPos);
  return pHVar1;
}

