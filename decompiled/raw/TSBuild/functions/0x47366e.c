// name: USER32.DLL::SendDlgItemMessageA
// address: 0x47366e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LRESULT __stdcall SendDlgItemMessageA(HWND hDlg,int nIDDlgItem,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047366e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = SendDlgItemMessageA(hDlg,nIDDlgItem,Msg,wParam,lParam);
  return LVar1;
}

