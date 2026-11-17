// name: FUN_0044daec
// address: 0x44daec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0044daec(int *param_1,char param_2)

{
  uint *puVar1;
  bool bVar2;
  undefined4 in_EAX;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  tagRECT *ptVar8;
  LONG *pLVar9;
  tagRECT local_128;
  int local_118 [4];
  int local_108 [4];
  tagRECT local_f8;
  int local_e8 [4];
  tagRECT local_d8;
  int local_c8 [4];
  tagRECT local_b8;
  int local_a8 [4];
  tagRECT local_98;
  int local_88 [4];
  tagRECT local_78;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  char local_3d;
  int local_3c;
  int local_38;
  char local_31;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)((int)param_1 + 0x15) == 0) {
    uVar3 = 0;
  }
  else if ((*(byte *)(*(int *)((int)param_1 + 0x15) + 0x74) & 8) == 0) {
    puVar1 = (uint *)(*(int *)((int)param_1 + 0x15) + 0x74);
    *puVar1 = *puVar1 | 8;
    uVar3 = 0;
    local_78.left = 0;
    local_78.top = 0;
    local_78.right = 0;
    local_78.bottom = 0;
    FUN_004386fc(*param_1,&local_78);
    ptVar8 = &local_78;
    pLVar9 = local_88;
    for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pLVar9 = ptVar8->left;
      ptVar8 = (tagRECT *)&ptVar8->top;
      pLVar9 = pLVar9 + 1;
    }
    local_8 = local_88[3] - local_88[1];
    local_c = local_88[2] - local_88[0];
    local_98.left = 0;
    local_98.top = 0;
    local_98.right = 0;
    local_98.bottom = 0;
    FUN_004386c0(*(int *)((int)param_1 + 0x15),&local_98);
    ptVar8 = &local_98;
    pLVar9 = local_a8;
    for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pLVar9 = ptVar8->left;
      ptVar8 = (tagRECT *)&ptVar8->top;
      pLVar9 = pLVar9 + 1;
    }
    local_10 = local_a8[3] - local_a8[1];
    local_14 = local_a8[2] - local_a8[0];
    uVar4 = FUN_00438580(*(int *)((int)param_1 + 0x15));
    if (((uVar4 & 0x80440000) != 0) ||
       (uVar4 = FUN_004385cc(*(int *)((int)param_1 + 0x15)), (uVar4 & 0x20101) != 0)) {
      if ((*(byte *)(*param_1 + 0x74) & 8) != 0) {
        local_b8.left = 0;
        local_b8.top = 0;
        local_b8.right = 0;
        local_b8.bottom = 0;
        FUN_004386fc(*(int *)((int)param_1 + 0x15),&local_b8);
        ptVar8 = &local_b8;
        pLVar9 = local_c8;
        for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pLVar9 = ptVar8->left;
          ptVar8 = (tagRECT *)&ptVar8->top;
          pLVar9 = pLVar9 + 1;
        }
        local_18 = local_c8[3] - local_c8[1];
        local_20 = local_c8[2] - local_c8[0];
        local_1c = local_20;
        ShowScrollBar(*(HWND *)(*(int *)((int)param_1 + 0x15) + 0xc),3,0);
        local_d8.left = 0;
        local_d8.top = 0;
        local_d8.right = 0;
        local_d8.bottom = 0;
        FUN_004386fc(*(int *)((int)param_1 + 0x15),&local_d8);
        ptVar8 = &local_d8;
        pLVar9 = local_e8;
        for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pLVar9 = ptVar8->left;
          ptVar8 = (tagRECT *)&ptVar8->top;
          pLVar9 = pLVar9 + 1;
        }
        local_2c = local_e8[3] - local_e8[1];
        local_30 = local_e8[2] - local_e8[0];
        if ((local_1c == local_30) && (local_18 == local_2c)) {
          local_31 = '\0';
        }
        else {
          local_31 = '\x01';
        }
        local_28 = local_30;
        local_24 = local_2c;
        local_14 = local_30;
        local_10 = local_2c;
        if (local_31 != '\0') {
          local_38 = 3;
          if (local_30 == local_1c) {
            local_38 = 0;
          }
          if (local_2c == local_18) {
            local_38 = 1;
          }
          local_3c = local_38;
          ShowScrollBar(*(HWND *)(*(int *)((int)param_1 + 0x15) + 0xc),local_38,1);
        }
      }
      uVar4 = FUN_00438580(*(int *)((int)param_1 + 0x15));
      if ((uVar4 & 0x80440000) != 0) {
        uVar4 = FUN_00438580(*(int *)((int)param_1 + 0x15));
        local_3d = (uVar4 & 0x80000000) != 0;
        uVar4 = FUN_00438580(*(int *)((int)param_1 + 0x15));
        FUN_004385a0(*(int *)((int)param_1 + 0x15),uVar4 & 0x7fbbffff | 0x50800000);
        if (local_3d != '\0') {
          SetParent(*(HWND *)(*(int *)((int)param_1 + 0x15) + 0xc),*(HWND *)(*param_1 + 0xc));
        }
      }
      uVar4 = FUN_004385cc(*(int *)((int)param_1 + 0x15));
      if ((uVar4 & 0x20101) != 0) {
        uVar4 = FUN_004385cc(*(int *)((int)param_1 + 0x15));
        FUN_004385ec(*(int *)((int)param_1 + 0x15),uVar4 & 0xfffdfefe);
      }
    }
    uVar4 = FUN_00438580(*(int *)((int)param_1 + 0x15));
    if ((uVar4 & 0x800000) != 0) {
      local_f8.left = 0;
      local_f8.top = 0;
      local_f8.right = 0;
      local_f8.bottom = 0;
      FUN_004386fc(*(int *)((int)param_1 + 0x15),&local_f8);
      ptVar8 = &local_f8;
      pLVar9 = local_108;
      for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pLVar9 = ptVar8->left;
        ptVar8 = (tagRECT *)&ptVar8->top;
        pLVar9 = pLVar9 + 1;
      }
      local_48 = local_108[3] - local_108[1];
      local_4c = local_108[2] - local_108[0];
      local_44 = local_4c;
      local_14 = local_4c;
      local_10 = local_48;
    }
    if ((local_c == local_14) && (local_8 == local_10)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if ((*(byte *)(*param_1 + 0x74) & 8) == 0) {
        uVar3 = 1;
      }
      else {
        local_128.left = 0;
        local_128.top = 0;
        local_128.right = 0;
        local_128.bottom = 0;
        FUN_004386c0(*param_1,&local_128);
        ptVar8 = &local_128;
        pLVar9 = local_118;
        for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pLVar9 = ptVar8->left;
          ptVar8 = (tagRECT *)&ptVar8->top;
          pLVar9 = pLVar9 + 1;
        }
        local_58 = local_118[3] - local_118[1];
        local_5c = local_118[2] - local_118[0];
        local_50 = local_58 - local_8;
        local_54 = local_5c - local_c;
        if (param_2 == '\0') {
          uVar4 = 8;
        }
        else {
          uVar4 = 0;
        }
        FUN_00438730(*param_1,(HWND)0x0,0,0,local_14 + local_54,local_10 + local_50,uVar4 | 0x12);
        local_c = local_14;
        local_8 = local_10;
      }
    }
    if ((*(byte *)(*param_1 + 0x1a) & 4) != 0) {
      if (param_1 == (int *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = param_1[3];
      }
      puVar5 = FUN_00468488((int)param_1,iVar7,(int *)&DAT_00403a74,(int *)&DAT_00440e5c,0);
      if (puVar5 == (undefined4 *)0x0) {
        *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) & 0xfffffff7;
      }
    }
    uVar4 = FUN_00438580(*(int *)((int)param_1 + 0x15));
    if ((uVar4 & 0x800000) == 0) {
      if (param_2 == '\0') {
        uVar4 = 8;
      }
      else {
        uVar4 = 0;
      }
      FUN_00438730(*(int *)((int)param_1 + 0x15),(HWND)0x0,0,0,local_c,local_8,uVar4 | 0x214);
    }
    else {
      iVar7 = GetSystemMetrics(DAT_0047d518);
      local_60 = DAT_0047d520;
      iVar6 = GetSystemMetrics(DAT_0047d520);
      local_64 = local_8 + iVar6 * 2;
      local_68 = local_c + iVar7 * 2;
      if (param_2 == '\0') {
        uVar4 = 8;
      }
      else {
        uVar4 = 0;
      }
      FUN_00438730(*(int *)((int)param_1 + 0x15),(HWND)0x0,-iVar7,-iVar6,local_68,local_64,
                   uVar4 | 0x214);
    }
    puVar1 = (uint *)(*(int *)((int)param_1 + 0x15) + 0x74);
    *puVar1 = *puVar1 & 0xfffffff7;
  }
  else {
    uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  return uVar3;
}

