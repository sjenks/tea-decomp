// name: USER32.DLL::CheckMenuItem
// address: 0x4606ac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __stdcall CheckMenuItem(HMENU hMenu,UINT uIDCheckItem,UINT uCheck)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004606ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = CheckMenuItem(hMenu,uIDCheckItem,uCheck);
  return DVar1;
}

