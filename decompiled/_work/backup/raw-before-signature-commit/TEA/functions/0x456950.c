// name: FUN_00456950
// address: 0x456950
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00456b99) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_00456950(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  uint *puVar7;
  int local_124;
  int local_120;
  int local_11c;
  undefined1 *local_118;
  undefined4 local_114;
  undefined *local_110;
  undefined *local_10c;
  undefined1 *local_108;
  undefined4 local_104;
  int local_100;
  int local_fc;
  undefined1 *local_f8;
  undefined4 local_f4;
  int local_f0;
  int local_ec;
  int *local_e8;
  undefined1 *local_e4;
  undefined4 local_e0;
  int local_dc;
  int local_d8;
  int *local_d4;
  int local_d0;
  char local_c9;
  int local_c8;
  undefined1 *local_c4;
  undefined4 local_c0;
  int local_bc;
  int local_b8;
  int *local_b4;
  int local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined2 local_98;
  int local_8c;
  undefined1 local_84 [8];
  int local_7c;
  undefined1 local_74 [8];
  int local_6c;
  undefined1 local_64 [8];
  int local_5c;
  undefined1 local_54 [8];
  int local_4c;
  undefined1 local_44 [8];
  int local_3c;
  undefined1 local_34 [8];
  undefined *local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x4f8bf0);
  local_ac = FUN_00466b18(*(int *)(param_1 + 0x38));
  local_b0 = FUN_00408b14(local_ac);
  if (local_b0 < 1) {
    local_98 = 8;
    FUN_00464a94((int)local_24,*(int *)(param_1 + 0x38),0x1a0e);
    local_8c = local_8c + 1;
    FUN_00465a64(*(int *)(param_1 + 0x38),(int)local_24);
    local_8c = local_8c + -1;
    if (local_1c != 0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        local_b4 = (int *)(local_1c + -0xc);
        if (local_b4 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (local_b4 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *local_b4 = *local_b4 + -1;
          iVar4 = *local_b4 + 1;
        }
        if (iVar4 != 0) goto LAB_00456a7f;
      }
      local_b8 = local_1c + -0xc;
      local_bc = local_1c + -0xc;
      FUN_004cc0bc();
      local_c0 = 0;
      local_c4 = local_24;
      local_1c = 0;
    }
LAB_00456a7f:
    FUN_0045c6d4(param_1,0);
    *in_FS_OFFSET = local_a8;
    return;
  }
  local_c8 = FUN_00466b28(*(int *)(param_1 + 0x38));
  local_98 = 0x2c;
  FUN_0043b544((int)local_14,local_c8,param_1 + 0x698);
  local_8c = local_8c + 1;
  local_98 = 0x20;
  local_c9 = '\0';
  local_d0 = 1;
  for (iVar4 = 0; (local_d0 == 1 && (iVar4 < local_b0)); iVar4 = iVar4 + 1) {
    iVar1 = FUN_00408c68(local_ac,iVar4);
    if (iVar1 == 0) {
      local_d0 = 0;
    }
    else {
      iVar1 = *(int *)(local_c8 + 0x20);
      iVar2 = FUN_0041b280((int *)(param_1 + 0x50c));
      iVar3 = FUN_0041b280((int *)(param_1 + 0x2d8));
      iVar1 = FUN_00477e58(*(int *)(iVar4 * 4 + *(int *)(param_1 + 0x6b4)) + 0x28,local_ac,iVar4,
                           (int)local_14,iVar3,iVar2,iVar1);
      local_98 = 0x20;
      if (iVar1 == 0) {
        iVar1 = FUN_00452bdc(param_1,iVar4,&local_11c,&local_120,&local_124);
        if (iVar1 == 0) {
          iVar1 = local_11c;
          if (local_11c <= local_120) {
            do {
              iVar2 = FUN_00408e54(local_ac,iVar4,iVar1);
              if (0 < iVar2) {
                local_c9 = '\x01';
              }
              iVar1 = iVar1 + 1;
            } while (iVar1 <= local_120);
          }
        }
        else if (iVar1 != 1) {
          if (iVar1 == 2) {
            uVar6 = 0x32d2;
          }
          else {
            uVar6 = 13000;
          }
          local_98 = 0xa4;
          FUN_00464a94((int)local_74,*(int *)(param_1 + 0x38),uVar6);
          local_8c = local_8c + 1;
          FUN_00465a64(*(int *)(param_1 + 0x38),(int)local_74);
          local_8c = local_8c + -1;
          if (local_6c != 0) {
            if (*(int *)(local_6c + -0xc) != -1) {
              piVar5 = (int *)(local_6c + -0xc);
              if (piVar5 == &DAT_00513d58) {
                iVar1 = 1;
              }
              else if (piVar5 == &DAT_00513d58) {
                iVar1 = 1;
              }
              else {
                *piVar5 = *piVar5 + -1;
                iVar1 = *piVar5 + 1;
              }
              if (iVar1 != 0) goto LAB_00457042;
            }
            FUN_004cc0bc();
            local_6c = 0;
          }
LAB_00457042:
          local_98 = 0x20;
          local_d0 = 0;
        }
      }
      else {
        local_2c = &DAT_00513d64;
        local_8c = local_8c + 1;
        if (iVar1 != 1) {
          local_98 = 0x5c;
          puVar7 = (uint *)&DAT_004f775a;
          FUN_00408cbc(local_44,local_ac,iVar4);
          local_8c = local_8c + 1;
          FUN_00401d10((int)local_54,(int)local_44,puVar7);
          local_8c = local_8c + 1;
          FUN_004cf384((int)local_34,(int)local_54);
          local_8c = local_8c + -1;
          if (local_4c != 0) {
            if (*(int *)(local_4c + -0xc) != -1) {
              local_d4 = (int *)(local_4c + -0xc);
              if (local_d4 == &DAT_00513d58) {
                iVar2 = 1;
              }
              else if (local_d4 == &DAT_00513d58) {
                iVar2 = 1;
              }
              else {
                *local_d4 = *local_d4 + -1;
                iVar2 = *local_d4 + 1;
              }
              if (iVar2 != 0) goto LAB_00456cb7;
            }
            local_d8 = local_4c + -0xc;
            local_dc = local_4c + -0xc;
            FUN_004cc0bc();
            local_e0 = 0;
            local_e4 = local_54;
            local_4c = 0;
          }
LAB_00456cb7:
          local_98 = 0x50;
          local_8c = local_8c + -1;
          if (local_3c != 0) {
            if (*(int *)(local_3c + -0xc) != -1) {
              local_e8 = (int *)(local_3c + -0xc);
              if (local_e8 == &DAT_00513d58) {
                iVar2 = 1;
              }
              else if (local_e8 == &DAT_00513d58) {
                iVar2 = 1;
              }
              else {
                *local_e8 = *local_e8 + -1;
                iVar2 = *local_e8 + 1;
              }
              if (iVar2 != 0) goto LAB_00456d72;
            }
            local_ec = local_3c + -0xc;
            local_f0 = local_3c + -0xc;
            FUN_004cc0bc();
            local_f4 = 0;
            local_f8 = local_44;
            local_3c = 0;
          }
        }
LAB_00456d72:
        local_98 = 0x80;
        FUN_00464a94((int)local_64,*(int *)(param_1 + 0x38),iVar1 + 0x3318);
        local_8c = local_8c + 1;
        FUN_004d573c((int)local_34,(int)local_64);
        local_8c = local_8c + -1;
        if (local_5c != 0) {
          if (*(int *)(local_5c + -0xc) != -1) {
            piVar5 = (int *)(local_5c + -0xc);
            if (piVar5 == &DAT_00513d58) {
              iVar1 = 1;
            }
            else if (piVar5 == &DAT_00513d58) {
              iVar1 = 1;
            }
            else {
              *piVar5 = *piVar5 + -1;
              iVar1 = *piVar5 + 1;
            }
            if (iVar1 != 0) goto LAB_00456e3e;
          }
          local_fc = local_5c + -0xc;
          local_100 = local_5c + -0xc;
          FUN_004cc0bc();
          local_104 = 0;
          local_108 = local_64;
          local_5c = 0;
        }
LAB_00456e3e:
        local_98 = 0x50;
        FUN_00465a64(*(int *)(param_1 + 0x38),(int)local_34);
        local_d0 = 0;
        local_8c = local_8c + -1;
        if (local_2c != (undefined *)0x0) {
          if (*(int *)(local_2c + -0xc) != -1) {
            piVar5 = (int *)(local_2c + -0xc);
            if (piVar5 == &DAT_00513d58) {
              iVar1 = 1;
            }
            else if (piVar5 == &DAT_00513d58) {
              iVar1 = 1;
            }
            else {
              *piVar5 = *piVar5 + -1;
              iVar1 = *piVar5 + 1;
            }
            if (iVar1 != 0) goto LAB_00456ef5;
          }
          local_10c = local_2c + -0xc;
          local_110 = local_2c + -0xc;
          FUN_004cc0bc();
          local_114 = 0;
          local_118 = local_34;
          local_2c = (undefined *)0x0;
        }
LAB_00456ef5:
        local_98 = 0x20;
      }
    }
  }
  if (((local_d0 == 1) && (*(int *)(param_1 + 0x690) == 0)) && (local_c9 == '\0')) {
    local_98 = 0xbc;
    FUN_00464a94((int)local_84,*(int *)(param_1 + 0x38),0x36ce);
    local_8c = local_8c + 1;
    FUN_00465a64(*(int *)(param_1 + 0x38),(int)local_84);
    local_8c = local_8c + -1;
    if (local_7c != 0) {
      if (*(int *)(local_7c + -0xc) != -1) {
        piVar5 = (int *)(local_7c + -0xc);
        if (piVar5 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar5 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar4 = *piVar5 + 1;
        }
        if (iVar4 != 0) goto LAB_00457180;
      }
      FUN_004cc0bc();
      local_7c = 0;
    }
LAB_00457180:
    local_98 = 0x20;
    local_d0 = 0;
  }
  FUN_0045c6d4(param_1,local_d0);
  local_8c = local_8c + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar5 = (int *)(local_c + -0xc);
      if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_00457237;
    }
    FUN_004cc0bc();
  }
LAB_00457237:
  *in_FS_OFFSET = local_a8;
  return;
}

