// name: FUN_004031f4
// address: 0x4031f4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_004031f4(int *param_1,int param_2)

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
  FUN_00401490(param_1 + 0x246,param_2);
  return param_1[7] == 2;
}

