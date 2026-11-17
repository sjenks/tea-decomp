// name: FUN_0041f1c8
// address: 0x41f1c8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0041f256) */
/* WARNING: Removing unreachable block (ram,0x0041f5c7) */
/* WARNING: Removing unreachable block (ram,0x0041f29c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff60 : 0x0041f2aa */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_0041f1c8(int param_1,int param_2,char param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined3 extraout_var;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 local_8c;
  undefined1 local_68 [8];
  int local_60;
  uint local_58;
  undefined1 local_54 [8];
  undefined4 *local_4c;
  undefined1 local_44 [8];
  uint *local_3c;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  uint local_1c;
  undefined *local_c;
  
  FUN_004dce64(0x4ef644);
  puVar3 = FUN_00407734(*(uint **)(param_2 + 8));
  FUN_00408884(*(int *)(param_1 + 0x14));
  *(undefined4 **)(param_1 + 0x14) = puVar3;
  local_c = &DAT_00513d64;
  local_30 = 0;
  local_2c = 0;
  local_1c = 0;
  local_34 = 0x40;
  for (iVar7 = 0; iVar5 = FUN_00408b14(*(int *)(param_1 + 0x14)), uVar1 = local_2c, uVar6 = local_30
      , iVar7 < iVar5; iVar7 = iVar7 + 1) {
    uVar2 = FUN_00408b6c(*(int *)(param_1 + 0x14),iVar7);
    if (CONCAT31(extraout_var,uVar2) != 0) {
      puVar4 = (uint *)FUN_00408c98(*(int *)(param_1 + 0x14),iVar7);
      FUN_004cf628((int)local_54,puVar4);
      if (local_2c == local_1c) {
        FUN_0040e240((int)&local_34,local_2c,(int)local_54);
      }
      else {
        local_58 = local_2c;
        if (local_2c != 0) {
          *(undefined4 *)(local_2c + 8) = 0;
          if (local_4c[-3] == -1 || local_4c[-3] + 1 < 0) {
            uVar6 = local_4c[-1];
            piVar8 = FUN_004cf7b0(local_2c,uVar6,uVar6);
            *(int **)(local_58 + 8) = piVar8 + 3;
            FUN_004dc7d4(*(undefined4 **)(local_58 + 8),local_4c,uVar6);
          }
          else {
            *(undefined4 **)(local_2c + 8) = local_4c;
            piVar8 = (int *)(*(int *)(local_2c + 8) + -0xc);
            if (piVar8 != &DAT_00513d58) {
              *piVar8 = *piVar8 + 1;
            }
          }
        }
        local_2c = local_2c + 0x10;
      }
      if (local_4c != (undefined4 *)0x0) {
        if (local_4c[-3] != -1) {
          piVar8 = local_4c + -3;
          if (piVar8 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else if (piVar8 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else {
            *piVar8 = *piVar8 + -1;
            iVar5 = *piVar8 + 1;
          }
          if (iVar5 != 0) goto LAB_0041f4f9;
        }
        FUN_004cc0bc();
        local_4c = (undefined4 *)0x0;
      }
    }
LAB_0041f4f9:
  }
  if ((param_3 != '\0') && (local_30 != local_2c)) {
    FUN_00414bd8(local_30,local_2c);
    FUN_004146a0(uVar6,uVar1);
  }
  local_3c = (uint *)&DAT_00513d64;
  for (uVar6 = local_30; uVar6 < local_2c; uVar6 = uVar6 + 0x10) {
    if (uVar6 != local_30) {
      FUN_004d5c40((int)local_44,local_3c[-1],0,1,0x3b);
    }
    FUN_004d573c((int)local_44,uVar6);
  }
  uVar6 = FUN_004d40d0((int)local_44,0,local_3c[-1],*(byte **)(param_2 + 8),
                       *(uint *)(*(int *)(param_2 + 8) + -4));
  if (uVar6 != 0) {
    puVar3 = FUN_00407734(local_3c);
    FUN_00408884(*(int *)(param_1 + 0x14));
    *(undefined4 **)(param_1 + 0x14) = puVar3;
  }
  if (local_3c != (uint *)0x0) {
    if (local_3c[-3] != 0xffffffff) {
      puVar4 = local_3c + -3;
      if (puVar4 == &DAT_00513d58) {
        iVar7 = 1;
      }
      else if (puVar4 == &DAT_00513d58) {
        iVar7 = 1;
      }
      else {
        *puVar4 = *puVar4 - 1;
        iVar7 = *puVar4 + 1;
      }
      if (iVar7 != 0) goto LAB_0041f6fd;
    }
    FUN_004cc0bc();
    local_3c = (uint *)0x0;
  }
LAB_0041f6fd:
  FUN_0040b4f0(&local_34,local_30,local_2c);
  FUN_004cc0bc();
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar8 = (int *)(local_c + -0xc);
      if (piVar8 == &DAT_00513d58) {
        iVar7 = 1;
      }
      else if (piVar8 == &DAT_00513d58) {
        iVar7 = 1;
      }
      else {
        *piVar8 = *piVar8 + -1;
        iVar7 = *piVar8 + 1;
      }
      if (iVar7 != 0) goto LAB_0041f7c3;
    }
    FUN_004cc0bc();
    local_c = (undefined *)0x0;
  }
LAB_0041f7c3:
  (**(code **)(*(int *)(param_1 + 0xc) + 0x58))();
  iVar7 = 0;
  do {
    iVar5 = FUN_00408b14(*(int *)(param_1 + 0x14));
    if (iVar5 <= iVar7) {
      *in_FS_OFFSET = local_8c;
      return;
    }
    FUN_00408cbc(local_68,*(int *)(param_1 + 0x14),iVar7);
    (**(code **)(*(int *)(param_1 + 0xc) + 100))();
    if (local_60 != 0) {
      if (*(int *)(local_60 + -0xc) != -1) {
        piVar8 = (int *)(local_60 + -0xc);
        if (piVar8 == &DAT_00513d58) {
          iVar5 = 1;
        }
        else if (piVar8 == &DAT_00513d58) {
          iVar5 = 1;
        }
        else {
          *piVar8 = *piVar8 + -1;
          iVar5 = *piVar8 + 1;
        }
        if (iVar5 != 0) goto LAB_0041f89a;
      }
      FUN_004cc0bc();
      local_60 = 0;
    }
LAB_0041f89a:
    iVar7 = iVar7 + 1;
  } while( true );
}

