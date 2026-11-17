// name: FUN_00456480
// address: 0x456480
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00456480(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined4 uVar3;
  undefined3 extraout_var_00;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  int local_48;
  int local_44;
  uint local_40;
  undefined4 local_3c;
  undefined2 local_2c;
  int *local_18;
  int local_14;
  int *local_10;
  undefined4 *local_c;
  int local_8;
  
  FUN_004dce64(0x4f8aa4);
  iVar2 = FUN_00466b28(*(int *)(param_1 + 0x38));
  local_40 = (uint)(*(int *)(iVar2 + 0x24) == 2);
  iVar2 = FUN_00466b18(*(int *)(param_1 + 0x38));
  do {
    FUN_00411748(*(int *)(param_1 + 0x6c),3);
    *(undefined4 *)(param_1 + 0x6c) = 0;
    local_8 = *(int *)(param_1 + 0x70);
    if (local_8 != 0) {
      local_2c = 0x14;
      FUN_0041066c(local_8,3);
      local_2c = 8;
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    FUN_004108b8(*(int *)(param_1 + 0x74),3);
    *(undefined4 *)(param_1 + 0x74) = 0;
    if (*(int *)(param_1 + 0x68) == -1) {
      if (local_40 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0x6d0);
      }
      *(undefined4 *)(param_1 + 0x68) = uVar3;
    }
    else {
      if (local_40 != 0) {
LAB_0045654b:
        *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
        *in_FS_OFFSET = local_3c;
        return;
      }
      iVar4 = *(int *)(param_1 + 0x6b8) - *(int *)(param_1 + 0x6b4);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 3;
      }
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
      if ((uint)(iVar4 >> 2) <= *(uint *)(param_1 + 0x68)) goto LAB_0045654b;
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0x68) * 4 + *(int *)(param_1 + 0x6b4));
    if (*(int *)(param_1 + 0x690) == 0) {
      local_c = (undefined4 *)FUN_004cc0f0();
      if (local_c != (undefined4 *)0x0) {
        local_2c = 0x2c;
        FUN_00411680(local_c,iVar2,*(int *)(param_1 + 0x68));
        local_2c = 0x20;
      }
      *(undefined4 **)(param_1 + 0x6c) = local_c;
      FUN_0045e7c8(iVar4,param_1,*(int *)(param_1 + 0x68));
      while (uVar3 = FUN_0045e810(iVar4), (char)uVar3 != '\0') {
        bVar1 = FUN_00411790(*(int *)(param_1 + 0x6c),*(int *)(iVar4 + 0xc));
        if (CONCAT31(extraout_var,bVar1) != 0) {
          FUN_00479484(iVar4 + 0x28,*(int *)(iVar4 + 0xc));
          *in_FS_OFFSET = local_3c;
          return;
        }
        FUN_0045e800(iVar4);
      }
    }
    else {
      bVar1 = FUN_00408dfc(iVar2,*(int *)(param_1 + 0x68));
      if (CONCAT31(extraout_var_00,bVar1) != 0) {
        local_10 = (int *)FUN_004cc0f0();
        if (local_10 != (int *)0x0) {
          local_2c = 0x44;
          FUN_0040e5e0(local_10,iVar2,*(int *)(param_1 + 0x68),iVar4 + 0x28,
                       (undefined4 *)(iVar4 + 0x20));
          local_2c = 0x38;
        }
        *(int **)(param_1 + 0x70) = local_10;
        if (*(int *)(*(int *)(param_1 + 0x70) + 4) == 0) {
          local_14 = *(int *)(param_1 + 0x70);
          if (local_14 != 0) {
            local_2c = 0x5c;
            FUN_0041066c(local_14,3);
            local_2c = 0x50;
          }
          *(undefined4 *)(param_1 + 0x70) = 0;
          local_18 = (int *)FUN_004cc0f0();
          if (local_18 != (int *)0x0) {
            local_2c = 0x74;
            FUN_00410788(local_18,iVar2,*(int *)(param_1 + 0x68),iVar4 + 0x28,
                         (undefined4 *)(iVar4 + 0x20));
            local_2c = 0x68;
          }
          *(int **)(param_1 + 0x74) = local_18;
          FUN_00410da0(*(int **)(param_1 + 0x74),&local_44,&local_48);
        }
        else {
          FUN_00410750(*(int *)(param_1 + 0x70),&local_44,&local_48);
        }
        if (0 < local_48) {
          *in_FS_OFFSET = local_3c;
          return;
        }
      }
    }
  } while( true );
}

