// name: USER32.DLL::TrackPopupMenu
// address: 0x4736d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall
TrackPopupMenu(HMENU hMenu,UINT uFlags,int x,int y,int nReserved,HWND hWnd,RECT *prcRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004736d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TrackPopupMenu(hMenu,uFlags,x,y,nReserved,hWnd,prcRect);
  return BVar1;
}

