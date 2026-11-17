// name: FUN_004425a0
// address: 0x4425a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004425a0(int *param_1)

{
  BOOL BVar1;
  HICON hIcon;
  undefined4 *in_FS_OFFSET;
  undefined4 local_90;
  HDC local_6c [26];
  
  FUN_00455f04(0x46ec5c);
  BVar1 = IsIconic(*(HWND *)(*param_1 + 0xc));
  if ((BVar1 == 0) || ((*(int *)((int)param_1 + 0x2e) == 0 && (*(int *)((int)param_1 + 0x15) == 0)))
     ) {
    FUN_0042c550(*param_1);
  }
  else {
    FUN_004239f8((int *)local_6c,*(HWND *)(*param_1 + 0xc));
    if (*(int *)((int)param_1 + 0x2e) == 0) {
      (**(code **)(*(int *)(*(int *)((int)param_1 + 0x15) + 8) + 0x54))();
    }
    else {
      FUN_0042d1a4(*param_1,0x27,(WPARAM)local_6c[0],0);
      if (*(int *)((int)param_1 + 0x42) == 0) {
        hIcon = FUN_00441794();
      }
      else {
        hIcon = *(HICON *)((int)param_1 + 0x42);
      }
      DrawIcon(local_6c[0],0,0,hIcon);
    }
    FUN_00423a80((int *)local_6c,2);
  }
  *in_FS_OFFSET = local_90;
  return;
}

