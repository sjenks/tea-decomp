// name: FUN_00463310
// address: 0x463310
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00463361) */
/* WARNING: Removing unreachable block (ram,0x0046338d) */

void __cdecl
FUN_00463310(int param_1,int *param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5,
            undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  HINSTANCE hInst;
  int iVar1;
  HANDLE pvVar2;
  HICON pHVar3;
  int *piVar4;
  byte *pbVar5;
  undefined4 *in_FS_OFFSET;
  int iVar6;
  undefined4 local_c0;
  undefined1 local_9c [8];
  int local_94;
  undefined1 local_8c [8];
  int local_84;
  undefined1 local_7c [8];
  int local_74;
  undefined1 local_6c [8];
  int local_64;
  undefined1 local_5c [8];
  int local_54;
  undefined1 local_4c [8];
  int local_44;
  undefined1 local_3c [16];
  undefined1 local_2c [8];
  char *local_24;
  undefined1 local_1c [8];
  byte *local_14;
  int local_c [2];
  
  FUN_004dce64(0x4fb920);
  *(int **)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  local_14 = &DAT_00513d64;
  local_24 = &DAT_00513d64;
  FUN_00485bb8((int)local_3c,0x51a850);
  iVar1 = FUN_00485fac((int)local_3c,(int)local_1c,(int)local_2c);
  if (iVar1 == 0) {
    MessageBoxExA(*(HWND *)(*param_2 + 0xc),s_Common_application_data_folder_w_004fb48b,
                  s_Folder_Missing_004fb4d1,0x10,0);
    PostQuitMessage(1);
  }
  else if ((iVar1 == 2) && (iVar1 = FUN_004867e4(local_14,local_24), iVar1 != 0)) {
    FUN_004cf384(param_1 + 0x148,(int)local_1c);
    FUN_004cf384(param_1 + 0x158,(int)local_2c);
  }
  FUN_00485ee0((int)local_3c,2);
  if (local_24 != (char *)0x0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar4 = (int *)(local_24 + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar1 = *piVar4 + 1;
      }
      if (iVar1 != 0) goto LAB_004634f9;
    }
    FUN_004cc0bc();
    local_24 = (char *)0x0;
  }
LAB_004634f9:
  if (local_14 != (byte *)0x0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      pbVar5 = local_14 + -0xc;
      if (pbVar5 == (byte *)&DAT_00513d58) {
        iVar1 = 1;
      }
      else if (pbVar5 == (byte *)&DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *(int *)pbVar5 = *(int *)pbVar5 + -1;
        iVar1 = *(int *)pbVar5 + 1;
      }
      if (iVar1 != 0) goto LAB_0046359e;
    }
    FUN_004cc0bc();
    local_14 = (byte *)0x0;
  }
LAB_0046359e:
  iVar6 = 0;
  iVar1 = 0;
  FUN_004649b0((int)local_4c);
  FUN_0044e83c(local_c,(int)local_4c,iVar1,iVar6);
  if (local_44 != 0) {
    if (*(int *)(local_44 + -0xc) != -1) {
      piVar4 = (int *)(local_44 + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar1 = *piVar4 + 1;
      }
      if (iVar1 != 0) goto LAB_00463676;
    }
    FUN_004cc0bc();
    local_44 = 0;
  }
LAB_00463676:
  *param_8 = 0;
  *param_7 = 0;
  *param_6 = 0;
  *param_5 = 0;
  *param_4 = 0;
  FUN_004cf628((int)local_5c,(uint *)s_ViewWindowX_004fb408);
  FUN_0044e9c0((int)local_c,(int)local_5c,param_4);
  if (local_54 != 0) {
    if (*(int *)(local_54 + -0xc) != -1) {
      piVar4 = (int *)(local_54 + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar1 = *piVar4 + 1;
      }
      if (iVar1 != 0) goto LAB_00463771;
    }
    FUN_004cc0bc();
    local_54 = 0;
  }
LAB_00463771:
  FUN_004cf628((int)local_6c,(uint *)s_ViewWindowY_004fb414);
  FUN_0044e9c0((int)local_c,(int)local_6c,param_5);
  if (local_64 != 0) {
    if (*(int *)(local_64 + -0xc) != -1) {
      piVar4 = (int *)(local_64 + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar1 = *piVar4 + 1;
      }
      if (iVar1 != 0) goto LAB_00463851;
    }
    FUN_004cc0bc();
    local_64 = 0;
  }
LAB_00463851:
  FUN_004cf628((int)local_7c,(uint *)s_ViewWindowW_004fb420);
  FUN_0044e9c0((int)local_c,(int)local_7c,param_6);
  if (local_74 != 0) {
    if (*(int *)(local_74 + -0xc) != -1) {
      piVar4 = (int *)(local_74 + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar1 = *piVar4 + 1;
      }
      if (iVar1 != 0) goto LAB_00463931;
    }
    FUN_004cc0bc();
    local_74 = 0;
  }
LAB_00463931:
  FUN_004cf628((int)local_8c,(uint *)s_ViewWindowH_004fb42c);
  FUN_0044e9c0((int)local_c,(int)local_8c,param_7);
  if (local_84 != 0) {
    if (*(int *)(local_84 + -0xc) != -1) {
      piVar4 = (int *)(local_84 + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar1 = *piVar4 + 1;
      }
      if (iVar1 != 0) goto LAB_00463a1a;
    }
    FUN_004cc0bc();
    local_84 = 0;
  }
LAB_00463a1a:
  FUN_004cf628((int)local_9c,(uint *)s_ViewWindowZ_004fb438);
  FUN_0044e9c0((int)local_c,(int)local_9c,param_8);
  if (local_94 != 0) {
    if (*(int *)(local_94 + -0xc) != -1) {
      piVar4 = (int *)(local_94 + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar1 = *piVar4 + 1;
      }
      if (iVar1 != 0) goto LAB_00463b15;
    }
    FUN_004cc0bc();
    local_94 = 0;
  }
LAB_00463b15:
  iVar1 = GetSystemMetrics(0x31);
  iVar6 = GetSystemMetrics(0x32);
  hInst = *(HINSTANCE *)(*(int *)(**(int **)(param_1 + 0x10) + 0x6c) + 0xc);
  if (((0 < iVar1) && (0 < iVar6)) && (hInst != (HINSTANCE)0x0)) {
    pvVar2 = LoadImageA(hInst,s_GRIDICON_004fb4e0,1,iVar1,iVar6,0);
    *(HANDLE *)(param_1 + 0x16c) = pvVar2;
  }
  if (hInst != (HINSTANCE)0x0) {
    pHVar3 = LoadIconA(hInst,s_GRIDICON_004fb4e0);
    *(HICON *)(param_1 + 0x168) = pHVar3;
  }
  FUN_0044e920((int)local_c,2);
  *in_FS_OFFSET = local_c0;
  return;
}

