// name: USER32.DLL::GetMenuItemID
// address: 0x47353c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

UINT __stdcall GetMenuItemID(HMENU hMenu,int nPos)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047353c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetMenuItemID(hMenu,nPos);
  return UVar1;
}

