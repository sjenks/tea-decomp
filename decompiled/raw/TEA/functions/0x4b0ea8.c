// name: FUN_004b0ea8
// address: 0x4b0ea8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004b0ea8(int *param_1,int param_2)

{
  HWND hWnd;
  LONG LVar1;
  BOOL BVar2;
  undefined4 local_14 [4];
  
  FUN_004a5554(*param_1,param_2);
  if (param_2 == 0) {
    hWnd = GetWindow(*(HWND *)(*param_1 + 0xc),5);
    while( true ) {
      BVar2 = IsWindow(hWnd);
      if (BVar2 == 0) break;
      LVar1 = GetWindowLongA(hWnd,-0xc);
      FUN_004b0d24(local_14,LVar1,hWnd);
      FUN_004a5b5c((undefined4 *)*param_1,*(HWND *)(*param_1 + 0xc),local_14);
      hWnd = GetWindow(hWnd,2);
    }
  }
  return 0;
}

