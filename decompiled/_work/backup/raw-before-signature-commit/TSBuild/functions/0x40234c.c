// name: FUN_0040234c
// address: 0x40234c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_0040234c(int *param_1,int param_2)

{
  BOOL BVar1;
  MSG local_20;
  
  while( true ) {
    BVar1 = PeekMessageA(&local_20,(HWND)0x0,0,0,1);
    if (BVar1 == 0) break;
    BVar1 = IsDialogMessageA(*(HWND *)(*param_1 + 0xc),&local_20);
    if (BVar1 == 0) {
      TranslateMessage(&local_20);
      DispatchMessageA(&local_20);
    }
  }
  FUN_0041740c(param_1 + 0xe7,param_2);
  return param_1[7] == 2;
}

