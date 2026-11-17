// name: FUN_0045a2a4
// address: 0x45a2a4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045a2a4(int *param_1,undefined4 param_2,LPPOINT param_3)

{
  int *piVar1;
  HWND hWnd;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 local_40;
  undefined4 local_1c [3];
  undefined4 local_10;
  HMENU local_c;
  
  FUN_004dce64(0x4f95a8);
  piVar1 = FUN_0045dcb8(param_1,&param_3->x);
  if (piVar1 != (int *)0x0) {
    DAT_0051ac88 = 0x19f0;
    DAT_0051ac84 = 0x19f0;
    iVar3 = 1;
    piVar1 = FUN_00497b98(local_1c,*(HINSTANCE *)(*(int *)(*param_1 + 0x6c) + 0xc),(LPCSTR)0x19f0);
    FUN_00497fac(&local_10,piVar1,iVar3);
    FUN_00497bf4(local_1c,2);
    ClientToScreen(*(HWND *)(*param_1 + 0xc),param_3);
    iVar3 = GetSystemMetrics(0);
    if (param_3->x < 1) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_3->x;
    }
    if (iVar2 < iVar3) {
      if (param_3->x < 1) {
        iVar3 = 0;
      }
      else {
        iVar3 = param_3->x;
      }
    }
    else {
      iVar3 = GetSystemMetrics(0);
    }
    param_3->x = iVar3;
    iVar3 = GetSystemMetrics(1);
    if (param_3->y < 1) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_3->y;
    }
    if (iVar2 < iVar3) {
      if (param_3->y < 1) {
        iVar3 = 0;
      }
      else {
        iVar3 = param_3->y;
      }
    }
    else {
      iVar3 = GetSystemMetrics(1);
    }
    param_3->y = iVar3;
    hWnd = (HWND)FUN_00454458(param_1);
    TrackPopupMenu(local_c,2,param_3->x,param_3->y,0,hWnd,(RECT *)0x0);
    FUN_00497bf4(&local_10,0);
  }
  FUN_004a5774(*param_1);
  *in_FS_OFFSET = local_40;
  return;
}

