// name: USER32.DLL::EndDialog
// address: 0x4734d0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall EndDialog(HWND hDlg,INT_PTR nResult)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004734d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EndDialog(hDlg,nResult);
  return BVar1;
}

