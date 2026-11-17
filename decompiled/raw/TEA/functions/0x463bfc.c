// name: FUN_00463bfc
// address: 0x463bfc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x004642e8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_00463bfc(int param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  uint local_254 [15];
  undefined4 local_218;
  undefined4 local_208;
  undefined4 local_1f8;
  undefined4 local_1e8;
  undefined4 local_1d8;
  undefined4 local_1c8;
  undefined1 *local_1c0;
  undefined4 local_1bc;
  undefined *local_1b8;
  undefined *local_1b4;
  undefined1 *local_1b0;
  undefined4 local_1ac;
  int local_1a8;
  int local_1a4;
  undefined1 *local_1a0;
  undefined *local_19c;
  undefined1 *local_190;
  undefined4 local_18c;
  int local_188;
  int local_184;
  int *local_180;
  undefined1 *local_17c;
  undefined4 local_178;
  int local_174;
  int local_170;
  int *local_16c;
  undefined1 *local_158;
  undefined4 local_154;
  int local_150;
  int local_14c;
  undefined1 *local_140;
  undefined4 local_13c;
  int local_138;
  int local_134;
  undefined1 *local_128;
  undefined4 local_124;
  int local_120;
  int local_11c;
  undefined1 *local_110;
  undefined4 local_10c;
  int local_108;
  int local_104;
  undefined1 *local_f8;
  undefined4 local_f4;
  int local_f0;
  int local_ec;
  undefined1 *local_e0;
  undefined4 local_dc;
  int local_d8;
  int local_d4;
  undefined4 local_d0;
  undefined2 local_c0;
  int local_b4;
  undefined1 local_ac [8];
  int local_a4;
  undefined1 local_9c [8];
  undefined *local_94;
  undefined1 local_8c [8];
  int local_84;
  undefined1 local_7c [8];
  int local_74;
  undefined1 local_6c [8];
  int local_64;
  undefined1 local_5c [8];
  int local_54;
  undefined1 local_4c [8];
  int local_44;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  undefined1 local_1c [8];
  int local_14;
  int local_c [2];
  
  FUN_004dce64(0x4fbad8);
  local_c0 = 0x14;
  iVar4 = 0;
  iVar3 = 1;
  FUN_004649b0((int)local_1c);
  local_b4 = local_b4 + 1;
  FUN_0044e83c(local_c,(int)local_1c,iVar3,iVar4);
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar2 = (int *)(local_14 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_00463cd4;
    }
    local_d4 = local_14 + -0xc;
    local_d8 = local_14 + -0xc;
    FUN_004cc0bc();
    local_dc = 0;
    local_e0 = local_1c;
    local_14 = 0;
    local_1c8 = 0;
  }
LAB_00463cd4:
  local_c0 = 0x2c;
  FUN_004cf628((int)local_2c,(uint *)s_ViewWindowX_004fb408);
  local_b4 = local_b4 + 1;
  FUN_0044eca8((int)local_c,(int)local_2c);
  local_b4 = local_b4 + -1;
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar2 = (int *)(local_24 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_00463d96;
    }
    local_ec = local_24 + -0xc;
    local_f0 = local_24 + -0xc;
    FUN_004cc0bc();
    local_f4 = 0;
    local_f8 = local_2c;
    local_24 = 0;
    local_1d8 = 0;
  }
LAB_00463d96:
  local_c0 = 0x44;
  FUN_004cf628((int)local_3c,(uint *)s_ViewWindowY_004fb414);
  local_b4 = local_b4 + 1;
  FUN_0044eca8((int)local_c,(int)local_3c);
  local_b4 = local_b4 + -1;
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar2 = (int *)(local_34 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_00463e58;
    }
    local_104 = local_34 + -0xc;
    local_108 = local_34 + -0xc;
    FUN_004cc0bc();
    local_10c = 0;
    local_110 = local_3c;
    local_34 = 0;
    local_1e8 = 0;
  }
