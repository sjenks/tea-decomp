// name: USER32.DLL::DialogBoxParamA
// address: 0x460712
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

INT_PTR __stdcall
DialogBoxParamA(HINSTANCE hInstance,LPCSTR lpTemplateName,HWND hWndParent,DLGPROC lpDialogFunc,
               LPARAM dwInitParam)

{
  INT_PTR IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460712. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = DialogBoxParamA(hInstance,lpTemplateName,hWndParent,lpDialogFunc,dwInitParam);
  return IVar1;
}

