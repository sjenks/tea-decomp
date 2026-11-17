// name: FUN_0042e88c
// address: 0x42e88c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0042e88c(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  int iVar1;
  LONG dwNewLong;
  code *pcVar2;
  
  iVar1 = FUN_0042e86c();
  if (iVar1 == 0) {
    DefWindowProcA(param_1,param_2,param_3,param_4);
  }
  else {
    FUN_0042e87c(0);
    *(HWND *)(iVar1 + 0xc) = param_1;
    dwNewLong = FUN_0042e818();
    SetWindowLongA(*(HWND *)(iVar1 + 0xc),-4,dwNewLong);
    FUN_00437d74(iVar1);
    pcVar2 = (code *)GetWindowLongA(*(HWND *)(iVar1 + 0xc),-4);
    (*pcVar2)();
  }
  return;
}