LAB_00463e58:
  local_c0 = 0x5c;
  FUN_004cf628((int)local_4c,(uint *)s_ViewWindowW_004fb420);
  local_b4 = local_b4 + 1;
  FUN_0044eca8((int)local_c,(int)local_4c);
  local_b4 = local_b4 + -1;
  if (local_44 != 0) {
    if (*(int *)(local_44 + -0xc) != -1) {
      piVar2 = (int *)(local_44 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_00463f1a;
    }
    local_11c = local_44 + -0xc;
    local_120 = local_44 + -0xc;
    FUN_004cc0bc();
    local_124 = 0;
    local_128 = local_4c;
    local_44 = 0;
    local_1f8 = 0;
  }
LAB_00463f1a:
  local_c0 = 0x74;
  FUN_004cf628((int)local_5c,(uint *)s_ViewWindowH_004fb42c);
  local_b4 = local_b4 + 1;
  FUN_0044eca8((int)local_c,(int)local_5c);
  local_b4 = local_b4 + -1;
  if (local_54 != 0) {
    if (*(int *)(local_54 + -0xc) != -1) {
      piVar2 = (int *)(local_54 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_00463fdc;
    }
    local_134 = local_54 + -0xc;
    local_138 = local_54 + -0xc;
    FUN_004cc0bc();
    local_13c = 0;
    local_140 = local_5c;
    local_54 = 0;
    local_208 = 0;
  }
LAB_00463fdc:
  local_c0 = 0x8c;
  FUN_004cf628((int)local_6c,(uint *)s_ViewWindowZ_004fb438);
  local_b4 = local_b4 + 1;
  FUN_0044eca8((int)local_c,(int)local_6c);
  local_b4 = local_b4 + -1;
  if (local_64 != 0) {
    if (*(int *)(local_64 + -0xc) != -1) {
      piVar2 = (int *)(local_64 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_0046409e;
    }
    local_14c = local_64 + -0xc;
    local_150 = local_64 + -0xc;
    FUN_004cc0bc();
    local_154 = 0;
    local_158 = local_6c;
    local_64 = 0;
    local_218 = 0;
  }
LAB_0046409e:
  local_c0 = 8;
  iVar3 = 1;
  do {
    FUN_004e0344((undefined1 *)local_254,&DAT_004fb4e9);
    iVar4 = FUN_00408b14(*(int *)(param_1 + 0x140));
    if (iVar4 < iVar3) {
      local_c0 = 200;
      local_1a0 = local_9c;
      local_19c = &DAT_00513d64;
      local_94 = &DAT_00513d64;
      puVar5 = local_9c;
      local_b4 = local_b4 + 1;
      FUN_004cf628((int)local_ac,local_254);
      local_b4 = local_b4 + 1;
      FUN_0044ec78((int)local_c,(int)local_ac,(int)puVar5);
      local_b4 = local_b4 + -1;
      if (local_a4 != 0) {
        if (*(int *)(local_a4 + -0xc) != -1) {
          piVar2 = (int *)(local_a4 + -0xc);
          if (piVar2 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else if (piVar2 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else {
            *piVar2 = *piVar2 + -1;
            iVar3 = *piVar2 + 1;
          }
          if (iVar3 != 0) goto LAB_004643c7;
        }
        local_1a4 = local_a4 + -0xc;
        local_1a8 = local_a4 + -0xc;
        FUN_004cc0bc();
        local_1ac = 0;
        local_1b0 = local_ac;
        local_a4 = 0;
      }
LAB_004643c7:
      local_c0 = 8;
      local_b4 = local_b4 + -1;
      if (local_94 == (undefined *)0x0) break;
      if (*(int *)(local_94 + -0xc) != -1) {
        piVar2 = (int *)(local_94 + -0xc);
        if (piVar2 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else if (piVar2 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else {
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2 + 1;
        }
        if (iVar3 != 0) break;
      }
      local_1b4 = local_94 + -0xc;
      local_1b8 = local_94 + -0xc;
      FUN_004cc0bc();
      local_1bc = 0;
      local_1c0 = local_9c;
      local_94 = (undefined *)0x0;
      break;
    }
    local_c0 = 0xa4;
    puVar1 = (uint *)FUN_00408c98(*(int *)(param_1 + 0x140),iVar3 + -1);
    FUN_004cf628((int)local_7c,puVar1);
    local_b4 = local_b4 + 1;
    puVar5 = local_7c;
    FUN_004cf628((int)local_8c,local_254);
    local_b4 = local_b4 + 1;
    FUN_0044ec78((int)local_c,(int)local_8c,(int)puVar5);
    local_b4 = local_b4 + -1;
    if (local_84 != 0) {
      if (*(int *)(local_84 + -0xc) != -1) {
        local_16c = (int *)(local_84 + -0xc);
        if (local_16c == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (local_16c == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *local_16c = *local_16c + -1;
          iVar4 = *local_16c + 1;
        }
        if (iVar4 != 0) goto LAB_004641f0;
      }
      local_170 = local_84 + -0xc;
      local_174 = local_84 + -0xc;
      FUN_004cc0bc();
      local_178 = 0;
      local_17c = local_8c;
      local_84 = 0;
    }
LAB_004641f0:
    local_c0 = 8;
    local_b4 = local_b4 + -1;
    if (local_74 != 0) {
      if (*(int *)(local_74 + -0xc) != -1) {
        local_180 = (int *)(local_74 + -0xc);
        if (local_180 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (local_180 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *local_180 = *local_180 + -1;
          iVar4 = *local_180 + 1;
        }
        if (iVar4 != 0) goto LAB_0046446f;
      }
      local_184 = local_74 + -0xc;
      local_188 = local_74 + -0xc;
      FUN_004cc0bc();
      local_18c = 0;
      local_190 = local_7c;
      local_74 = 0;
    }
LAB_0046446f:
    iVar3 = iVar3 + 1;
  } while (iVar3 < 10);
  local_b4 = local_b4 + -1;
  FUN_0044e920((int)local_c,2);
  *in_FS_OFFSET = local_d0;
  return;
}

