// name: FUN_004338e4
// address: 0x4338e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004338e4(int *param_1,int param_2)

{
  uint *puVar1;
  bool bVar2;
  HWND hWnd;
  HGDIOBJ pvVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  tagRECT local_64 [2];
  int local_44;
  LPSTR local_40;
  undefined4 local_3c;
  undefined2 local_2c;
  int local_20;
  uint *local_18;
  uint *local_14;
  uint *local_10;
  LPSTR local_c;
  uint *local_8;
  
  FUN_00467ba8(0x47db54);
  local_8 = (uint *)0x0;
  local_c = (LPSTR)0x0;
  local_20 = local_20 + 2;
  local_2c = 0x14;
  puVar1 = local_8;
  if (param_1[6] == 0) {
    lParam = 0;
    wParam = 0;
    Msg = 0x31;
    hWnd = GetParent(*(HWND *)(*param_1 + 0xc));
    pvVar3 = (HGDIOBJ)SendMessageA(hWnd,Msg,wParam,lParam);
    if (pvVar3 == (HGDIOBJ)0x0) {
      bVar2 = FUN_0041b9e4();
      if (bVar2) {
        iVar4 = 0xc;
      }
      else {
        iVar4 = 0xd;
      }
      pvVar3 = GetStockObject(iVar4);
    }
    puVar1 = local_8;
    if (pvVar3 != (HGDIOBJ)0x0) {
      local_10 = (uint *)FUN_00456840();
      if (local_10 != (uint *)0x0) {
        local_2c = 0x38;
        FUN_00423a68(local_10,pvVar3,0);
        local_2c = 0x2c;
      }
      puVar1 = local_10;
      local_14 = local_8;
      if (local_8 != (uint *)0x0) {
        local_2c = 0x44;
        local_20 = local_20 + -1;
        FUN_004284a8(local_8,0);
        FUN_0045680c();
        local_2c = 0x2c;
      }
    }
  }
  local_8 = puVar1;
  if (param_1[6] == 0) {
    if (local_8 != (uint *)0x0) {
      (**(code **)(*(int *)(param_2 + 5) + 0x14))();
    }
  }
  else {
    (**(code **)(*(int *)(param_2 + 5) + 0x14))();
  }
  iVar4 = GetWindowTextLengthA(*(HWND *)(*param_1 + 0xc));
  local_2c = 0x14;
  local_40 = (LPSTR)FUN_004568d0();
  FUN_0045681c();
  local_c = local_40;
  GetWindowTextA(*(HWND *)(*param_1 + 0xc),local_40,iVar4 + 1);
  local_64[0].left = 0;
  local_64[0].top = 0;
  local_64[0].right = 0;
  local_64[0].bottom = 0;
  FUN_004386fc(*param_1,local_64);
  local_44 = param_1[8];
  if (*(char *)((int)param_1 + 0x3e) == '\0') {
    if (*(char *)((int)param_1 + 0x3d) != '\0') {
      local_44 = param_1[9];
    }
  }
  else {
    local_44 = param_1[10];
  }
  (**(code **)(*(int *)(param_2 + 5) + 0x24))();
  (**(code **)(*(int *)(param_2 + 5) + 0x20))();
  (**(code **)(*(int *)(param_2 + 5) + 0x50))();
  (**(code **)(*(int *)(param_2 + 5) + 0x20))();
  (**(code **)(*(int *)(param_2 + 5) + 0x24))();
  if ((param_1[6] != 0) || (local_8 != (uint *)0x0)) {
    (**(code **)(*(int *)(param_2 + 5) + 0x1c))();
  }
  local_20 = local_20 + -1;
  FUN_0045681c();
  local_18 = local_8;
  if (local_8 != (uint *)0x0) {
    local_2c = 0x68;
    local_20 = local_20 + -2;
    FUN_004284a8(local_8,0);
    FUN_0045680c();
  }
  *in_FS_OFFSET = local_3c;
  return;
}

