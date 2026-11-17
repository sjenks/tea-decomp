// name: FUN_0040bac4
// address: 0x40bac4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0040bac4(int *param_1,int param_2)

{
  short sVar1;
  char *pcVar2;
  bool bVar3;
  ushort uVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined3 extraout_var;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *in_FS_OFFSET;
  byte bVar12;
  int iVar13;
  LPFILETIME p_Var14;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  short local_64;
  byte local_62;
  char local_61;
  int local_60;
  byte local_5c [3];
  char local_59;
  undefined1 *local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int *local_40;
  int local_3c;
  int *local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  bVar12 = 0;
  FUN_004dce64(0x4ebef0);
  param_1[0x801] = 0;
  param_1[0x802] = 0;
  param_1[0x803] = 0;
  piVar10 = param_1;
  uVar5 = (**(code **)(*param_1 + 8))();
  if (param_2 == 0) {
    *in_FS_OFFSET = local_38;
    return local_38;
  }
  puVar6 = (uint *)(**(code **)(*param_1 + 0x18))(uVar5,*param_1,piVar10,param_1);
  local_40 = FUN_004deb10((LPCSTR)puVar6,&DAT_004eb416);
  if (local_40 == (int *)0x0) goto LAB_0040bbe8;
  p_Var14 = (LPFILETIME)(param_1 + 0x802);
  iVar13 = 1;
  local_28 = 8;
  FUN_004cf628((int)local_14,puVar6);
  local_1c = local_1c + 1;
  bVar3 = FUN_004378c0((int)local_14,iVar13,p_Var14);
  uVar7 = (uint)(CONCAT31(extraout_var,bVar3) == 0);
  local_1c = local_1c + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar10 = (int *)(local_c + -0xc);
      if (piVar10 == &DAT_00513d58) {
        iVar13 = 1;
      }
      else if (piVar10 == &DAT_00513d58) {
        iVar13 = 1;
      }
      else {
        *piVar10 = *piVar10 + -1;
        iVar13 = *piVar10 + 1;
      }
      if (iVar13 != 0) goto LAB_0040bbe3;
    }
    local_4c = local_c + -0xc;
    local_50 = local_c + -0xc;
    FUN_004cc0bc();
    local_54 = 0;
    local_58 = local_14;
    local_c = 0;
  }
