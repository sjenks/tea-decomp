// name: USER32.DLL::GetMenuItemID
// address: 0x4607c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

UINT __stdcall GetMenuItemID(HMENU hMenu,int nPos)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004607c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetMenuItemID(hMenu,nPos);
  return UVar1;
}

