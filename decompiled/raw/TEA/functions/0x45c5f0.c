// name: FUN_0045c5f0
// address: 0x45c5f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045c5f0(int *param_1,UINT param_2)

{
  int *piVar1;
  HWND hWnd;
  undefined4 *in_FS_OFFSET;
  int iVar2;
  tagPOINT local_48;
  undefined4 local_40;
  undefined2 local_30;
  int local_24;
  undefined4 local_1c [3];
  undefined4 local_10;
  HMENU local_c;
  
  FUN_004dce64(0x4f9b98);
  local_30 = 0x14;
  iVar2 = 1;
  DAT_0051ac88 = 0x31ce;
  DAT_0051ac84 = 0x31ce;
  piVar1 = FUN_00497b98(local_1c,*(HINSTANCE *)(*(int *)(*param_1 + 0x6c) + 0xc),(LPCSTR)0x31ce);
  local_24 = local_24 + 1;
  FUN_00497fac(&local_10,piVar1,iVar2);
  local_24 = local_24 + 1;
  FUN_00497bf4(local_1c,2);
  local_30 = 8;
  local_48.x = 0;
  local_48.y = 0;
  ClientToScreen(*(HWND *)(param_1[0x84] + 0xc),&local_48);
  hWnd = (HWND)FUN_00454458(param_1);
  TrackPopupMenu(local_c,param_2,local_48.x,local_48.y,0,hWnd,(RECT *)0x0);
  local_24 = local_24 + -2;
  FUN_00497bf4(&local_10,0);
  *in_FS_OFFSET = local_40;
  return;
}

