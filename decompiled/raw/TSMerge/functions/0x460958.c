// name: USER32.DLL::TranslateAcceleratorA
// address: 0x460958
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall TranslateAcceleratorA(HWND hWnd,HACCEL hAccTable,LPMSG lpMsg)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = TranslateAcceleratorA(hWnd,hAccTable,lpMsg);
  return iVar1;
}

