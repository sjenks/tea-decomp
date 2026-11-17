// name: FUN_0045a7f0
// address: 0x45a7f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045a7f0(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  CHAR local_ba [2];
  undefined1 *local_b8;
  undefined4 local_b4;
  int local_b0;
  int local_ac;
  int local_a0;
  undefined1 *local_9c;
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  undefined2 local_80;
  int local_74;
  undefined1 local_6c [8];
  int local_64;
  undefined1 local_5c [8];
  int local_54;
  undefined1 local_4c [8];
  int local_44;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  undefined1 local_1c [8];
  int local_14;
  int local_c [2];
  
  FUN_004dce64(0x4f96cc);
  local_80 = 0x14;
  iVar6 = 0;
  iVar5 = 0;
  FUN_004649b0((int)local_1c);
  local_74 = local_74 + 1;
  FUN_0044e83c(local_c,(int)local_1c,iVar5,iVar6);
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar2 = (int *)(local_14 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar5 = *piVar2 + 1;
      }
      if (iVar5 != 0) goto LAB_0045a8bc;
    }
    local_94 = local_14 + -0xc;
    FUN_004cc0bc();
    local_98 = 0;
    local_9c = local_1c;
    local_14 = 0;
  }
LAB_0045a8bc:
  piVar2 = &local_a0;
  local_a0 = 0;
  local_80 = 0x2c;
  FUN_004cf628((int)local_2c,(uint *)s_PrintingMarginUnits_004f7619);
  local_74 = local_74 + 1;
  FUN_0044e9c0((int)local_c,(int)local_2c,piVar2);
  local_74 = local_74 + -1;
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar2 = (int *)(local_24 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar5 = *piVar2 + 1;
      }
      if (iVar5 != 0) goto LAB_0045a995;
    }
    local_ac = local_24 + -0xc;
    local_b0 = local_24 + -0xc;
    FUN_004cc0bc();
    local_b4 = 0;
    local_b8 = local_2c;
    local_24 = 0;
  }
LAB_0045a995:
  local_80 = 8;
  if ((local_a0 == 4) || (local_a0 == 8)) {
    *(int *)(param_1 + 0xcb4) = local_a0;
  }
  else {
    local_ba[0] = '\0';
    GetLocaleInfoA(0x400,0xd,local_ba,2);
    if (local_ba[0] == '1') {
      *(undefined4 *)(param_1 + 0xcb4) = 4;
    }
    else {
      *(undefined4 *)(param_1 + 0xcb4) = 8;
    }
  }
  if (*(int *)(param_1 + 0xcb4) == 4) {
    uVar3 = 1000;
  }
  else {
    uVar3 = 0x9ec;
  }
  puVar7 = &local_c0;
  local_80 = 0x44;
  FUN_004cf628((int)local_3c,(uint *)s_PrintingLeftMargin_004f762d);
  local_74 = local_74 + 1;
  uVar1 = FUN_0044e9c0((int)local_c,(int)local_3c,puVar7);
  cVar4 = (uVar1 & 0xff) == 0;
  local_74 = local_74 + -1;
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar2 = (int *)(local_34 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar5 = *piVar2 + 1;
      }
      if (iVar5 != 0) goto LAB_0045aae5;
    }
    FUN_004cc0bc();
    local_34 = 0;
  }
LAB_0045aae5:
  if (cVar4 != '\0') {
    local_c0 = uVar3;
  }
  puVar7 = &local_c4;
  local_80 = 0x5c;
  FUN_004cf628((int)local_4c,(uint *)s_PrintingRightMargin_004f7640);
  local_74 = local_74 + 1;
  uVar1 = FUN_0044e9c0((int)local_c,(int)local_4c,puVar7);
  cVar4 = (uVar1 & 0xff) == 0;
  local_74 = local_74 + -1;
  if (local_44 != 0) {
    if (*(int *)(local_44 + -0xc) != -1) {
      piVar2 = (int *)(local_44 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar5 = *piVar2 + 1;
      }
      if (iVar5 != 0) goto LAB_0045abc8;
    }
    FUN_004cc0bc();
    local_44 = 0;
  }
LAB_0045abc8:
  if (cVar4 != '\0') {
    local_c4 = uVar3;
  }
  puVar7 = &local_c8;
  local_80 = 0x74;
  FUN_004cf628((int)local_5c,(uint *)s_PrintingTopMargin_004f7654);
  local_74 = local_74 + 1;
  uVar1 = FUN_0044e9c0((int)local_c,(int)local_5c,puVar7);
  cVar4 = (uVar1 & 0xff) == 0;
  local_74 = local_74 + -1;
  if (local_54 != 0) {
    if (*(int *)(local_54 + -0xc) != -1) {
      piVar2 = (int *)(local_54 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar5 = *piVar2 + 1;
      }
      if (iVar5 != 0) goto LAB_0045acab;
    }
    FUN_004cc0bc();
    local_54 = 0;
  }
LAB_0045acab:
  if (cVar4 != '\0') {
    local_c8 = uVar3;
  }
  puVar7 = &local_cc;
  local_80 = 0x8c;
  FUN_004cf628((int)local_6c,(uint *)s_PrintingBottomMargin_004f7666);
  local_74 = local_74 + 1;
  uVar1 = FUN_0044e9c0((int)local_c,(int)local_6c,puVar7);
  cVar4 = (uVar1 & 0xff) == 0;
  local_74 = local_74 + -1;
  if (local_64 != 0) {
    if (*(int *)(local_64 + -0xc) != -1) {
      piVar2 = (int *)(local_64 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar5 = *piVar2 + 1;
      }
      if (iVar5 != 0) goto LAB_0045ad8e;
    }
    FUN_004cc0bc();
    local_64 = 0;
  }
LAB_0045ad8e:
  if (cVar4 != '\0') {
    local_cc = uVar3;
  }
  *(undefined4 *)(param_1 + 0xcb8) = local_c0;
  *(undefined4 *)(param_1 + 0xcc0) = local_c4;
  *(undefined4 *)(param_1 + 0xcbc) = local_c8;
  *(undefined4 *)(param_1 + 0xcc4) = local_cc;
  local_74 = local_74 + -1;
  FUN_0044e920((int)local_c,2);
  *in_FS_OFFSET = local_90;
  return;
}

