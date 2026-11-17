// name: USER32.DLL::MapDialogRect
// address: 0x4e9928
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall MapDialogRect(HWND hDlg,LPRECT lpRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = MapDialogRect(hDlg,lpRect);
  return BVar1;
}

