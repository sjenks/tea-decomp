// name: FUN_0046819c
// address: 0x46819c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0046819c(int *param_1,LPMSG param_2)

{
  UINT UVar1;
  HWND hWnd;
  
  hWnd = (HWND)FUN_004a76a8(param_1[0x18],0x132d,0,0);
  if ((hWnd != (HWND)0x0) &&
     (((UVar1 = param_2->message, UVar1 - 0x200 < 3 || (UVar1 - 0x204 < 2)) || (UVar1 - 0x207 < 2)))
     ) {
    SendMessageA(hWnd,0x407,0,(LPARAM)param_2);
  }
  FUN_004167d8(param_1,param_2);
  return;
}

