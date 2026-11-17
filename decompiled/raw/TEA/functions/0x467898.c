// name: FUN_00467898
// address: 0x467898
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00467898(int *param_1)

{
  HGDIOBJ pvVar1;
  int iVar2;
  int *piVar3;
  tagRECT *ptVar4;
  LONG *pLVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  LOGFONTA local_d0;
  tagRECT local_94;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  tagRECT local_74;
  LONG local_64;
  int local_60;
  int local_5c;
  int local_40;
  undefined4 local_3c;
  undefined2 local_2c;
  int local_20;
  uint *local_18;
  undefined1 local_14 [8];
  int local_c;
  
  bVar6 = 0;
  FUN_004dce64(0x4fc67c);
  FUN_004156f4(param_1);
  local_2c = 0x14;
  FUN_00416dd4((int)local_14,(int)param_1,(uint *)s_Position_004f7360,
               (uint *)(s_TEAQuickReference_004fc474 + 0x11));
  local_20 = local_20 + 1;
  local_2c = 8;
  if (*(int *)(local_c + -4) == 0) {
    local_74.left = 0;
    local_74.top = 0;
    local_74.right = 0;
    local_74.bottom = 0;
    FUN_004a7a30(**(int **)(*(int *)(*param_1 + 0x6c) + 0x2b),&local_74);
    ptVar4 = &local_74;
    pLVar5 = &local_64;
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pLVar5 = ptVar4->left;
      ptVar4 = (tagRECT *)((int)ptVar4 + ((uint)bVar6 * -2 + 1) * 4);
      pLVar5 = pLVar5 + (uint)bVar6 * -2 + 1;
    }
    local_94.left = 0;
    local_94.top = 0;
    local_94.right = 0;
    local_94.bottom = 0;
    FUN_004a7a30(*param_1,&local_94);
    ptVar4 = &local_94;
    pLVar5 = &local_84;
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pLVar5 = ptVar4->left;
      ptVar4 = (tagRECT *)((int)ptVar4 + ((uint)bVar6 * -2 + 1) * 4);
      pLVar5 = pLVar5 + (uint)bVar6 * -2 + 1;
    }
    FUN_00494454(&local_84,local_5c - local_84,local_60 - local_80);
    FUN_004a7aa0(*param_1,(HWND)0x0,local_84,local_80,local_7c - local_84,local_78 - local_80,0x21c)
    ;
  }
  FUN_004ac750(param_1 + 0x2f,(uint)(param_1[0x2e] != 0));
  pvVar1 = GetStockObject(0xb);
  if (pvVar1 != (HGDIOBJ)0x0) {
    EnumChildWindows(*(HWND *)(*param_1 + 0xc),FUN_0046715c,(LPARAM)pvVar1);
  }
  pvVar1 = GetStockObject(0xc);
  if ((pvVar1 != (HGDIOBJ)0x0) && (iVar2 = GetObjectA(pvVar1,0x3c,&local_d0), iVar2 != 0)) {
    local_d0.lfWeight = 700;
    local_18 = (uint *)FUN_004cc0f0();
    if (local_18 != (uint *)0x0) {
      local_2c = 0x2c;
      FUN_0048f7fc(local_18,&local_d0);
      local_2c = 0x20;
    }
    param_1[0x5b] = (int)local_18;
    EnumChildWindows(*(HWND *)(*param_1 + 0xc),FUN_0046719c,*local_18);
    local_2c = 8;
  }
  local_20 = local_20 + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_00467ad7;
    }
    local_40 = local_c + -0xc;
    FUN_004cc0bc();
  }
LAB_00467ad7:
  *in_FS_OFFSET = local_3c;
  return;
}

