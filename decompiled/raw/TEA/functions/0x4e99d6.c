// name: USER32.DLL::SetScrollInfo
// address: 0x4e99d6
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall SetScrollInfo(HWND hwnd,int nBar,LPCSCROLLINFO lpsi,BOOL redraw)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e99d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetScrollInfo(hwnd,nBar,lpsi,redraw);
  return iVar1;
}

