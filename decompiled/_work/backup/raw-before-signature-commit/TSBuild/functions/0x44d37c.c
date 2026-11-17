// name: FUN_0044d37c
// address: 0x44d37c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0044d37c(int *param_1,undefined4 param_2,HANDLE param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int cy;
  int cx;
  BOOL BVar3;
  HINSTANCE hInst;
  UINT fuLoad;
  
  bVar1 = FUN_0041b9e4();
  if (bVar1) {
    if ((*(int *)((int)param_1 + 0x46) != 0) && (*(int *)((int)param_1 + 0x32) != 0)) {
      FUN_004502b0();
      *(undefined4 *)((int)param_1 + 0x46) = 0;
    }
    *(undefined4 *)((int)param_1 + 0x32) = param_2;
    *(HANDLE *)((int)param_1 + 0x36) = param_3;
    if (*(int *)((int)param_1 + 0x32) == 0) {
      hInst = (HINSTANCE)0x0;
    }
    else {
      hInst = *(HINSTANCE *)(*(int *)((int)param_1 + 0x32) + 8);
    }
    if (*(int *)((int)param_1 + 0x36) != 0) {
      fuLoad = 0;
      cy = GetSystemMetrics(DAT_0047d680);
      cx = GetSystemMetrics(DAT_0047d678);
      param_3 = LoadImageA(hInst,*(LPCSTR *)((int)param_1 + 0x36),1,cx,cy,fuLoad);
      *(HANDLE *)((int)param_1 + 0x46) = param_3;
      if (*(int *)((int)param_1 + 0x46) == 0) {
        param_3 = (HANDLE)FUN_00450270();
        *(HANDLE *)((int)param_1 + 0x46) = param_3;
      }
    }
    if (*(int *)((int)param_1 + 0x46) != 0) {
      BVar3 = IsWindow(*(HWND *)(*param_1 + 0xc));
      param_3 = (HANDLE)0x0;
      if (BVar3 != 0) {
        param_3 = (HANDLE)FUN_00438338(*param_1,0x80,0,*(LPARAM *)((int)param_1 + 0x46));
      }
    }
    uVar2 = CONCAT31((int3)((uint)param_3 >> 8),1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

