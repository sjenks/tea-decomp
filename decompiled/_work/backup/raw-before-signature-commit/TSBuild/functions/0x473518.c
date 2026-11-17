// name: USER32.DLL::GetDlgItem
// address: 0x473518
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HWND __stdcall GetDlgItem(HWND hDlg,int nIDDlgItem)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDlgItem(hDlg,nIDDlgItem);
  return pHVar1;
}

