// name: FUN_004088f4
// address: 0x4088f4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00408949) */
/* WARNING: Removing unreachable block (ram,0x00408ca8) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff44 : 0x00408cb6 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __cdecl
FUN_004088f4(int *param_1,LPCSTR param_2,LPCSTR param_3,int param_4,int param_5,LPCSTR param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  int *piVar6;
  undefined4 uVar7;
  undefined4 local_138 [4];
  undefined4 local_128 [4];
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int *local_ec;
  int *local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int *local_cc;
  int *local_c8;
  char local_c1 [9];
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int *local_a4;
  int *local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int *local_84;
  int *local_80;
  char local_79 [9];
  undefined4 local_70;
  undefined2 local_60;
  int local_54;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined4 local_34;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined4 local_14;
  
  FUN_00455f04(0x4629c8);
  local_60 = 8;
  (**(code **)(*param_1 + 4))();
  local_28 = 0;
  local_24 = 0;
  local_14 = 0;
  local_79[5] = '@';
  local_79[6] = '\0';
  local_79[7] = '\0';
  local_79[8] = '\0';
  local_79[1] = '\x01';
  local_79[2] = '\0';
  local_79[3] = '\0';
  local_79[4] = '\0';
  local_2c = 0x40;
  local_54 = local_54 + 1;
  local_60 = 0x2c;
  piVar6 = param_1;
  iVar2 = FUN_00405a5c(param_1,param_2,(int)&local_2c,local_79);
  if (iVar2 < 0) {
    if (iVar2 == -3) {
      iVar2 = 1;
    }
    else {
      iVar2 = 2;
    }
    local_54 = local_54 + -1;
    FUN_00406a90(&local_2c,local_28,local_24);
    local_118 = local_28;
    FUN_0044b2cc();
    *in_FS_OFFSET = local_70;
    return iVar2;
  }
  if (local_79[0] == '\0') {
    uVar7 = 0x4089db;
    (**(code **)(*param_1 + 4))();
    iVar1 = local_24;
    iVar2 = local_28;
    local_60 = 0x44;
    local_80 = param_1;
    if (local_24 != local_28) {
      local_88 = local_24 - local_28;
      local_84 = param_1;
      if (local_88 < 0) {
        local_88 = local_88 + 0xf;
      }
      local_88 = local_88 >> 4;
      local_94 = FUN_0044b300();
      local_90 = local_88;
      local_9c = local_94;
      local_98 = local_88;
      local_a0 = local_84;
      local_8c = local_94;
      if (local_94 == 0) {
        iVar3 = iVar1 - iVar2;
        local_a4 = local_84;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 0xf;
        }
        if (iVar3 >> 4 < 0xf) {
          FUN_0040a094(iVar2,iVar1,local_84);
        }
        else {
          iVar3 = iVar1 - iVar2;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 0xf;
          }
          iVar4 = iVar3 >> 5;
          if (iVar4 < 0) {
            iVar4 = iVar4 + (uint)((iVar3 >> 4 & 1U) != 0);
          }
          local_a8 = iVar4 * 0x10 + iVar2;
          FUN_0040a884(iVar2,local_a8,local_84);
          FUN_0040a884(local_a8,iVar1,local_a4);
          iVar3 = iVar1 - local_a8;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 0xf;
          }
          iVar4 = local_a8 - iVar2;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 0xf;
          }
          FUN_0040a4c0(iVar2,local_a8,iVar1,iVar4 >> 4,iVar3 >> 4,local_a4);
        }
      }
      else {
        iVar3 = iVar1 - iVar2;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 0xf;
        }
        local_b0 = iVar3 >> 4;
        if (local_88 < iVar3 >> 4) {
          piVar5 = &local_98;
        }
        else {
          piVar5 = &local_b0;
        }
        local_ac = *piVar5;
        local_b4 = local_94;
        FUN_004092d4(local_128,iVar2,local_ac * 0x10 + iVar2,piVar6,uVar7,local_94);
        FUN_00409424(iVar2,iVar1,local_9c,local_98,0,local_a0);
        FUN_00406a78(local_9c,local_ac * 0x10 + local_9c);
        local_b8 = local_9c;
        FUN_0044b2cc();
      }
    }
    local_60 = 0x2c;
  }
  if (param_4 == 0) {
    (**(code **)(*param_1 + 4))();
    iVar2 = FUN_00405f48(param_1,(int)&local_2c,(int)&local_2c,1,param_5,param_6);
    if (iVar2 != 0) {
      local_54 = local_54 + -1;
      FUN_00406a90(&local_2c,local_28,local_24);
      local_104 = local_28;
      FUN_0044b2cc();
      *in_FS_OFFSET = local_70;
      return iVar2;
    }
  }
  else {
    (**(code **)(*param_1 + 4))();
    local_48 = 0;
    local_44 = 0;
    local_34 = 0;
    local_c1[5] = '@';
    local_c1[6] = '\0';
    local_c1[7] = '\0';
    local_c1[8] = '\0';
    local_c1[1] = '\x01';
    local_c1[2] = '\0';
    local_c1[3] = '\0';
    local_c1[4] = '\0';
    local_4c = 0x40;
    local_54 = local_54 + 1;
    local_60 = 0x74;
    piVar6 = param_1;
    iVar2 = FUN_00405a5c(param_1,param_3,(int)&local_4c,local_c1);
    if (iVar2 < 0) {
      if (iVar2 == -3) {
        iVar2 = 1;
      }
      else {
        iVar2 = 3;
      }
      local_54 = local_54 + -1;
      FUN_00406a90(&local_4c,local_48,local_44);
      local_110 = local_48;
      FUN_0044b2cc();
      local_54 = local_54 + -1;
      FUN_00406a90(&local_2c,local_28,local_24);
      local_114 = local_28;
      FUN_0044b2cc();
      *in_FS_OFFSET = local_70;
      return iVar2;
    }
    if (local_c1[0] == '\0') {
      uVar7 = 0x408d73;
      (**(code **)(*param_1 + 4))();
      iVar1 = local_44;
      iVar2 = local_48;
      local_60 = 0x98;
      local_c8 = param_1;
      if (local_44 != local_48) {
        local_d0 = local_44 - local_48;
        local_cc = param_1;
        if (local_d0 < 0) {
          local_d0 = local_d0 + 0xf;
        }
        local_d0 = local_d0 >> 4;
        local_dc = FUN_0044b300();
        local_d8 = local_d0;
        local_e4 = local_dc;
        local_e0 = local_d0;
        local_e8 = local_cc;
        local_d4 = local_dc;
        if (local_dc == 0) {
          iVar3 = iVar1 - iVar2;
          local_ec = local_cc;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 0xf;
          }
          if (iVar3 >> 4 < 0xf) {
            FUN_0040a094(iVar2,iVar1,local_cc);
          }
          else {
            iVar3 = iVar1 - iVar2;
            if (iVar3 < 0) {
              iVar3 = iVar3 + 0xf;
            }
            iVar4 = iVar3 >> 5;
            if (iVar4 < 0) {
              iVar4 = iVar4 + (uint)((iVar3 >> 4 & 1U) != 0);
            }
            local_f0 = iVar4 * 0x10 + iVar2;
            FUN_0040a884(iVar2,local_f0,local_cc);
            FUN_0040a884(local_f0,iVar1,local_ec);
            iVar3 = iVar1 - local_f0;
            if (iVar3 < 0) {
              iVar3 = iVar3 + 0xf;
            }
            iVar4 = local_f0 - iVar2;
            if (iVar4 < 0) {
              iVar4 = iVar4 + 0xf;
            }
            FUN_0040a4c0(iVar2,local_f0,iVar1,iVar4 >> 4,iVar3 >> 4,local_ec);
          }
        }
        else {
          iVar3 = iVar1 - iVar2;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 0xf;
          }
          local_f8 = iVar3 >> 4;
          if (local_d0 < iVar3 >> 4) {
            piVar5 = &local_e0;
          }
          else {
            piVar5 = &local_f8;
          }
          local_f4 = *piVar5;
          local_fc = local_dc;
          FUN_004092d4(local_138,iVar2,local_f4 * 0x10 + iVar2,piVar6,uVar7,local_dc);
          FUN_00409424(iVar2,iVar1,local_e4,local_e0,0,local_e8);
          FUN_00406a78(local_e4,local_f4 * 0x10 + local_e4);
          local_100 = local_e4;
          FUN_0044b2cc();
        }
      }
      local_60 = 0x74;
    }
    (**(code **)(*param_1 + 4))();
    iVar2 = FUN_00405f48(param_1,(int)&local_2c,(int)&local_4c,param_4,param_5,param_6);
    if (iVar2 != 0) {
      local_54 = local_54 + -1;
      FUN_00406a90(&local_4c,local_48,local_44);
      local_108 = local_48;
      FUN_0044b2cc();
      local_60 = 0x74;
      local_54 = local_54 + -1;
      FUN_00406a90(&local_2c,local_28,local_24);
      local_10c = local_28;
      FUN_0044b2cc();
      *in_FS_OFFSET = local_70;
      return iVar2;
    }
    local_54 = local_54 + -1;
    FUN_00406a90(&local_4c,local_48,local_44);
    FUN_0044b2cc();
    local_60 = 0x2c;
  }
  local_54 = local_54 + -1;
  FUN_00406a90(&local_2c,local_28,local_24);
  FUN_0044b2cc();
  *in_FS_OFFSET = local_70;
  return 0;
}

