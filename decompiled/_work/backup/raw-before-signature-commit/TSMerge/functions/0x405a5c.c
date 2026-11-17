// name: FUN_00405a5c
// address: 0x405a5c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __cdecl FUN_00405a5c(undefined4 *param_1,LPCSTR param_2,int param_3,char *param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  int iVar5;
  uint local_4f8 [251];
  undefined1 *local_10c;
  undefined4 local_108;
  int local_104;
  int local_100;
  undefined4 *local_fc;
  undefined4 *local_f8;
  uint local_f4;
  int local_f0;
  int *local_ec;
  int *local_e8;
  uint local_e4;
  int *local_e0;
  int local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  int local_d0;
  undefined4 local_c4;
  undefined2 local_b4;
  int local_a8;
  int local_a0;
  undefined1 local_9c [8];
  int local_94;
  int local_8c [34];
  
  FUN_00455f04(0x462298);
  *param_4 = '\x01';
  local_b4 = 8;
  FUN_0044ecfc(local_8c,0,param_2,4,0x1b6);
  local_a8 = local_a8 + 8;
  local_b4 = 0x14;
  if ((*(byte *)(local_8c[0] + 0x30) & 5) == 0) {
    iVar5 = 0;
    while (piVar4 = FUN_004514ac(local_8c,(undefined1 *)local_4f8,0x3e9,'\n'),
          (*(byte *)(*piVar4 + 0x30) & 5) == 0) {
      local_b4 = 0x20;
      iVar3 = FUN_0044d11c((int)local_9c,local_4f8);
      local_a8 = local_a8 + 1;
      if (*(int *)(param_3 + 8) == *(int *)(param_3 + 0x18)) {
        FUN_004064c4(param_3,*(int *)(param_3 + 8),iVar3);
      }
      else {
        local_d0 = *(int *)(param_3 + 8);
        local_a0 = local_d0;
        if (local_d0 != 0) {
          local_b4 = 0x2c;
          local_d4 = 0;
          *(undefined4 *)(local_d0 + 8) = 0;
          iVar1 = *(int *)(*(int *)(iVar3 + 8) + -0xc);
          if (iVar1 == -1 || iVar1 + 1 < 0) {
            local_e4 = *(uint *)(*(int *)(iVar3 + 8) + -4);
            local_ec = FUN_0044d2a4(local_d0,local_e4,local_e4);
            local_e8 = local_ec + 3;
            *(int **)(local_a0 + 8) = local_e8;
            local_f0 = local_a0;
            local_f4 = local_e4;
            local_f8 = *(undefined4 **)(iVar3 + 8);
            local_fc = *(undefined4 **)(local_a0 + 8);
            FUN_004559d0(local_fc,local_f8,local_e4);
          }
          else {
            local_d8 = *(undefined4 *)(iVar3 + 8);
            *(undefined4 *)(local_d0 + 8) = local_d8;
            local_e0 = (int *)(*(int *)(local_d0 + 8) + -0xc);
            local_dc = local_d0;
            if (local_e0 != &DAT_00471d5c) {
              *local_e0 = *local_e0 + 1;
            }
          }
          local_b4 = 0x20;
        }
        *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 0x10;
      }
      local_a8 = local_a8 + -1;
      if (local_94 != 0) {
        if (*(int *)(local_94 + -0xc) != -1) {
          piVar4 = (int *)(local_94 + -0xc);
          if (piVar4 == &DAT_00471d5c) {
            iVar3 = 1;
          }
          else if (piVar4 == &DAT_00471d5c) {
            iVar3 = 1;
          }
          else {
            *piVar4 = *piVar4 + -1;
            iVar3 = *piVar4 + 1;
          }
          if (iVar3 != 0) goto LAB_00405d50;
        }
        local_100 = local_94 + -0xc;
        local_104 = local_94 + -0xc;
        FUN_0044b2cc();
        local_108 = 0;
        local_10c = local_9c;
        local_94 = 0;
      }
LAB_00405d50:
      local_b4 = 0x14;
      if (((*param_4 != '\0') && (0 < iVar5)) &&
         (iVar3 = FUN_00405984((iVar5 + -1) * 0x10 + *(int *)(param_3 + 4),
                               iVar5 * 0x10 + *(int *)(param_3 + 4)), iVar3 < 0)) {
        *param_4 = '\0';
      }
      cVar2 = (**(code **)*param_1)();
      if (cVar2 == '\0') {
        iVar5 = -3;
        local_a8 = local_a8 + -8;
        FUN_0044edf4(local_8c,2);
        *in_FS_OFFSET = local_c4;
        return iVar5;
      }
      iVar5 = iVar5 + 1;
    }
    if ((*(byte *)(local_8c[0] + 0x30) & 2) == 0) {
      iVar5 = -2;
      local_a8 = local_a8 + -8;
      FUN_0044edf4(local_8c,2);
      *in_FS_OFFSET = local_c4;
    }
    else {
      local_a8 = local_a8 + -8;
      FUN_0044edf4(local_8c,2);
      *in_FS_OFFSET = local_c4;
    }
  }
  else {
    iVar5 = -1;
    FUN_0044edf4(local_8c,2);
    *in_FS_OFFSET = local_c4;
  }
  return iVar5;
}

