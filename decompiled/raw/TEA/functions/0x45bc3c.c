// name: FUN_0045bc3c
// address: 0x45bc3c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_0045bc3c(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  uint local_1f8 [15];
  undefined4 local_1bc;
  undefined4 local_1ac;
  undefined4 local_19c;
  undefined4 local_18c;
  undefined4 local_17c;
  undefined1 *local_174;
  undefined4 local_170;
  uint *local_16c;
  uint *local_168;
  undefined1 *local_164;
  undefined4 local_160;
  int local_15c;
  int local_158;
  undefined1 *local_154;
  undefined4 local_150;
  int local_14c;
  int local_148;
  undefined1 *local_134;
  undefined4 local_130;
  int local_12c;
  int local_128;
  int *local_124;
  undefined1 *local_118;
  undefined4 local_114;
  int local_110;
  int local_10c;
  int *local_108;
  int local_fc;
  undefined1 *local_f8;
  undefined4 local_f4;
  int local_f0;
  int local_ec;
  undefined1 *local_e0;
  undefined4 local_dc;
  int local_d8;
  int local_d4;
  int local_c8;
  int local_c4;
  undefined1 *local_c0;
  undefined4 local_bc;
  int local_b8;
  int local_b4;
  undefined4 local_b0;
  undefined2 local_a0;
  int local_94;
  undefined1 local_8c [8];
  int local_84;
  undefined1 local_7c [8];
  int local_74;
  undefined1 local_6c [8];
  uint *local_64;
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
  
  FUN_004dce64(0x4f9a98);
  local_a0 = 0x14;
  iVar5 = 0;
  iVar4 = 1;
  FUN_004649b0((int)local_1c);
  local_94 = local_94 + 1;
  FUN_0044e83c(local_c,(int)local_1c,iVar4,iVar5);
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar2 = (int *)(local_14 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar4 = *piVar2 + 1;
      }
      if (iVar4 != 0) goto LAB_0045bd24;
    }
    local_b4 = local_14 + -0xc;
    local_b8 = local_14 + -0xc;
    FUN_004cc0bc();
    local_bc = 0;
    local_c0 = local_1c;
    local_14 = 0;
    local_17c = 0;
  }
LAB_0045bd24:
  local_c4 = 1;
  local_c8 = 100;
  piVar2 = &local_c4;
  local_a0 = 0x2c;
  FUN_004cf628((int)local_2c,(uint *)s_RangeShortest_004f75f6);
  local_94 = local_94 + 1;
  FUN_0044e9c0((int)local_c,(int)local_2c,piVar2);
  local_94 = local_94 + -1;
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar2 = (int *)(local_24 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar4 = *piVar2 + 1;
      }
      if (iVar4 != 0) goto LAB_0045be15;
    }
    local_d4 = local_24 + -0xc;
    local_d8 = local_24 + -0xc;
    FUN_004cc0bc();
    local_dc = 0;
    local_e0 = local_2c;
    local_24 = 0;
    local_18c = 0;
  }
LAB_0045be15:
  piVar2 = &local_c8;
  local_a0 = 0x44;
  FUN_004cf628((int)local_3c,(uint *)s_RangeLongest_004f7604);
  local_94 = local_94 + 1;
  FUN_0044e9c0((int)local_c,(int)local_3c,piVar2);
  local_94 = local_94 + -1;
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar2 = (int *)(local_34 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar4 = *piVar2 + 1;
      }
      if (iVar4 != 0) goto LAB_0045bef2;
    }
    local_ec = local_34 + -0xc;
    local_f0 = local_34 + -0xc;
    FUN_004cc0bc();
    local_f4 = 0;
    local_f8 = local_3c;
    local_34 = 0;
    local_19c = 0;
  }
