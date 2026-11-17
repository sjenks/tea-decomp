// name: FUN_00430d78
// address: 0x430d78
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00430d78(undefined4 *param_1,LPRECT param_2,uint param_3,uint param_4)

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
  FUN_00467ba8(0x47d134);
  if (DAT_0047d07c != 0) {
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
    DAT_0047d07c = 0;
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
        if (DAT_0047d090 == '\0') {
          _DAT_0047d080 = DAT_0048c6b4;
          DAT_0047d090 = '\x01';
          _DAT_0047d084 = DAT_0048c6ac;
          _DAT_0047d088 = DAT_0048c69c;
          _DAT_0047d08c = DAT_0048c6b0;
        }
        if (DAT_0047d0a1 == '\0') {
          _DAT_0047d091 = DAT_0048c6b0;
          DAT_0047d0a1 = '\x01';
          _DAT_0047d095 = DAT_0048c6b0;
          _DAT_0047d099 = DAT_0048c6ac;
          _DAT_0047d09d = DAT_0048c6ac;
        }
        if ((param_3 & 2) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 2;
        }
        uVar4 = uVar4 | (param_4 & 0x1000) != 0;
        FUN_004311cc(param_1,&local_54,param_4,(uint *)(&DAT_0047d080 + uVar4 * 4),
                     (uint *)(&DAT_0047d091 + uVar4 * 4));
        param_2 = (LPRECT)FUN_004288b4(&local_54,-1,-1);
      }
      if ((param_3 & 0xc) != 0) {
        if (DAT_0047d0b2 == '\0') {
          _DAT_0047d0a2 = DAT_0048c6ac;
          DAT_0047d0b2 = '\x01';
          _DAT_0047d0a6 = DAT_0048c6b4;
          _DAT_0047d0aa = DAT_0048c6b0;
          _DAT_0047d0ae = DAT_0048c69c;
        }
        if (DAT_0047d0c3 == '\0') {
          _DAT_0047d0b3 = DAT_0048c69c;
          DAT_0047d0c3 = '\x01';
          _DAT_0047d0b7 = DAT_0048c69c;
          _DAT_0047d0bb = DAT_0048c6b4;
          _DAT_0047d0bf = DAT_0048c6b4;
        }
        if ((param_3 & 2) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 2;
        }
        uVar4 = uVar4 | (param_4 & 0x1000) != 0;
        FUN_004311cc(param_1,&local_54,param_4,(uint *)(&DAT_0047d0a2 + uVar4 * 4),
                     (uint *)(&DAT_0047d0b3 + uVar4 * 4));
        param_2 = (LPRECT)FUN_004288b4(&local_54,-1,-1);
      }
      if ((param_4 & 0x800) != 0) {
        local_30 = 0x38;
        FUN_0043c4b4(local_1c,&DAT_0048c698,'\x01');
        local_24 = local_24 + 2;
        local_30 = 0x44;
        FUN_00421cec(param_1,local_1c);
        PatBlt((HDC)*param_1,local_54,local_50,local_4c - local_54,local_48 - local_50,0xf00021);
        FUN_00421e18(param_1);
        local_24 = local_24 + -2;
        param_2 = (LPRECT)FUN_0043c5bc(local_1c,2);
      }
      uVar3 = CONCAT31((int3)((uint)param_2 >> 8),1);
      *in_FS_OFFSET = local_40;
    }
    else {
      if ((param_3 & 3) != 0) {
        FUN_004311cc(param_1,&local_54,param_4,&DAT_0048c69c,&DAT_0048c69c);
        param_2 = (LPRECT)FUN_004288b4(&local_54,-1,-1);
      }
      if ((param_4 & 0x800) != 0) {
        local_30 = 0x20;
        FUN_0043c4b4(local_14,&DAT_0048c698,'\x01');
        local_24 = local_24 + 2;
        local_30 = 0x2c;
        FUN_00421cec(param_1,local_14);
        PatBlt((HDC)*param_1,local_54,local_50,local_4c - local_54,local_48 - local_50,0xf00021);
        FUN_00421e18(param_1);
        local_24 = local_24 + -2;
        param_2 = (LPRECT)FUN_0043c5bc(local_14,2);
      }
      uVar3 = CONCAT31((int3)((uint)param_2 >> 8),1);
      *in_FS_OFFSET = local_40;
    }
  }
  else {
    if ((param_3 & 3) != 0) {
      FUN_004311cc(param_1,&local_54,param_4,(uint *)&DAT_0048c674,(uint *)&DAT_0048c674);
      param_2 = (LPRECT)FUN_004288b4(&local_54,-1,-1);
    }
    if ((param_4 & 0x800) != 0) {
      local_30 = 8;
      FUN_0043c4b4(local_c,(uint *)&DAT_0048c670,'\x01');
      local_24 = local_24 + 2;
      local_30 = 0x14;
      FUN_00421cec(param_1,local_c);
      PatBlt((HDC)*param_1,local_54,local_50,local_4c - local_54,local_48 - local_50,0xf00021);
      FUN_00421e18(param_1);
      local_24 = local_24 + -2;
      param_2 = (LPRECT)FUN_0043c5bc(local_c,2);
    }
    uVar3 = CONCAT31((int3)((uint)param_2 >> 8),1);
    *in_FS_OFFSET = local_40;
  }
  return uVar3;
}

