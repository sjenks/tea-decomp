// name: FUN_004108e4
// address: 0x4108e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00410a2d) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffa8 : 0x00410a35 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * __cdecl FUN_004108e4(int *param_1,int param_2)

{
  bool bVar1;
  DWORD DVar2;
  int iVar3;
  undefined3 extraout_var;
  uint *puVar4;
  int *piVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *in_FS_OFFSET;
  undefined1 local_83c [1000];
  byte local_454 [1000];
  byte *local_6c;
  uint *local_68;
  int local_64;
  byte *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int *local_54;
  int local_50;
  uint local_4c;
  undefined4 local_48;
  undefined2 local_38;
  int local_2c;
  undefined4 local_24;
  uint *local_20;
  uint *local_1c;
  undefined4 local_c;
  
  FUN_004dce64(0x4ec990);
  if (param_1[1] == 0) {
LAB_00410cd8:
    if (param_2 < 0) {
      piVar5 = (int *)0x0;
      *in_FS_OFFSET = local_48;
    }
    else {
      *(undefined1 *)(param_1 + 4) = 0;
      piVar5 = param_1 + 4;
      *in_FS_OFFSET = local_48;
    }
    return piVar5;
  }
  uVar7 = 0xbd;
LAB_00410cc1:
  if ((uVar7 == 0xbd) && (iVar3 = param_2 + -1, bVar1 = 0 < param_2, param_2 = iVar3, bVar1)) {
    DVar2 = FUN_004dee3c((undefined4 *)param_1[1]);
    param_1[0x44] = DVar2;
    if ((int)DVar2 < param_1[2]) {
      piVar5 = (int *)(param_1[1] + 8);
      *piVar5 = *piVar5 + -1;
      if (*piVar5 < 0) {
        local_4c = FUN_004df398((int *)param_1[1]);
      }
      else {
        piVar5 = (int *)param_1[1];
        pbVar6 = (byte *)*piVar5;
        *piVar5 = *piVar5 + 1;
        local_4c = (uint)*pbVar6;
      }
      if (local_4c != 0xffffffff) {
        local_4c = local_4c * 2;
        local_50 = 0;
        if (0 < (int)local_4c) {
          do {
            if (local_50 == 0) {
              local_54 = param_1 + 4;
            }
            else if (local_50 == 1) {
              local_54 = param_1 + 0x24;
            }
            else {
              local_54 = (int *)0x0;
            }
            if (local_54 == (int *)0x0) {
              uVar7 = 0xffffffff;
            }
            else {
              uVar7 = 0;
            }
            local_6c = (byte *)((int)local_54 + uVar7);
            while( true ) {
              piVar5 = (int *)(param_1[1] + 8);
              *piVar5 = *piVar5 + -1;
              if (*piVar5 < 0) {
                uVar8 = FUN_004df398((int *)param_1[1]);
              }
              else {
                piVar5 = (int *)param_1[1];
                pbVar6 = (byte *)*piVar5;
                *piVar5 = *piVar5 + 1;
                uVar8 = (uint)*pbVar6;
              }
              if ((uVar8 == 0xffffffff) || (uVar8 == 0xbd)) break;
              if (uVar7 < 0x7f) {
                uVar7 = uVar7 + 1;
                *local_6c = (byte)uVar8 ^ 0xbd;
                local_6c = local_6c + 1;
              }
            }
            if (uVar7 < 0x80) {
              *(undefined1 *)((int)local_54 + uVar7) = 0;
            }
            local_50 = local_50 + 1;
          } while (local_50 < (int)local_4c);
        }
      }
      local_20 = (uint *)0x0;
      local_1c = (uint *)0x0;
      local_c = 0;
      local_58 = 0x100;
      local_5c = 1;
      local_24 = 0x100;
      local_2c = local_2c + 1;
      local_38 = 0x20;
      FUN_00479bd4(param_1[3],(int)&local_24);
      do {
        piVar5 = (int *)(param_1[1] + 8);
        *piVar5 = *piVar5 + -1;
        if (*piVar5 < 0) {
          uVar7 = FUN_004df398((int *)param_1[1]);
        }
        else {
          piVar5 = (int *)param_1[1];
          pbVar6 = (byte *)*piVar5;
          *piVar5 = *piVar5 + 1;
          uVar7 = (uint)*pbVar6;
        }
        while( true ) {
          if ((uVar7 == 0xffffffff) || (uVar7 == 0xbd)) goto LAB_00410c2a;
          iVar3 = *(int *)(*param_1 + 8 + (uVar7 ^ 0xbd) * 8);
          if (iVar3 < 0xff) break;
          piVar5 = (int *)(param_1[1] + 8);
          *piVar5 = *piVar5 + -1;
          if (*piVar5 < 0) {
            uVar7 = FUN_004df398((int *)param_1[1]);
          }
          else {
            piVar5 = (int *)param_1[1];
            pbVar6 = (byte *)*piVar5;
            *piVar5 = *piVar5 + 1;
            uVar7 = (uint)*pbVar6;
          }
        }
        local_60 = local_454;
        local_454[0] = (byte)uVar7 ^ 0xbd;
        local_38 = 0x20;
        local_64 = 0;
        do {
          local_60 = local_60 + 1;
          local_83c[local_64] = (char)iVar3;
          local_64 = local_64 + 1;
          piVar5 = (int *)(param_1[1] + 8);
          *piVar5 = *piVar5 + -1;
          if (*piVar5 < 0) {
            uVar7 = FUN_004df398((int *)param_1[1]);
          }
          else {
            piVar5 = (int *)param_1[1];
            pbVar6 = (byte *)*piVar5;
            *piVar5 = *piVar5 + 1;
            uVar7 = (uint)*pbVar6;
          }
          if (uVar7 == 0xffffffff) goto LAB_00410c2a;
          *local_60 = (byte)uVar7 ^ 0xbd;
          iVar3 = *(int *)(*param_1 + 8 + (uVar7 ^ 0xbd) * 8);
        } while (((uVar7 != 0xbd) && (iVar3 < 0xff)) && (local_64 < 0x65));
        *local_60 = 0;
        local_83c[local_64] = 0xff;
        local_38 = 0x20;
        for (local_68 = local_20; local_68 < local_1c; local_68 = local_68 + 1) {
          uVar8 = *local_68;
          if (((1 < uVar8) && (iVar3 = FUN_00434aa0(uVar8), iVar3 <= local_64)) &&
             (iVar3 = FUN_00434abc(uVar8), local_64 <= iVar3)) {
            FUN_00434878(uVar8,local_64);
            bVar1 = FUN_00434898(uVar8,(int)local_83c);
            if (CONCAT31(extraout_var,bVar1) != 0) {
              *local_68 = 1;
              for (puVar4 = local_20; (puVar4 < local_1c && (*puVar4 < 2)); puVar4 = puVar4 + 1) {
              }
              if (puVar4 == local_1c) {
                do {
                  if (uVar7 == 0xbd) break;
                  piVar5 = (int *)(param_1[1] + 8);
                  *piVar5 = *piVar5 + -1;
                  if (*piVar5 < 0) {
                    uVar7 = FUN_004df398((int *)param_1[1]);
                  }
                  else {
                    piVar5 = (int *)param_1[1];
                    pbVar6 = (byte *)*piVar5;
                    *piVar5 = *piVar5 + 1;
                    uVar7 = (uint)*pbVar6;
                  }
                } while (uVar7 != 0xffffffff);
              }
            }
          }
        }
        FUN_004e0538(uVar7,(uint *)param_1[1]);
      } while( true );
    }
  }
  goto LAB_00410cd8;
LAB_00410c2a:
  if (uVar7 == 0xbd) {
    if (*(int *)(*(int *)(param_1[3] + 0x28) + -4) == 0) {
      pbVar6 = (byte *)0x0;
    }
    else {
      pbVar6 = *(byte **)(param_1[3] + 0x28);
    }
    uVar8 = FUN_00412000(0,0,0,pbVar6,(int *)local_20);
    if (uVar8 != 0) {
      piVar5 = param_1 + 4;
      local_2c = local_2c + -1;
      FUN_00410d88(&local_24,(int)local_20,(int)local_1c);
      FUN_004cc0bc();
      *in_FS_OFFSET = local_48;
      return piVar5;
    }
  }
  local_2c = local_2c + -1;
  FUN_00410d88(&local_24,(int)local_20,(int)local_1c);
  FUN_004cc0bc();
  local_38 = 0;
  goto LAB_00410cc1;
}

