// name: FUN_00467ae8
// address: 0x467ae8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00467ae8(int *param_1,HDC param_2,HWND param_3,int param_4)

{
  int iVar1;
  DWORD DVar2;
  undefined4 *in_FS_OFFSET;
  char cVar3;
  DWORD local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  uint *local_8;
  
  FUN_004dce64(0x4fc6d0);
  local_30 = FUN_00416320(param_1,param_2,param_3,param_4);
  iVar1 = GetDlgCtrlID(param_3);
  if ((((iVar1 == 0x2f44) || ((0x2e85 < iVar1 && (iVar1 < 0x2e9a)))) ||
      ((0x2e99 < iVar1 && (iVar1 < 0x2eae)))) || ((0x2e71 < iVar1 && (iVar1 < 0x2e86)))) {
    if ((0x2e71 < iVar1) && (iVar1 < 0x2e86)) {
      DVar2 = GetSysColor(2);
      SetTextColor(param_2,DVar2);
    }
    DVar2 = GetSysColor(5);
    SetBkColor(param_2,DVar2);
    if (param_1[0x2d] == 0) {
      local_8 = (uint *)FUN_004cc0f0();
      if (local_8 != (uint *)0x0) {
        local_1c = 0x14;
        cVar3 = '\x01';
        local_34 = GetSysColor(5);
        FUN_004ab84c(local_8,&local_34,cVar3);
      }
      param_1[0x2d] = (int)local_8;
    }
    local_30 = *(undefined4 *)param_1[0x2d];
    *in_FS_OFFSET = local_2c;
  }
  else {
    *in_FS_OFFSET = local_2c;
  }
  return local_30;
}

