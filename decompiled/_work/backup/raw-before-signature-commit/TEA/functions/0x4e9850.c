// name: USER32.DLL::GetScrollInfo
// address: 0x4e9850
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall GetScrollInfo(HWND hwnd,int nBar,LPSCROLLINFO lpsi)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetScrollInfo(hwnd,nBar,lpsi);
  return BVar1;
}

