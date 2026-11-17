// name: FUN_0049fa74
// address: 0x49fa74
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0049fa74(undefined4 *param_1,LPRECT param_2,uint param_3,uint param_4)

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
  FUN_004dce64(0x509a04);
  if (DAT_0050994c != 0) {
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
    DAT_0050994c = 0;
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
        if (DAT_00509960 == '\0') {
          _DAT_00509950 = DAT_0051b1fc;
          DAT_00509960 = '\x01';
          _DAT_00509954 = DAT_0051b1f4;
          _DAT_00509958 = DAT_0051b1e4;
          _DAT_0050995c = DAT_0051b1f8;
        }
        if (DAT_00509971 == '\0') {
          _DAT_00509961 = DAT_0051b1f8;
          DAT_00509971 = '\x01';
          _DAT_00509965 = DAT_0051b1f8;
          _DAT_00509969 = DAT_0051b1f4;
          _DAT_0050996d = DAT_0051b1f4;
        }
        if ((param_3 & 2) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 2;
        }
        uVar4 = uVar4 | (param_4 & 0x1000) != 0;
        FUN_0049fec8(param_1,&local_54,param_4,(uint *)(&DAT_00509950 + uVar4 * 4),
                     (uint *)(&DAT_00509961 + uVar4 * 4));
        param_2 = (LPRECT)FUN_00494470(&local_54,-1,-1);
      }
      if ((param_3 & 0xc) != 0) {
        if (DAT_00509982 == '\0') {
          _DAT_00509972 = DAT_0051b1f4;
          DAT_00509982 = '\x01';
          _DAT_00509976 = DAT_0051b1fc;
          _DAT_0050997a = DAT_0051b1f8;
          _DAT_0050997e = DAT_0051b1e4;
        }
        if (DAT_00509993 == '\0') {
          _DAT_00509983 = DAT_0051b1e4;
          DAT_00509993 = '\x01';
          _DAT_00509987 = DAT_0051b1e4;
          _DAT_0050998b = DAT_0051b1fc;
          _DAT_0050998f = DAT_0051b1fc;
        }
        if ((param_3 & 2) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 2;
        }
        uVar4 = uVar4 | (param_4 & 0x1000) != 0;
        FUN_0049fec8(param_1,&local_54,param_4,(uint *)(&DAT_00509972 + uVar4 * 4),
                     (uint *)(&DAT_00509983 + uVar4 * 4));
        param_2 = (LPRECT)FUN_00494470(&local_54,-1,-1);
      }
      if ((param_4 & 0x800) != 0) {
        local_30 = 0x38;
        FUN_004ab84c(local_1c,&DAT_0051b1e0,'\x01');
        local_24 = local_24 + 2;
        local_30 = 0x44;
        FUN_0048d938(param_1,local_1c);
        PatBlt((HDC)*param_1,local_54,local_50,local_4c - local_54,local_48 - local_50,0xf00021);
        FUN_0048da64(param_1);
        local_24 = local_24 + -2;
        param_2 = (LPRECT)FUN_004ab9b4(local_1c,2);
      }
      uVar3 = CONCAT31((int3)((uint)param_2 >> 8),1);
      *in_FS_OFFSET = local_40;
    }
    else {
      if ((param_3 & 3) != 0) {
        FUN_0049fec8(param_1,&local_54,param_4,&DAT_0051b1e4,&DAT_0051b1e4);
        param_2 = (LPRECT)FUN_00494470(&local_54,-1,-1);
      }
      if ((param_4 & 0x800) != 0) {
        local_30 = 0x20;
        FUN_004ab84c(local_14,&DAT_0051b1e0,'\x01');
        local_24 = local_24 + 2;
        local_30 = 0x2c;
        FUN_0048d938(param_1,local_14);
        PatBlt((HDC)*param_1,local_54,local_50,local_4c - local_54,local_48 - local_50,0xf00021);
        FUN_0048da64(param_1);
        local_24 = local_24 + -2;
        param_2 = (LPRECT)FUN_004ab9b4(local_14,2);
      }
      uVar3 = CONCAT31((int3)((uint)param_2 >> 8),1);
      *in_FS_OFFSET = local_40;
    }
  }
  else {
    if ((param_3 & 3) != 0) {
      FUN_0049fec8(param_1,&local_54,param_4,(uint *)&DAT_0051b1bc,(uint *)&DAT_0051b1bc);
      param_2 = (LPRECT)FUN_00494470(&local_54,-1,-1);
    }
    if ((param_4 & 0x800) != 0) {
      local_30 = 8;
      FUN_004ab84c(local_c,(uint *)&DAT_0051b1b8,'\x01');
      local_24 = local_24 + 2;
      local_30 = 0x14;
      FUN_0048d938(param_1,local_c);
      PatBlt((HDC)*param_1,local_54,local_50,local_4c - local_54,local_48 - local_50,0xf00021);
      FUN_0048da64(param_1);
      local_24 = local_24 + -2;
      param_2 = (LPRECT)FUN_004ab9b4(local_c,2);
    }
    uVar3 = CONCAT31((int3)((uint)param_2 >> 8),1);
    *in_FS_OFFSET = local_40;
  }
  return uVar3;
}

