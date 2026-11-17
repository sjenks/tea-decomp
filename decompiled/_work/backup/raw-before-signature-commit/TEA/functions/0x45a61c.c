// name: FUN_0045a61c
// address: 0x45a61c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0045a61c(int *param_1,HDC param_2,HWND param_3,int param_4)

{
  HWND pHVar1;
  DWORD DVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  COLORREF local_4c;
  COLORREF local_48;
  int local_44;
  int *local_40;
  COLORREF local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined2 local_20;
  uint *local_c;
  uint *local_8;
  
  FUN_004dce64(0x4f9618);
  local_34 = FUN_00466b28(param_1[0xe]);
  local_38 = FUN_00416320(param_1,param_2,param_3,param_4);
  if (param_4 == 1) {
    if ((*(HWND *)(param_1[0xb6] + 0xc) != param_3) && (*(HWND *)(param_1[0x143] + 0xc) != param_3))
    {
      SetTextColor(param_2,*(COLORREF *)(local_34 + 0x30));
    }
  }
  else if (param_4 == 6) {
    iVar4 = 0;
    while( true ) {
      iVar3 = param_1[0x1ae] - param_1[0x1ad];
      if (iVar3 < 0) {
        iVar3 = iVar3 + 3;
      }
      if (iVar3 >> 2 <= iVar4) break;
      if ((*(HWND *)(**(int **)(*(int *)(iVar4 * 4 + param_1[0x1ad]) + 4) + 0xc) == param_3) &&
         (SelectObject(param_2,(HGDIOBJ)param_1[0x31c]), iVar4 == param_1[0x1b4])) {
        local_40 = *(int **)(*(int *)(iVar4 * 4 + param_1[0x1ad]) + 8);
        local_44 = iVar4;
        pHVar1 = GetFocus();
        if (pHVar1 == *(HWND *)(*local_40 + 0xc)) {
          DVar2 = GetSysColor(9);
          SetTextColor(param_2,DVar2);
          local_3c = GetSysColor(2);
        }
        else {
          DVar2 = GetSysColor(0x13);
          SetTextColor(param_2,DVar2);
          local_3c = GetSysColor(3);
        }
        SetBkColor(param_2,local_3c);
        local_8 = (uint *)param_1[799];
        if (local_8 != (uint *)0x0) {
          local_20 = 0x14;
          FUN_004ab9b4(local_8,3);
          local_20 = 8;
        }
        local_c = (uint *)FUN_004cc0f0();
        if (local_c != (uint *)0x0) {
          local_20 = 0x2c;
          local_48 = local_3c;
          local_4c = local_3c;
          FUN_004ab84c(local_c,&local_4c,'\x01');
          local_20 = 0x20;
        }
        param_1[799] = (int)local_c;
        local_38 = *(undefined4 *)param_1[799];
      }
      iVar4 = iVar4 + 1;
    }
  }
  *in_FS_OFFSET = local_30;
  return local_38;
}

