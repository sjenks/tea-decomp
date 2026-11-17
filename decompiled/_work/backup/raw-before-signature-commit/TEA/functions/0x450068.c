// name: FUN_00450068
// address: 0x450068
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00450068(int param_1,int param_2)

{
  HDC pHVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  uint *puVar6;
  char cVar7;
  int iVar8;
  tagTEXTMETRICA *lptm;
  tagSIZE *ptVar9;
  UINT align;
  RECT local_1ec;
  RECT local_1dc;
  RECT local_1cc;
  RECT local_1bc;
  uint local_1ac [4];
  RECT local_19c;
  RECT local_18c;
  tagTEXTMETRICA local_17c;
  tagRECT local_144;
  LONG local_134;
  LONG local_130;
  int local_12c;
  LONG local_128;
  DWORD local_124;
  DWORD local_120;
  uint *local_11c;
  int local_118;
  LONG local_114;
  int local_110;
  LONG local_10c;
  int local_108;
  LONG local_104;
  LONG local_100;
  LONG local_fc;
  int local_f8;
  tagSIZE local_f4;
  char *local_ec;
  uint local_e8;
  LONG local_e4;
  int local_e0;
  int local_dc;
  DWORD local_d8;
  DWORD local_d4;
  uint *local_d0;
  double local_cc;
  int local_c4;
  int local_c0;
  tagSIZE local_bc;
  char *local_b4;
  uint local_b0;
  LONG local_ac;
  int local_a8;
  LONG local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  DWORD local_80;
  COLORREF local_7c;
  int local_78;
  DWORD local_74 [8];
  undefined2 local_54;
  int local_48;
  uint local_40 [2];
  uint local_38 [2];
  HBRUSH local_30 [2];
  HDC local_28;
  int local_23;
  
  FUN_004dce64(0x4f799c);
  local_74[3] = 0xf;
  local_74[2] = 0x12;
  local_74[1] = 0xd;
  local_54 = 8;
  FUN_0048d7c8(&local_28,*(undefined4 *)(param_2 + 0x18));
  local_48 = local_48 + 1;
  local_54 = 0x14;
  local_144.bottom = *(int *)(param_2 + 0x28);
  local_144.right = *(int *)(param_2 + 0x24);
  local_144.top = *(int *)(param_2 + 0x20);
  local_144.left = *(int *)(param_2 + 0x1c);
  FUN_0049fa74(&local_28,&local_144,6,0xf);
  FUN_00494470(&local_144.left,-2,-2);
  local_54 = 0x20;
  cVar7 = '\x01';
  local_74[0] = GetSysColor(0xf);
  FUN_004ab84c((uint *)local_30,local_74,cVar7);
  local_48 = local_48 + 2;
  local_54 = 0x14;
  if ((*(int *)(param_1 + 0x20) == 0) || (*(int *)(param_1 + 0x30) < 1)) {
    FillRect(local_28,&local_144,local_30[0]);
    *(LONG *)(param_1 + 0x3c) = local_144.top + 1;
    *(LONG *)(param_1 + 0x40) = local_144.bottom + -1;
    *(LONG *)(param_1 + 0x34) = local_144.left + 1;
    *(LONG *)(param_1 + 0x38) = (local_144.right + -1) - *(int *)(param_1 + 0x34);
  }
  else {
    if (*(int *)(param_1 + 0x24) < *(int *)(param_1 + 0x20)) {
      local_78 = -1;
    }
    else {
      local_78 = 1;
    }
    local_80 = GetSysColor(0x12);
    FUN_0048dd6c(&local_7c,(int *)&local_28,&local_80);
    pHVar1 = (HDC)(**(code **)(local_23 + 0x5c))();
    if (pHVar1 != local_28) {
      SetBkMode(local_28,1);
    }
    iVar8 = 1;
    pHVar1 = (HDC)(**(code **)(local_23 + 0x5c))();
    SetBkMode(pHVar1,iVar8);
    lptm = &local_17c;
    pHVar1 = (HDC)(**(code **)(local_23 + 0x5c))();
    GetTextMetricsA(pHVar1,lptm);
    local_84 = (local_144.bottom - (local_17c.tmAscent - local_17c.tmInternalLeading)) + -2;
    local_88 = local_84 - (local_17c.tmAscent - local_17c.tmInternalLeading) / 3;
    if (local_88 == local_84) {
      local_88 = local_88 + -1;
    }
    *(LONG *)(param_1 + 0x3c) = local_144.top + 1;
    *(int *)(param_1 + 0x40) = local_88 + -1;
    local_18c.bottom = local_144.top + 1;
    local_90 = local_144.right;
    local_94 = local_144.top;
    local_98 = local_144.left;
    local_18c.left = local_144.left;
    local_18c.top = local_144.top;
    local_18c.right = local_144.right;
    local_8c = local_18c.bottom;
    FillRect(local_28,&local_18c,local_30[0]);
    local_9c = local_144.bottom;
    local_a0 = local_144.right;
    local_19c.top = *(LONG *)(param_1 + 0x40);
    local_a8 = local_144.left;
    local_19c.left = local_144.left;
    local_19c.right = local_144.right;
    local_19c.bottom = local_144.bottom;
    local_a4 = local_19c.top;
    FillRect(local_28,&local_19c,local_30[0]);
    FUN_004e0344((undefined1 *)local_1ac,&DAT_004f75f3);
    pcVar2 = FUN_004dc9f4(local_1ac);
    local_bc.cx = 0;
    local_bc.cy = 0;
    ptVar9 = &local_bc;
    puVar6 = local_1ac;
    local_b4 = pcVar2;
    pHVar1 = (HDC)(**(code **)(local_23 + 0x5c))();
    GetTextExtentPoint32A(pHVar1,(LPCSTR)puVar6,(int)pcVar2,ptVar9);
    local_b0 = local_bc.cx;
    local_ac = local_bc.cy;
    pHVar1 = (HDC)(**(code **)(local_23 + 0x5c))();
    if (pHVar1 != local_28) {
      SetTextAlign(local_28,0x18);
    }
    align = 0x18;
    pHVar1 = (HDC)(**(code **)(local_23 + 0x5c))();
    SetTextAlign(pHVar1,align);
    FUN_0048dfc4(&local_28,local_144.left + 1,local_144.bottom + -1,local_1ac,(char *)0xffffffff);
    iVar5 = (int)local_b0 >> 1;
    iVar8 = iVar5;
    if (iVar5 < 0) {
      iVar8 = iVar5 + (uint)((local_b0 & 1) != 0);
    }
    *(int *)(param_1 + 0x34) = iVar8 + local_144.left + 1;
    if (iVar5 < 0) {
      iVar5 = iVar5 + (uint)((local_b0 & 1) != 0);
    }
    *(LONG *)(param_1 + 0x38) = ((local_144.right + -1) - iVar5) - *(int *)(param_1 + 0x34);
    local_c0 = *(int *)(param_1 + 0x30);
    local_c4 = local_144.right + -1;
    iVar8 = *(int *)(param_1 + 0x24) + local_78;
    while( true ) {
      local_cc = ((double)local_c0 * (double)*(int *)(param_1 + 0x38)) /
                 (double)*(int *)(param_1 + 0x30);
      local_54 = 0x14;
      iVar5 = FUN_004e3c04();
      iVar5 = iVar5 + *(int *)(param_1 + 0x34);
      local_54 = 0x2c;
      cVar7 = '\x01';
      local_d8 = GetSysColor(0x12);
      local_d4 = local_d8;
      local_d0 = FUN_004ab84c(local_38,&local_d8,cVar7);
      local_1bc.right = iVar5 + 1;
      local_48 = local_48 + 2;
      local_dc = local_88;
      local_1bc.top = local_88;
      local_1bc.bottom = local_84;
      local_1bc.left = iVar5;
      local_e0 = iVar5;
      FillRect(local_28,&local_1bc,(HBRUSH)*local_d0);
      local_48 = local_48 + -2;
      FUN_004ab9b4(local_38,2);
      if (iVar8 != *(int *)(param_1 + 0x24) + local_78) {
        FUN_004e0344((undefined1 *)local_1ac,&DAT_004f75f3);
        pcVar2 = FUN_004dc9f4(local_1ac);
        local_f4.cx = 0;
        local_f4.cy = 0;
        ptVar9 = &local_f4;
        puVar6 = local_1ac;
        local_ec = pcVar2;
        pHVar1 = (HDC)(**(code **)(local_23 + 0x5c))();
        GetTextExtentPoint32A(pHVar1,(LPCSTR)puVar6,(int)pcVar2,ptVar9);
        local_e8 = local_f4.cx;
        local_e4 = local_f4.cy;
        local_54 = 0x14;
        iVar3 = local_f4.cx >> 1;
        iVar4 = iVar3;
        if (iVar3 < 0) {
          iVar4 = iVar3 + (uint)((local_f4.cx & 1U) != 0);
        }
        if ((local_c4 < iVar4 + iVar5) && (iVar8 == *(int *)(param_1 + 0x24))) {
          iVar5 = local_c4 - iVar4;
        }
        if (iVar3 < 0) {
          iVar3 = iVar3 + (uint)((local_f4.cx & 1U) != 0);
        }
        if (iVar3 + iVar5 <= local_c4) {
          iVar4 = (int)local_b0 >> 1;
          if (iVar4 < 0) {
            iVar4 = iVar4 + (uint)((local_b0 & 1) != 0);
          }
          if (iVar4 + *(int *)(param_1 + 0x34) + 3 < iVar5 - iVar3) {
            FUN_0048dfc4(&local_28,iVar5 - iVar3,local_144.bottom + -1,local_1ac,(char *)0xffffffff)
            ;
            iVar4 = (int)local_e8 >> 1;
            if (iVar4 < 0) {
              iVar4 = iVar4 + (uint)((local_e8 & 1) != 0);
            }
            local_c4 = (iVar5 - iVar4) + -3;
          }
        }
      }
      if (iVar8 == *(int *)(param_1 + 0x20)) break;
      iVar8 = iVar8 - local_78;
      iVar5 = FUN_00408e54(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c),iVar8);
      local_c0 = local_c0 - iVar5;
    }
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    local_f8 = FUN_004e3c04();
    local_54 = 0x14;
    local_1cc.bottom = *(LONG *)(param_1 + 0x40);
    local_1cc.right = *(LONG *)(param_1 + 0x34);
    local_1cc.top = *(LONG *)(param_1 + 0x3c);
    local_108 = local_144.left;
    local_1cc.left = local_144.left;
    local_104 = local_1cc.top;
    local_100 = local_1cc.right;
    local_fc = local_1cc.bottom;
    FillRect(local_28,&local_1cc,local_30[0]);
    local_1dc.bottom = *(LONG *)(param_1 + 0x40);
    local_110 = local_144.right;
    local_1dc.top = *(LONG *)(param_1 + 0x3c);
    local_1dc.left = *(int *)(param_1 + 0x34) + local_f8;
    local_1dc.right = local_144.right;
    local_118 = local_1dc.left;
    local_114 = local_1dc.top;
    local_10c = local_1dc.bottom;
    FillRect(local_28,&local_1dc,local_30[0]);
    if (0 < local_f8) {
      local_54 = 0x38;
      cVar7 = '\x01';
      local_124 = GetSysColor(0xd);
      local_120 = local_124;
      local_11c = FUN_004ab84c(local_40,&local_124,cVar7);
      local_48 = local_48 + 2;
      local_1ec.bottom = *(LONG *)(param_1 + 0x40);
      local_1ec.right = *(int *)(param_1 + 0x34) + local_f8;
      local_1ec.top = *(LONG *)(param_1 + 0x3c);
      local_1ec.left = *(LONG *)(param_1 + 0x34);
      local_134 = local_1ec.left;
      local_130 = local_1ec.top;
      local_12c = local_1ec.right;
      local_128 = local_1ec.bottom;
      FillRect(local_28,&local_1ec,(HBRUSH)*local_11c);
      local_48 = local_48 + -2;
      FUN_004ab9b4(local_40,2);
    }
  }
  local_48 = local_48 + -2;
  FUN_004ab9b4((uint *)local_30,2);
  local_48 = local_48 + -1;
  FUN_0048d8bc((int *)&local_28,2);
  *in_FS_OFFSET = local_74[4];
  return;
}

