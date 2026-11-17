// name: FUN_00421fa4
// address: 0x421fa4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00422026) */

undefined4 __cdecl FUN_00421fa4(int *param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_1d8 [248];
  undefined *local_e0;
  undefined1 *local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_cc;
  uint local_c8;
  undefined1 *local_c4;
  undefined4 local_c0;
  int *local_bc;
  int *local_b8;
  int *local_b4;
  int *local_b0;
  int *local_ac;
  uint local_a8;
  undefined1 *local_a4;
  int *local_a0;
  int *local_9c;
  uint local_98;
  int *local_94;
  undefined1 *local_90;
  int *local_8c;
  undefined4 local_88;
  uint *local_7c;
  undefined4 local_78;
  undefined2 local_68;
  int local_5c;
  undefined4 local_54 [2];
  undefined1 local_4c [8];
  int *local_44;
  undefined **local_3c [2];
  undefined1 local_34 [8];
  int *local_2c;
  undefined1 local_24 [8];
  undefined *local_1c;
  undefined4 local_14 [4];
  
  FUN_00455f04(0x468968);
  local_68 = 8;
  FUN_00421cd4(local_14,param_3,0,0,0);
  local_5c = local_5c + 1;
  local_68 = 0x14;
  uVar1 = FUN_00421b7c(*param_1,(int)local_14);
  if (uVar1 != 0xffffffff) goto LAB_004223f7;
  local_1c = &DAT_00471d68;
  local_e0 = &DAT_00471d68;
  local_5c = local_5c + 1;
  local_68 = 0x38;
  if (DAT_00471f90 - 0xeU < 0x80) {
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 1;
    puVar6 = &LAB_00402ee0;
    uVar5 = 0;
    local_68 = 0x50;
    local_7c = (uint *)FUN_00455640(local_1d8,PTR_s_invalid_string_size_parameter_in_00474068);
    FUN_0044d11c((int)local_4c,local_7c);
    local_5c = local_5c + 2;
    local_3c[0] = &PTR_FUN_00461ffc;
    local_88 = 0;
    local_2c = (int *)0x0;
    local_68 = 0x5c;
    if (local_44[-3] == -1 || local_44[-3] + 1 < 0) {
      local_98 = local_44[-1];
      local_a0 = FUN_0044d2a4(local_34,local_98,local_98);
      local_b0 = local_a0 + 3;
      local_a4 = local_34;
      local_a8 = local_98;
      local_ac = local_44;
      local_9c = local_b0;
      local_2c = local_b0;
      FUN_004559d0(local_b0,local_44,local_98);
    }
    else {
      local_8c = local_44;
      local_2c = local_44;
      local_90 = local_34;
      local_94 = local_44 + -3;
      if (local_94 != &DAT_00471d5c) {
        *local_94 = *local_94 + 1;
      }
    }
    local_68 = 0x50;
    local_3c[0] = &PTR_FUN_00462010;
    local_5c = local_5c + 2;
    if (local_44 != (int *)0x0) {
      if (local_44[-3] != -1) {
        local_b4 = local_44 + -3;
        if (local_b4 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else if (local_b4 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else {
          *local_b4 = *local_b4 + -1;
          iVar4 = *local_b4 + 1;
        }
        if (iVar4 != 0) goto LAB_0042228c;
      }
      local_b8 = local_44 + -3;
      local_bc = local_44 + -3;
      FUN_0044b2cc();
      local_c0 = 0;
      local_44 = (int *)0x0;
      local_c4 = local_4c;
    }
LAB_0042228c:
    local_68 = 0x44;
    FUN_0045ed74((uint *)&DAT_00402e84,local_3c,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
  }
  if (*(uint *)(local_1c + -8) < 0x80) {
    FUN_00452c68((int)local_24,0x80);
  }
  FUN_0044cf10((int)local_24,(uint *)s_Attempt_to_stream_unregistered_t_004687ca);
  local_c8 = *(uint *)(local_1c + -4);
  pcVar2 = FUN_00455bf0(param_3);
  FUN_0044d5c8((int)local_24,local_c8,0,(uint)param_3,(uint)pcVar2,0,(uint)pcVar2);
  uVar7 = *(uint *)(local_1c + -4);
  pcVar2 = FUN_00455bf0((uint *)(s_Attempt_to_stream_unregistered_t_004687ca + 0x24));
  FUN_0044d5c8((int)local_24,uVar7,0,0x4687ee,(uint)pcVar2,0,(uint)pcVar2);
  local_68 = 0x80;
  piVar3 = FUN_00417a4c(local_54,(int)local_24);
  local_5c = local_5c + 2;
  (**(code **)(*piVar3 + 0xc))();
  local_5c = local_5c + -2;
  FUN_00417c10(local_54,2);
  local_5c = local_5c + -1;
  if (local_1c != (undefined *)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar3 = (int *)(local_1c + -0xc);
      if (piVar3 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_004223eb;
    }
    local_cc = local_1c + -0xc;
    local_d0 = local_1c + -0xc;
    FUN_0044b2cc();
    local_d4 = 0;
    local_1c = (undefined *)0x0;
    local_d8 = local_24;
  }
LAB_004223eb:
  local_68 = 0x14;
LAB_004223f7:
  uVar5 = *(undefined4 *)(*(int *)(*param_1 + 9) + uVar1 * 4);
  local_5c = local_5c + -1;
  FUN_00421d64((int)local_14,2);
  *in_FS_OFFSET = local_78;
  return uVar5;
}

