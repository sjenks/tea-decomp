// name: USER32.DLL::IsDialogMessageA
// address: 0x46083e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall IsDialogMessageA(HWND hDlg,LPMSG lpMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046083e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsDialogMessageA(hDlg,lpMsg);
  return BVar1;
}

