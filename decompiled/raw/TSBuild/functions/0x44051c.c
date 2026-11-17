// name: FUN_0044051c
// address: 0x44051c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0044051c(int *param_1,int param_2)

{
  HWND hWnd;
  LONG LVar1;
  BOOL BVar2;
  undefined4 local_14 [4];
  
  FUN_00436208(*param_1,param_2);
  if (param_2 == 0) {
    hWnd = GetWindow(*(HWND *)(*param_1 + 0xc),5);
    while( true ) {
      BVar2 = IsWindow(hWnd);
      if (BVar2 == 0) break;
      LVar1 = GetWindowLongA(hWnd,-0xc);
      FUN_00440398(local_14,LVar1,hWnd);
      FUN_00436810((undefined4 *)*param_1,*(HWND *)(*param_1 + 0xc),local_14);
      hWnd = GetWindow(hWnd,2);
    }
  }
  return 0;
}

