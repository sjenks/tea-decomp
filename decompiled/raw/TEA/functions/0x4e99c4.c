// name: USER32.DLL::SetMenu
// address: 0x4e99c4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall SetMenu(HWND hWnd,HMENU hMenu)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e99c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetMenu(hWnd,hMenu);
  return BVar1;
}