LAB_0045bef2:
  local_a0 = 8;
  iVar4 = FUN_0041b280(param_1 + 0xb6);
  iVar5 = FUN_0041b280(param_1 + 0x143);
  if ((iVar4 == local_c4) && (iVar5 == local_c8)) goto LAB_0045c174;
  local_fc = *param_1;
  iVar1 = (**(code **)(*(int *)(*(int *)(local_fc + 0x6c) + 0x1b) + 0x30))();
  if (iVar1 != 6) goto LAB_0045c174;
  if ((0 < iVar4) && (iVar4 < 0x65)) {
    local_a0 = 0x5c;
    FUN_004cf628((int)local_4c,(uint *)s_RangeShortest_004f75f6);
    local_94 = local_94 + 1;
    FUN_0044eca8((int)local_c,(int)local_4c);
    local_94 = local_94 + -1;
    if (local_44 != 0) {
      if (*(int *)(local_44 + -0xc) != -1) {
        local_108 = (int *)(local_44 + -0xc);
        if (local_108 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (local_108 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *local_108 = *local_108 + -1;
          iVar4 = *local_108 + 1;
        }
        if (iVar4 != 0) goto LAB_0045c066;
      }
      local_10c = local_44 + -0xc;
      local_110 = local_44 + -0xc;
      FUN_004cc0bc();
      local_114 = 0;
      local_118 = local_4c;
      local_44 = 0;
      local_1ac = 0;
    }
LAB_0045c066:
    local_a0 = 8;
  }
  if ((iVar5 < 1) || (100 < iVar5)) goto LAB_0045c174;
  local_a0 = 0x74;
  FUN_004cf628((int)local_5c,(uint *)s_RangeLongest_004f7604);
  local_94 = local_94 + 1;
  FUN_0044eca8((int)local_c,(int)local_5c);
  local_94 = local_94 + -1;
  if (local_54 != 0) {
    if (*(int *)(local_54 + -0xc) != -1) {
      local_124 = (int *)(local_54 + -0xc);
      if (local_124 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (local_124 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *local_124 = *local_124 + -1;
        iVar4 = *local_124 + 1;
      }
      if (iVar4 != 0) goto LAB_0045c16b;
    }
    local_128 = local_54 + -0xc;
    local_12c = local_54 + -0xc;
    FUN_004cc0bc();
    local_130 = 0;
    local_134 = local_5c;
    local_54 = 0;
    local_1bc = 0;
  }
LAB_0045c16b:
  local_a0 = 8;
LAB_0045c174:
  iVar4 = 0;
  do {
    iVar5 = (**(code **)(param_1[0x59] + 0x24))();
    if ((iVar5 <= iVar4) || (99 < iVar4)) {
      local_94 = local_94 + -1;
      FUN_0044e920((int)local_c,2);
      *in_FS_OFFSET = local_b0;
      return;
    }
    local_a0 = 0x98;
    FUN_0041c780((int)local_6c,(int)(param_1 + 0x56),iVar4);
    local_94 = local_94 + 1;
    local_a0 = 0x8c;
    if (local_64[-1] != 0) {
      FUN_004e0344((undefined1 *)local_1f8,&DAT_004f7826);
      local_a0 = 0xa4;
      FUN_004cf628((int)local_7c,local_64);
      local_94 = local_94 + 1;
      puVar6 = local_7c;
      FUN_004cf628((int)local_8c,local_1f8);
      local_94 = local_94 + 1;
      FUN_0044ec78((int)local_c,(int)local_8c,(int)puVar6);
      local_94 = local_94 + -1;
      if (local_84 != 0) {
        if (*(int *)(local_84 + -0xc) != -1) {
          piVar2 = (int *)(local_84 + -0xc);
          if (piVar2 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else if (piVar2 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else {
            *piVar2 = *piVar2 + -1;
            iVar5 = *piVar2 + 1;
          }
          if (iVar5 != 0) goto LAB_0045c2c1;
        }
        local_148 = local_84 + -0xc;
        local_14c = local_84 + -0xc;
        FUN_004cc0bc();
        local_150 = 0;
        local_154 = local_8c;
        local_84 = 0;
      }
LAB_0045c2c1:
      local_a0 = 0x8c;
      local_94 = local_94 + -1;
      if (local_74 != 0) {
        if (*(int *)(local_74 + -0xc) != -1) {
          piVar2 = (int *)(local_74 + -0xc);
          if (piVar2 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else if (piVar2 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else {
            *piVar2 = *piVar2 + -1;
            iVar5 = *piVar2 + 1;
          }
          if (iVar5 != 0) goto LAB_0045c360;
        }
        local_158 = local_74 + -0xc;
        local_15c = local_74 + -0xc;
        FUN_004cc0bc();
        local_160 = 0;
        local_164 = local_7c;
        local_74 = 0;
      }
    }
LAB_0045c360:
    local_94 = local_94 + -1;
    if (local_64 != (uint *)0x0) {
      if (local_64[-3] != 0xffffffff) {
        puVar3 = local_64 + -3;
        if (puVar3 == &DAT_00513d58) {
          iVar5 = 1;
        }
        else if (puVar3 == &DAT_00513d58) {
          iVar5 = 1;
        }
        else {
          *puVar3 = *puVar3 - 1;
          iVar5 = *puVar3 + 1;
        }
        if (iVar5 != 0) goto LAB_0045c3f6;
      }
      local_168 = local_64 + -3;
      local_16c = local_64 + -3;
      FUN_004cc0bc();
      local_170 = 0;
      local_174 = local_6c;
      local_64 = (uint *)0x0;
    }
LAB_0045c3f6:
    local_a0 = 8;
    iVar4 = iVar4 + 1;
  } while( true );
}

