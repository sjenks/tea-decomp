// name: FUN_0042d138
// address: 0x42d138
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0042d1ba) */

undefined4 __cdecl FUN_0042d138(int *param_1,undefined4 param_2,uint *param_3)

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
  
  FUN_00467ba8(0x47c744);
  local_68 = 8;
  FUN_0042ce68(local_14,param_3,0,0,0);
  local_5c = local_5c + 1;
  local_68 = 0x14;
  uVar1 = FUN_0042cd10(*param_1,(int)local_14);
  if (uVar1 != 0xffffffff) goto LAB_0042d58b;
  local_1c = &DAT_00485bd8;
  local_e0 = &DAT_00485bd8;
  local_5c = local_5c + 1;
  local_68 = 0x38;
  if (DAT_00485f20 - 0xeU < 0x80) {
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 1;
    puVar6 = &LAB_00402064;
    uVar5 = 0;
    local_68 = 0x50;
    local_7c = (uint *)FUN_004670cc(local_1d8,PTR_s_invalid_string_size_parameter_in_00488a54);
    FUN_00459d78((int)local_4c,local_7c);
    local_5c = local_5c + 2;
    local_3c[0] = &PTR_FUN_00474e2c;
    local_88 = 0;
    local_2c = (int *)0x0;
    local_68 = 0x5c;
    if (local_44[-3] == -1 || local_44[-3] + 1 < 0) {
      local_98 = local_44[-1];
      local_a0 = FUN_00459f00(local_34,local_98,local_98);
      local_b0 = local_a0 + 3;
      local_a4 = local_34;
      local_a8 = local_98;
      local_ac = local_44;
      local_9c = local_b0;
      local_2c = local_b0;
      FUN_00467580(local_b0,local_44,local_98);
    }
    else {
      local_8c = local_44;
      local_2c = local_44;
      local_90 = local_34;
      local_94 = local_44 + -3;
      if (local_94 != &DAT_00485bcc) {
        *local_94 = *local_94 + 1;
      }
    }
    local_68 = 0x50;
    local_3c[0] = &PTR_FUN_00474e40;
    local_5c = local_5c + 2;
    if (local_44 != (int *)0x0) {
      if (local_44[-3] != -1) {
        local_b4 = local_44 + -3;
        if (local_b4 == &DAT_00485bcc) {
          iVar4 = 1;
        }
        else if (local_b4 == &DAT_00485bcc) {
          iVar4 = 1;
        }
        else {
          *local_b4 = *local_b4 + -1;
          iVar4 = *local_b4 + 1;
        }
        if (iVar4 != 0) goto LAB_0042d420;
      }
      local_b8 = local_44 + -3;
      local_bc = local_44 + -3;
      FUN_0045680c();
      local_c0 = 0;
      local_44 = (int *)0x0;
      local_c4 = local_4c;
    }
LAB_0042d420:
    local_68 = 0x44;
    FUN_00471ae8((uint *)&DAT_00402008,local_3c,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
  }
  if (*(uint *)(local_1c + -8) < 0x80) {
    FUN_00461d70((int)local_24,0x80);
  }
  FUN_00459b6c((int)local_24,(uint *)s_Attempt_to_stream_unregistered_t_0047c5a6);
  local_c8 = *(uint *)(local_1c + -4);
  pcVar2 = FUN_004677a0(param_3);
  FUN_0045a224((int)local_24,local_c8,0,(uint)param_3,(uint)pcVar2,0,(uint)pcVar2);
  uVar7 = *(uint *)(local_1c + -4);
  pcVar2 = FUN_004677a0((uint *)(s_Attempt_to_stream_unregistered_t_0047c5a6 + 0x24));
  FUN_0045a224((int)local_24,uVar7,0,0x47c5ca,(uint)pcVar2,0,(uint)pcVar2);
  local_68 = 0x80;
  piVar3 = FUN_00422bc0(local_54,(int)local_24);
  local_5c = local_5c + 2;
  (**(code **)(*piVar3 + 0xc))();
  local_5c = local_5c + -2;
  FUN_00422d84(local_54,2);
  local_5c = local_5c + -1;
  if (local_1c != (undefined *)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar3 = (int *)(local_1c + -0xc);
      if (piVar3 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_0042d57f;
    }
    local_cc = local_1c + -0xc;
    local_d0 = local_1c + -0xc;
    FUN_0045680c();
    local_d4 = 0;
    local_1c = (undefined *)0x0;
    local_d8 = local_24;
  }
LAB_0042d57f:
  local_68 = 0x14;
LAB_0042d58b:
  uVar5 = *(undefined4 *)(*(int *)(*param_1 + 9) + uVar1 * 4);
  local_5c = local_5c + -1;
  FUN_0042cef8((int)local_14,2);
  *in_FS_OFFSET = local_78;
  return uVar5;
}

