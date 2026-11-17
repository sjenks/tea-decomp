// name: FUN_004bfaf8
// address: 0x4bfaf8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004bfaf8(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  WPARAM WVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *in_FS_OFFSET;
  char cVar13;
  uint local_48;
  int local_38;
  undefined4 local_2c;
  
  FUN_004dce64(0x50fd98);
  iVar3 = *param_1;
  uVar2 = FUN_004a78f0(iVar3);
  if (param_3 == 0) {
    FUN_004bf6d0(param_2);
    iVar3 = (**(code **)(param_1[3] + 0x24))();
    local_38 = 0;
    iVar11 = 0;
    if (0 < iVar3) {
      do {
        iVar4 = (**(code **)(param_1[3] + 0x40))();
        if (local_38 < iVar4) {
          local_38 = iVar4;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar3);
    }
    puVar5 = (uint *)FUN_004cc180();
    for (iVar3 = 0; iVar11 = (**(code **)(param_1[3] + 0x24))(), iVar3 < iVar11; iVar3 = iVar3 + 1)
    {
      (**(code **)(param_1[3] + 0x44))();
      cVar13 = '\0';
      uVar6 = (**(code **)(param_1[3] + 0x48))();
      FUN_004bf908(param_2,puVar5,uVar6,cVar13);
    }
    FUN_004bf704((int)param_2);
    if ((uVar2 & 0x808) == 0) {
      iVar3 = (**(code **)(param_1[3] + 0x6c))();
      FUN_004bf950((int)param_2,iVar3);
    }
    else {
      WVar7 = FUN_004bfd60(param_1);
      if (0 < (int)WVar7) {
        iVar3 = FUN_004cc180();
        FUN_004bfdd8(param_1,iVar3,WVar7);
        iVar11 = 0;
        if (0 < (int)WVar7) {
          do {
            FUN_004bf950((int)param_2,*(int *)(iVar3 + iVar11 * 4));
            iVar11 = iVar11 + 1;
          } while (iVar11 < (int)WVar7);
        }
        FUN_004cc0cc();
      }
    }
    FUN_004cc0cc();
  }
  else if (param_3 == 1) {
    (**(code **)(param_1[3] + 0x58))(uVar2,param_1[3],iVar3,param_1);
    uVar8 = FUN_004bf6f4((int)param_2);
    local_48 = 0xffffffff;
    for (uVar12 = 0; uVar12 < *(uint *)(*param_2 + 1); uVar12 = uVar12 + 1) {
      uVar9 = (**(code **)(param_1[3] + 0x60))();
      if (uVar12 < *(uint *)(param_2[1] + 1)) {
        (**(code **)(param_1[3] + 0x4c))();
      }
      uVar1 = local_48;
      if ((uVar2 & 0x808) == 0) {
        if ((((uVar8 == 0) || (uVar1 = uVar9, uVar12 != **(uint **)(param_2[2] + 9))) &&
            (uVar1 = local_48, local_48 != 0xffffffff)) && ((int)uVar9 <= (int)local_48)) {
          uVar1 = local_48 + 1;
        }
      }
      else {
        uVar10 = 0;
        if (uVar8 != 0) {
          do {
            if (*(uint *)(*(int *)(param_2[2] + 9) + uVar10 * 4) == uVar12) {
              FUN_004a76a8(*param_1,0x185,1,uVar9 & 0xffff);
              break;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar8);
        }
      }
      local_48 = uVar1;
    }
    if ((local_48 != 0xffffffff) && ((uVar2 & 0x808) == 0)) {
      (**(code **)(param_1[3] + 0x70))();
    }
  }
  *in_FS_OFFSET = local_2c;
  return 0xc;
}

