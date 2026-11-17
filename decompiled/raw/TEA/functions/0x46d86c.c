// name: FUN_0046d86c
// address: 0x46d86c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0046db92) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff50 : 0x0046dba0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl
FUN_0046d86c(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *in_FS_OFFSET;
  undefined1 local_8c4 [1000];
  byte local_4dc [1024];
  undefined4 local_dc;
  undefined4 local_cc;
  undefined1 *local_c4;
  undefined4 local_c0;
  byte *local_bc;
  byte *local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_ac;
  byte local_a5;
  byte *local_a4;
  int local_a0;
  int local_9c;
  byte *local_98;
  byte *local_94;
  int local_90;
  undefined4 *local_8c;
  undefined4 *local_88;
  uint local_84;
  int local_80;
  int *local_7c;
  int *local_78;
  int *local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined2 local_4c;
  int local_40;
  undefined4 local_38;
  int *local_34;
  int *local_30;
  undefined4 local_20;
  undefined1 local_18 [8];
  byte *local_10;
  int local_8;
  
  FUN_004dce64(0x4fe1c4);
  FUN_0046ddd0((int)(param_1 + 0x24),param_2);
  iVar6 = param_1[0x1c];
  iVar5 = param_1[0x1b] + param_1[0x22] * 0x10;
  iVar3 = FUN_0040e20c(iVar6,param_1[0x1c],iVar5);
  local_60 = param_1[0x1c];
  iVar6 = iVar6 - iVar5;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xf;
  }
  param_1[0x1c] = param_1[0x1c] + (iVar6 >> 4) * -0x10;
  FUN_0040b4f0(param_1 + 0x1a,iVar3,local_60);
  if (param_1[0x1c] == param_1[0x20]) {
    FUN_0040e240((int)(param_1 + 0x1a),param_1[0x1c],param_3);
  }
  else {
    local_64 = param_1[0x1c];
    local_8 = local_64;
    if (local_64 != 0) {
      local_4c = 0x14;
      local_68 = 0;
      *(undefined4 *)(local_64 + 8) = 0;
      iVar6 = *(int *)(*(int *)(param_3 + 8) + -0xc);
      if (iVar6 == -1 || iVar6 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(param_3 + 8) + -4);
        local_7c = FUN_004cf7b0(local_64,uVar1,uVar1);
        local_78 = local_7c + 3;
        *(int **)(local_8 + 8) = local_78;
        local_80 = local_8;
        local_dc = *(undefined4 *)(local_8 + 8);
        local_88 = *(undefined4 **)(param_3 + 8);
        local_8c = *(undefined4 **)(local_8 + 8);
        local_84 = uVar1;
        FUN_004dc7d4(local_8c,local_88,uVar1);
      }
      else {
        local_6c = *(undefined4 *)(param_3 + 8);
        *(undefined4 *)(local_64 + 8) = local_6c;
        local_cc = *(undefined4 *)(local_64 + 8);
        local_74 = (int *)(*(int *)(local_64 + 8) + -0xc);
        local_70 = local_64;
        if (local_74 != &DAT_00513d58) {
          *local_74 = *local_74 + 1;
        }
      }
      local_4c = 8;
    }
    param_1[0x1c] = param_1[0x1c] + 0x10;
  }
  param_1[0x22] = param_1[0x22] + 1;
  FUN_0046e740(param_1,param_4,param_5);
  if (param_6 == 0) {
    FUN_0046ccac((int)param_1);
    goto LAB_0046dda8;
  }
  local_4c = 0x38;
  FUN_0041aacc((int)local_18,(int *)param_1[0x85]);
  local_40 = local_40 + 1;
  local_98 = local_4dc;
  local_4c = 0x2c;
  iVar6 = 0;
  local_9c = -1;
  local_94 = local_98;
  FUN_004a76a8(*(int *)param_1[0x85],0xb,0,0);
  local_a0 = 0;
  for (local_a4 = local_10; local_a4 <= local_10 + *(int *)(local_10 + -4); local_a4 = local_a4 + 1)
  {
    if (local_10 + *(int *)(local_10 + -4) == local_a4) {
      local_a5 = 0;
    }
    else {
      local_a5 = *local_a4;
    }
    local_4c = 0x2c;
    local_ac = *(int *)(*(int *)(*(int *)(param_7 + 0xc) + param_8 * 4) + 8 + (uint)local_a5 * 8);
    if (local_ac == 0xff) {
      if (0 < iVar6) {
        local_8c4[iVar6] = 0xff;
        *local_98 = 0;
        local_34 = (int *)0x0;
        local_30 = (int *)0x0;
        local_20 = 0;
        local_b0 = 0x100;
        local_b4 = 1;
        local_38 = 0x100;
        local_40 = local_40 + 1;
        local_4c = 0x5c;
        FUN_00479bd4(param_6,(int)&local_38);
        for (piVar7 = local_34; piVar7 < local_30; piVar7 = piVar7 + 1) {
          iVar3 = *piVar7;
          local_4c = 0x5c;
          if (((iVar3 != 0) && (iVar5 = FUN_00434aa0(iVar3), iVar5 <= iVar6)) &&
             (iVar5 = FUN_00434abc(iVar3), iVar6 <= iVar5)) {
            FUN_00434878(iVar3,iVar6);
            bVar2 = FUN_00434898(iVar3,(int)local_8c4);
            if (CONCAT31(extraout_var,bVar2) != 0) {
              FUN_004722fc((int)param_1);
              if (local_9c < 0) {
                local_9c = local_90;
              }
              break;
            }
          }
        }
        iVar6 = 0;
        local_40 = local_40 + -1;
        FUN_00410d88(&local_38,(int)local_34,(int)local_30);
        FUN_004cc0bc();
        local_4c = 0x2c;
      }
    }
    else {
      if (iVar6 == 0) {
        local_90 = local_a0;
        local_98 = local_94;
      }
      *local_98 = local_a5;
      local_98 = local_98 + 1;
      if (iVar6 < 0x65) {
        local_8c4[iVar6] = (undefined1)local_ac;
        iVar6 = iVar6 + 1;
      }
    }
    if (local_a5 != 0xd) {
      local_a0 = local_a0 + 1;
    }
  }
  FUN_004a76a8(*(int *)param_1[0x85],0xb,1,0);
  (**(code **)(*(int *)(*(int *)param_1[0x85] + 8) + 0x68))();
  if (-1 < local_9c) {
    (**(code **)(*(int *)(param_1[0x85] + 0xc) + 0x3c))();
    FUN_004a76a8(*(int *)param_1[0x85],0xb7,0,0);
  }
  local_40 = local_40 + -1;
  if (local_10 != (byte *)0x0) {
    if (*(int *)(local_10 + -0xc) != -1) {
      pbVar4 = local_10 + -0xc;
      if (pbVar4 == (byte *)&DAT_00513d58) {
        iVar6 = 1;
      }
      else if (pbVar4 == (byte *)&DAT_00513d58) {
        iVar6 = 1;
      }
      else {
        *(int *)pbVar4 = *(int *)pbVar4 + -1;
        iVar6 = *(int *)pbVar4 + 1;
      }
      if (iVar6 != 0) goto LAB_0046dd9c;
    }
    local_b8 = local_10 + -0xc;
    local_bc = local_10 + -0xc;
    FUN_004cc0bc();
    local_c0 = 0;
    local_c4 = local_18;
    local_10 = (byte *)0x0;
  }
LAB_0046dd9c:
  local_4c = 0;
LAB_0046dda8:
  SetFocus(*(HWND *)(*(int *)param_1[0x85] + 0xc));
  *in_FS_OFFSET = local_5c;
  return;
}

