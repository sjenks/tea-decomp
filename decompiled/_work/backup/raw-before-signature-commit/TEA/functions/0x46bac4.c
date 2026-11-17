// name: FUN_0046bac4
// address: 0x46bac4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0046bac4(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  tagRECT local_60;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_20;
  LPARAM *local_c;
  int *local_8;
  
  FUN_004dce64(0x4fdc44);
  local_38 = 0xc4;
  local_34 = 0xa0;
  local_40 = 0x6c;
  local_3c = 4;
  local_60.right = 0x130;
  local_60.left = 0x6c;
  local_60.top = 4;
  local_60.bottom = 0xa4;
  MapDialogRect(*(HWND *)(*param_1 + 0xc),&local_60);
  local_8 = (int *)FUN_004cc0f0();
  if (local_8 != (int *)0x0) {
    local_20 = 0x14;
    FUN_0046a058(local_8,0,param_1,&local_60.left);
    local_20 = 8;
  }
  param_1[0x85] = (int)local_8;
  FUN_004156f4(param_1);
  local_c = (LPARAM *)FUN_004cc0f0();
  if (local_c != (int *)0x0) {
    local_20 = 0x2c;
    local_44 = 0xffffff;
    FUN_004945ec(local_c);
    local_20 = 0x20;
  }
  param_1[0x2d] = (int)local_c;
  FUN_004a76a8(*(int *)((int)param_1 + 0x166),0x1109,0,*local_c);
  iVar2 = FUN_00416a78((int)param_1,(uint *)s_SplitterPosition_004fd374,
                       *(undefined4 *)(*(int *)param_1[0x85] + 0x20));
  iVar1 = *(int *)((int)param_1 + 0x166);
  local_48 = *(int *)(iVar1 + 0x24);
  local_4c = *(int *)(iVar1 + 0x20);
  FUN_004a7aa0(iVar1,(HWND)0x0,local_4c,local_48,
               (*(int *)(iVar1 + 0x28) + iVar2) - *(int *)(*(int *)param_1[0x85] + 0x20),
               *(int *)(iVar1 + 0x2c),0x21c);
  iVar1 = *(int *)param_1[0x85];
  local_50 = *(int *)(iVar1 + 0x24);
  FUN_004a7aa0(iVar1,(HWND)0x0,iVar2,local_50,*(int *)(iVar1 + 0x28),*(int *)(iVar1 + 0x2c),0x21c);
  *in_FS_OFFSET = local_30;
  return;
}

