// name: USER32.DLL::DialogBoxIndirectParamA
// address: 0x473488
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

INT_PTR __stdcall
DialogBoxIndirectParamA
          (HINSTANCE hInstance,LPCDLGTEMPLATEA hDialogTemplate,HWND hWndParent,DLGPROC lpDialogFunc,
          LPARAM dwInitParam)

{
  INT_PTR IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = DialogBoxIndirectParamA(hInstance,hDialogTemplate,hWndParent,lpDialogFunc,dwInitParam);
  return IVar1;
}

