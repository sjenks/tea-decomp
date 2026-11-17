// name: FUN_004b3e7c
// address: 0x4b3e7c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl
FUN_004b3e7c(int param_1,uint param_2,uint param_3,uint *param_4,char *param_5,uint param_6,
            char param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *in_FS_OFFSET;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 local_288;
  int local_264;
  int local_260;
  undefined4 local_1e0 [2];
  undefined4 local_1d8 [34];
  int local_150;
  int local_14c;
  undefined4 local_cc [2];
  undefined4 local_c4 [34];
  uint local_3c [2];
  uint *local_34;
  undefined4 local_28;
  uint *local_8;
  
  FUN_004dce64(0x50d81c);
  iVar3 = (**(code **)(*(int *)(param_1 + 8) + 0x10))();
  iVar8 = iVar3 + 1;
  local_8 = (uint *)FUN_004cc180();
  (**(code **)(*(int *)(param_1 + 8) + 0x10))
            (param_1,*(int *)(param_1 + 8),iVar8,param_1,param_2,param_3,local_8,iVar3 + 1);
  if (param_7 == '\0') {
    iVar8 = 0;
  }
  else {
    iVar8 = param_8;
    if (param_8 == 0) {
      iVar8 = (**(code **)(*(int *)(param_1 + 8) + 0x2c))();
    }
  }
  if (param_7 == '\0') {
    iVar8 = 0;
    iVar3 = 0;
    if (0 < (int)param_3) {
      do {
        iVar3 = iVar8;
        if ((*(byte *)(*(int *)(param_2 + iVar8 * 4) + 0x17) & 1) != 0) break;
        iVar8 = iVar8 + 1;
        iVar3 = 0;
      } while (iVar8 < (int)param_3);
    }
  }
  else {
    iVar10 = 0;
    iVar3 = 0;
    if (0 < (int)param_3) {
      do {
        iVar3 = iVar10;
        if (*(int *)(iVar8 + 0x22) == *(int *)(param_2 + iVar10 * 4)) break;
        iVar10 = iVar10 + 1;
        iVar3 = 0;
      } while (iVar10 < (int)param_3);
    }
  }
  uVar1 = *(uint *)(*(int *)(param_2 + iVar3 * 4) + 0x14);
  uVar2 = *(uint *)(param_1 + 0x28);
  if (iVar3 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = iVar3 + 1;
  }
  uVar11 = param_2;
  uVar12 = param_3;
  uVar4 = FUN_004b5294(*(int *)(param_2 + iVar3 * 4));
  puVar5 = FUN_004b5190(*(int *)(param_2 + iVar3 * 4));
  FUN_004b1c88(local_3c,((param_6 | uVar1) & 0xfffff | uVar2) & 0xfffffd1f,local_8,(uint)puVar5,
               uVar4,uVar9,uVar11,uVar12);
  if ((param_4 == (uint *)0x0) || (puVar6 = param_4, (char)*param_4 == '\0')) {
    if (param_8 == 0) {
      puVar6 = (uint *)0x0;
    }
    else {
      puVar6 = *(uint **)(param_8 + 0x1e);
    }
  }
  if ((puVar6 != (uint *)0x0) && ((char)*puVar6 != '\0')) {
    FUN_004dcc40(local_34,puVar6,param_5);
  }
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x2b) == 0) {
    uVar13 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x2b);
  }
  else {
    uVar13 = **(undefined4 **)(*(int *)(param_1 + 0x20) + 0x2b);
  }
  if (param_7 == '\0') {
    piVar7 = FUN_004b1d34(&local_264,0,uVar13,(int)local_3c,0);
    iVar8 = (**(code **)(piVar7[3] + 0x14))();
    *(int *)(local_260 + -4) = *(int *)(local_260 + -4) + -4;
    *(int *)(local_264 + -4) = *(int *)(local_264 + -4) + -4;
    *(int *)(local_260 + -4) = *(int *)(local_260 + -4) + -0x5c;
    *(int *)(local_264 + -4) = *(int *)(local_264 + -4) + -0x5c;
    FUN_0048c668(&local_264,0);
    *(int *)(local_260 + -4) = *(int *)(local_260 + -4) + 0x5c;
    *(int *)(local_264 + -4) = *(int *)(local_264 + -4) + 0x5c;
    *(int *)(local_260 + -4) = *(int *)(local_260 + -4) + 4;
    *(int *)(local_264 + -4) = *(int *)(local_264 + -4) + 4;
    *(int *)(local_260 + -4) = *(int *)(local_260 + -4) + 0x96;
    FUN_004a52c0(local_1d8,0);
    *(int *)(local_260 + -4) = *(int *)(local_260 + -4) + -0x96;
    FUN_00489c54(local_1e0,0);
  }
  else {
    piVar7 = FUN_004b1f0c(&local_150,0,uVar13,(int)local_3c,0);
    iVar8 = (**(code **)(piVar7[3] + 0x14))();
    *(int *)(local_14c + -4) = *(int *)(local_14c + -4) + -4;
    *(int *)(local_150 + -4) = *(int *)(local_150 + -4) + -4;
    *(int *)(local_14c + -4) = *(int *)(local_14c + -4) + -0x5c;
    *(int *)(local_150 + -4) = *(int *)(local_150 + -4) + -0x5c;
    FUN_0048c668(&local_150,0);
    *(int *)(local_14c + -4) = *(int *)(local_14c + -4) + 0x5c;
    *(int *)(local_150 + -4) = *(int *)(local_150 + -4) + 0x5c;
    *(int *)(local_14c + -4) = *(int *)(local_14c + -4) + 4;
    *(int *)(local_150 + -4) = *(int *)(local_150 + -4) + 4;
    *(int *)(local_14c + -4) = *(int *)(local_14c + -4) + 0x96;
    FUN_004a52c0(local_c4,0);
    *(int *)(local_14c + -4) = *(int *)(local_14c + -4) + -0x96;
    FUN_00489c54(local_cc,0);
  }
  if (iVar8 == 1) {
    iVar8 = 0;
    if (0 < (int)param_3) {
      do {
        if (iVar8 == iVar3 + -1) {
          FUN_004b5170(*(int *)(param_2 + iVar8 * 4),0x1000000);
        }
        else {
          FUN_004b5180(*(int *)(param_2 + iVar8 * 4),0x1000000);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)param_3);
    }
    if ((local_34 == (uint *)0x0) || ((char)*local_34 == '\0')) {
      *(undefined1 *)param_4 = 0;
    }
    else {
      FUN_004dcc40(param_4,local_34,param_5);
    }
    FUN_004c2888((int)local_3c,0);
    FUN_004cc0cc();
    *in_FS_OFFSET = local_288;
  }
  else {
    uVar13 = 0;
    FUN_004c2888((int)local_3c,0);
    local_28 = uVar13;
    FUN_004cc0cc();
    *in_FS_OFFSET = local_288;
  }
  return local_28;
}

