// name: FUN_00425be4
// address: 0x425be4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00425be4(undefined4 *param_1,LPRECT param_2,uint param_3,uint param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  LPRECT ptVar6;
  int *piVar7;
  undefined4 *in_FS_OFFSET;
  byte bVar8;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  LPRECT local_44;
  undefined4 local_40;
  undefined2 local_30;
  int local_24;
  uint local_1c [2];
  uint local_14 [2];
  uint local_c [2];
  
  bVar8 = 0;
  FUN_00455f04(0x469358);
  if (DAT_004692a0 != 0) {
    BVar1 = DrawEdge((HDC)*param_1,param_2,param_3,param_4);
    if (BVar1 != 0) {
      *in_FS_OFFSET = local_40;
      return CONCAT31((int3)((uint)BVar1 >> 8),1);
    }
    DVar2 = GetLastError();
    if (DVar2 != 0x78) {
      *in_FS_OFFSET = local_40;
      return 0;
    }
    DAT_004692a0 = 0;
  }
  local_44 = param_2;
  ptVar6 = param_2;
  piVar7 = &local_54;
  for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = ptVar6->left;
    ptVar6 = (LPRECT)((int)ptVar6 + (uint)bVar8 * -8 + 4);
    piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
  }
  if ((param_4 & 0x8000) == 0) {
    if ((param_4 & 0x4000) == 0) {
      if ((param_3 & 3) != 0) {
        if (DAT_004692b4 == '\0') {
          _DAT_004692a4 = DAT_00476c0c;
          DAT_004692b4 = '\x01';
          _DAT_004692a8 = DAT_00476c04;
          _DAT_004692ac = DAT_00476bf4;
          _DAT_004692b0 = DAT_00476c08;
        }
        if (DAT_004692c5 == '\0') {
          _DAT_004692b5 = DAT_00476c08;
          DAT_004692c5 = '\x01';
          _DAT_004692b9 = DAT_00476c08;
          _DAT_004692bd = DAT_00476c04;
          _DAT_004692c1 = DAT_00476c04;
        }
        if ((param_3 & 2) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 2;
        }
        uVar4 = uVar4 | (param_4 & 0x1000) != 0;
        FUN_00426038(param_1,&local_54,param_4,(uint *)(&DAT_004692a4 + uVar4 * 4),
                     (uint *)(&DAT_004692b5 + uVar4 * 4));
        param_2 = (LPRECT)FUN_0041d740(&local_54,-1,-1);
      }
      if ((param_3 & 0xc) != 0) {
        if (DAT_004692d6 == '\0') {
          _DAT_004692c6 = DAT_00476c04;
          DAT_004692d6 = '\x01';
          _DAT_004692ca = DAT_00476c0c;
          _DAT_004692ce = DAT_00476c08;
          _DAT_004692d2 = DAT_00476bf4;
        }
        if (DAT_004692e7 == '\0') {
          _DAT_004692d7 = DAT_00476bf4;
          DAT_004692e7 = '\x01';
          _DAT_004692db = DAT_00476bf4;
          _DAT_004692df = DAT_00476c0c;
          _DAT_004692e3 = DAT_00476c0c;
        }
        if ((param_3 & 2) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 2;
        }
        uVar4 = uVar4 | (param_4 & 0x1000) != 0;
        FUN_00426038(param_1,&local_54,param_4,(uint *)(&DAT_004692c6 + uVar4 * 4),
                     (uint *)(&DAT_004692d7 + uVar4 * 4));
        param_2 = (LPRECT)FUN_0041d740(&local_54,-1,-1);
      }
      if ((param_4 & 0x800) != 0) {
        local_30 = 0x38;
        FUN_00431320(local_1c,&DAT_00476bf0,'\x01');
        local_24 = local_24 + 2;
        local_30 = 0x44;
        FUN_00416b78(param_1,local_1c);
        PatBlt((HDC)*param_1,local_54,local_50,local_4c - local_54,local_48 - local_50,0xf00021);
        FUN_00416ca4(param_1);
        local_24 = local_24 + -2;
        param_2 = (LPRECT)FUN_00431428(local_1c,2);
      }
      uVar3 = CONCAT31((int3)((uint)param_2 >> 8),1);
      *in_FS_OFFSET = local_40;
    }
    else {
      if ((param_3 & 3) != 0) {
        FUN_00426038(param_1,&local_54,param_4,&DAT_00476bf4,&DAT_00476bf4);
        param_2 = (LPRECT)FUN_0041d740(&local_54,-1,-1);
      }
      if ((param_4 & 0x800) != 0) {
        local_30 = 0x20;
        FUN_00431320(local_14,&DAT_00476bf0,'\x01');
        local_24 = local_24 + 2;
        local_30 = 0x2c;
        FUN_00416b78(param_1,local_14);
        PatBlt((HDC)*param_1,local_54,local_50,local_4c - local_54,local_48 - local_50,0xf00021);
        FUN_00416ca4(param_1);
        local_24 = local_24 + -2;
        param_2 = (LPRECT)FUN_00431428(local_14,2);
      }
      uVar3 = CONCAT31((int3)((uint)param_2 >> 8),1);
      *in_FS_OFFSET = local_40;
    }
  }
  else {
    if ((param_3 & 3) != 0) {
      FUN_00426038(param_1,&local_54,param_4,(uint *)&DAT_00476bcc,(uint *)&DAT_00476bcc);
      param_2 = (LPRECT)FUN_0041d740(&local_54,-1,-1);
    }
    if ((param_4 & 0x800) != 0) {
      local_30 = 8;
      FUN_00431320(local_c,(uint *)&DAT_00476bc8,'\x01');
      local_24 = local_24 + 2;
      local_30 = 0x14;
      FUN_00416b78(param_1,local_c);
      PatBlt((HDC)*param_1,local_54,local_50,local_4c - local_54,local_48 - local_50,0xf00021);
      FUN_00416ca4(param_1);
      local_24 = local_24 + -2;
      param_2 = (LPRECT)FUN_00431428(local_c,2);
    }
    uVar3 = CONCAT31((int3)((uint)param_2 >> 8),1);
    *in_FS_OFFSET = local_40;
  }
  return uVar3;
}

