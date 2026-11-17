// name: FUN_00445c1c
// address: 0x445c1c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00445c1c(int *param_1,HWND param_2)

{
  char cVar1;
  HWND hWnd;
  LRESULT LVar2;
  int iVar3;
  
  if ((param_1[6] != 0) && (hWnd = param_2, DAT_00481088 == (int *)0x0)) {
    while ((hWnd != (HWND)0x0 &&
           (LVar2 = FUN_00436e00(hWnd,*(LPARAM *)(*param_1 + 0x6c)), LVar2 == 0))) {
      hWnd = GetParent(hWnd);
    }
    if ((((hWnd != (HWND)0x0) && (iVar3 = GetDlgCtrlID(param_2), iVar3 != 2)) && (iVar3 != 1)) &&
       (cVar1 = FUN_0044655c(param_1,'\0'), cVar1 == '\0')) {
      DAT_00481088 = param_1;
      PostMessageA(*(HWND *)(*(int *)(*param_1 + 0x14) + 0xc),0x7ffe,*(WPARAM *)(*param_1 + 0xc),0);
    }
  }
  FUN_00436e80(*param_1);
  return;
}

