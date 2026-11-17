// name: FUN_0049ac8c
// address: 0x49ac8c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0049ac8c(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  int iVar1;
  LONG dwNewLong;
  code *pcVar2;
  
  iVar1 = FUN_0049ac6c();
  if (iVar1 == 0) {
    DefWindowProcA(param_1,param_2,param_3,param_4);
  }
  else {
    FUN_0049ac7c(0);
    *(HWND *)(iVar1 + 0xc) = param_1;
    dwNewLong = FUN_0049ac18();
    SetWindowLongA(*(HWND *)(iVar1 + 0xc),-4,dwNewLong);
    FUN_004a70e4(iVar1);
    pcVar2 = (code *)GetWindowLongA(*(HWND *)(iVar1 + 0xc),-4);
    (*pcVar2)();
  }
  return;
}

