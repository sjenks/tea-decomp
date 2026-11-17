// name: FUN_0046719c
// address: 0x46719c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_0046719c(HWND param_1,WPARAM param_2)

{
  int iVar1;
  
  iVar1 = GetDlgCtrlID(param_1);
  if ((0x2e99 < iVar1) && (iVar1 < 0x2eae)) {
    SendMessageA(param_1,0x30,param_2,1);
    InvalidateRect(param_1,(RECT *)0x0,0);
  }
  return 1;
}

