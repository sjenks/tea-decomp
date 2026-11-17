// name: USER32.DLL::CreateDialogParamA
// address: 0x4e9700
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HWND __stdcall
CreateDialogParamA(HINSTANCE hInstance,LPCSTR lpTemplateName,HWND hWndParent,DLGPROC lpDialogFunc,
                  LPARAM dwInitParam)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateDialogParamA(hInstance,lpTemplateName,hWndParent,lpDialogFunc,dwInitParam);
  return pHVar1;
}

