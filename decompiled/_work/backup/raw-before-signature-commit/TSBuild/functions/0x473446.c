// name: USER32.DLL::CreateDialogIndirectParamA
// address: 0x473446
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HWND __stdcall
CreateDialogIndirectParamA
          (HINSTANCE hInstance,LPCDLGTEMPLATEA lpTemplate,HWND hWndParent,DLGPROC lpDialogFunc,
          LPARAM dwInitParam)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473446. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateDialogIndirectParamA(hInstance,lpTemplate,hWndParent,lpDialogFunc,dwInitParam);
  return pHVar1;
}