LAB_0040bbe3:
  if (uVar7 == 0) {
    uVar7 = FUN_004ded48((char *)local_5c,1,4,local_40);
    if ((uVar7 != 4) ||
       ((uVar7 = FUN_004dcac0(&DAT_004ecb00,local_5c,4), uVar7 != 0 &&
        (uVar7 = FUN_004dcac0(&DAT_004ecb04,local_5c,4), uVar7 != 0)))) {
      piVar10 = (int *)FUN_004de7cc(local_40);
      *in_FS_OFFSET = local_38;
      return piVar10;
    }
    param_1[0x8ff] = local_59 + -0x30;
    uVar7 = FUN_004ded48((char *)(param_1 + 0x903),2,1,local_40);
    if (uVar7 != 1) {
      FUN_004de7cc(local_40);
      *in_FS_OFFSET = local_38;
      return local_38;
    }
    uVar7 = 1000;
    if (param_1[0x8ff] == 0) {
      uVar7 = 0x50;
      piVar10 = param_1 + 0x9ce;
      for (uVar4 = 0; uVar4 < *(ushort *)(param_1 + 0x903); uVar4 = uVar4 + 1) {
        *piVar10 = -1;
        piVar10[0x65] = -1;
        piVar10[0xca] = 0;
        piVar10 = piVar10 + 1;
      }
      FUN_004dc844(param_1 + 0x900,0,0xc);
    }
    else {
      uVar8 = FUN_004ded48((char *)(param_1 + 0x900),4,3,local_40);
      if ((((uVar8 != 3) ||
           (uVar8 = FUN_004ded48((char *)(param_1 + 0x9ce),4,(uint)*(ushort *)(param_1 + 0x903),
                                 local_40), uVar8 != *(ushort *)(param_1 + 0x903))) ||
          (uVar8 = FUN_004ded48((char *)(param_1 + 0xa33),4,(uint)*(ushort *)(param_1 + 0x903),
                                local_40), uVar8 != *(ushort *)(param_1 + 0x903))) ||
         (uVar8 = FUN_004ded48((char *)(param_1 + 0xa98),4,(uint)*(ushort *)(param_1 + 0x903),
                               local_40), uVar8 != *(ushort *)(param_1 + 0x903))) {
        piVar10 = (int *)FUN_004de7cc(local_40);
        *in_FS_OFFSET = local_38;
        return piVar10;
      }
    }
    uVar8 = FUN_004ded48((char *)(param_1 + 0x904),4,(uint)*(ushort *)(param_1 + 0x903),local_40);
    if (((uVar8 != *(ushort *)(param_1 + 0x903)) ||
        (uVar8 = FUN_004ded48((char *)(param_1 + 0x969),4,(uint)*(ushort *)(param_1 + 0x903),
                              local_40), uVar8 != *(ushort *)(param_1 + 0x903))) ||
       (uVar8 = FUN_004ded48((char *)(param_1 + 0x805),1,uVar7,local_40), uVar7 != uVar8)) {
      FUN_004de7cc(local_40);
      *in_FS_OFFSET = local_38;
      return local_38;
    }
    uVar7 = FUN_004ded48((char *)(param_1 + 0xafd),2,1,local_40);
    if ((uVar7 != 1) ||
       (uVar7 = FUN_004ded48((char *)((int)param_1 + 0x2bf6),2,1,local_40), uVar7 != 1)) {
      FUN_004de7cc(local_40);
      *in_FS_OFFSET = local_38;
      return local_38;
    }
    sVar1 = (short)param_1[0xafd];
    if ((((sVar1 < 0) || (0xfd < sVar1)) || (*(short *)((int)param_1 + 0x2bf6) < 1)) ||
       ((0xfd < *(short *)((int)param_1 + 0x2bf6) || (*(short *)((int)param_1 + 0x2bf6) < sVar1))))
    {
      piVar10 = (int *)FUN_004de7cc(local_40);
      *in_FS_OFFSET = local_38;
      return piVar10;
    }
    piVar10 = param_1 + 1;
    local_3c = 0;
    piVar11 = param_1 + 0xafe;
    do {
      *(undefined1 *)piVar11 = 0x21;
      *piVar10 = 0;
      piVar11 = (int *)((int)piVar11 + 1);
      piVar10[1] = 0xff;
      local_3c = local_3c + 1;
      piVar10 = piVar10 + 2;
    } while (local_3c < 0x100);
    piVar10 = param_1 + local_3c * 2 + 1;
    for (; local_3c < 0x300; local_3c = local_3c + 1) {
      *piVar10 = -1;
      piVar10[1] = -1;
      piVar10 = piVar10 + 2;
    }
    local_60 = 0x101;
    piVar10 = param_1 + 0xb3e;
    local_3c = 0;
    puVar6 = (uint *)(param_1 + 1);
    do {
      uVar7 = FUN_004ded48(&local_61,1,1,local_40);
      if (((uVar7 != 1) || (uVar7 = FUN_004ded48((char *)&local_62,1,1,local_40), uVar7 != 1)) ||
         ((uVar7 = FUN_004ded48((char *)&local_64,2,1,local_40), uVar7 != 1 ||
          (uVar7 = FUN_004ded48((char *)&local_68,4,1,local_40), uVar7 != 1)))) {
        FUN_004de7cc(local_40);
        *in_FS_OFFSET = local_38;
        return local_38;
      }
      if (local_62 != 0) {
        iVar13 = 0x100;
        local_6c = (uint)local_62;
        while (1 < (int)local_6c) {
          if (param_1[iVar13 * 2 + 1] < 0) {
            param_1[iVar13 * 2 + 1] = local_60;
            local_60 = local_60 + 1;
          }
          if (param_1[iVar13 * 2 + 2] < 0) {
            param_1[iVar13 * 2 + 2] = local_60;
            local_60 = local_60 + 1;
          }
          iVar13 = param_1[iVar13 * 2 + (local_68 >> ((byte)(local_6c - 1) & 0x1f) & 1) + 1];
          local_6c = local_6c - 1;
        }
        param_1[iVar13 * 2 + (local_68 & 1) + 1] = local_3c;
        *puVar6 = (uint)local_62;
      }
      if (-1 < local_64) {
        puVar6[1] = (int)local_64;
        *(char *)((int)param_1 + local_64 + 0x2bf8) = local_61;
      }
      *(char *)piVar10 = local_61;
      local_3c = local_3c + 1;
      piVar10 = (int *)((int)piVar10 + 1);
      puVar6 = puVar6 + 2;
    } while (local_3c < 0x100);
    piVar10 = param_1 + 0x601;
    local_70 = 0;
    do {
      iVar9 = 0;
      local_74 = local_70;
      for (iVar13 = 0x100; (iVar9 < 8 && (0xff < iVar13)); iVar13 = param_1[iVar13 * 2 + uVar7 + 1])
      {
        uVar7 = local_74 & 1;
        iVar9 = iVar9 + 1;
        local_74 = (int)local_74 >> 1;
      }
      *piVar10 = iVar13;
      piVar10[0x100] = param_1[iVar13 * 2 + 1];
      local_70 = local_70 + 1;
      piVar10 = piVar10 + 1;
    } while ((int)local_70 < 0x100);
    uVar7 = FUN_004ded48((char *)(param_1 + 0xb7e),2,1,local_40);
    if (uVar7 != 1) {
      FUN_004de7cc(local_40);
      *in_FS_OFFSET = local_38;
      return local_38;
    }
    iVar13 = FUN_004cc180();
    param_1[0xb7f] = iVar13;
    if (iVar13 == 0) {
      piVar10 = (int *)FUN_004de7cc(local_40);
      *in_FS_OFFSET = local_38;
      return piVar10;
    }
    for (iVar13 = 0; iVar13 < (int)(uint)*(ushort *)(param_1 + 0xb7e); iVar13 = iVar13 + 1) {
      uVar5 = FUN_004cc180();
      *(undefined4 *)(param_1[0xb7f] + iVar13 * 4) = uVar5;
    }
    iVar13 = 0;
    while( true ) {
      if ((int)(uint)*(ushort *)(param_1 + 0xb7e) <= iVar13) {
        piVar10 = (int *)FUN_004de7cc(local_40);
        param_1[0x801] = 1;
        *in_FS_OFFSET = local_38;
        return piVar10;
      }
      pcVar2 = *(char **)(param_1[0xb7f] + iVar13 * 4);
      if ((pcVar2 == (char *)0x0) ||
         (uVar7 = FUN_004ded48(pcVar2,1,(int)(short)param_1[0xafd],local_40),
         uVar7 != (int)(short)param_1[0xafd])) break;
      iVar13 = iVar13 + 1;
    }
    piVar10 = (int *)FUN_004de7cc(local_40);
    *in_FS_OFFSET = local_38;
    return piVar10;
  }
LAB_0040bbe8:
  piVar10 = (int *)s____DICTIONARY_FILE_NOT_FOUND____004eb419;
  piVar11 = param_1 + 0x805;
  for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
    *piVar11 = *piVar10;
    piVar10 = piVar10 + (uint)bVar12 * -2 + 1;
    piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
  }
  *in_FS_OFFSET = local_38;
  return param_1 + 0x805;
}

