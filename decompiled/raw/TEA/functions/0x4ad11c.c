// name: FUN_004ad11c
// address: 0x4ad11c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004ad11c(int *param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x50c690);
  FUN_004a6fd8(*param_1);
  FUN_004ace70(param_1,param_1[5]);
  for (hWnd = GetWindow(*(HWND *)(*param_1 + 0xc),5); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
    LVar1 = FUN_004a614c(hWnd,*(LPARAM *)(*param_1 + 0x6c));
    if (LVar1 == 0) {
      piVar2 = (int *)FUN_004cc0f0();
      if (piVar2 != (int *)0x0) {
        FUN_004a4ed0(piVar2,0,hWnd,(int *)0x0);
      }
      (**(code **)(piVar2[2] + 0x34))();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

