// name: USER32.DLL::GetMenuState
// address: 0x4e983e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

UINT __stdcall GetMenuState(HMENU hMenu,UINT uId,UINT uFlags)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e983e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetMenuState(hMenu,uId,uFlags);
  return UVar1;
}

