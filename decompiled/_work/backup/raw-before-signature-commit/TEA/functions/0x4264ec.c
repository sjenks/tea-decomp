// name: FUN_004264ec
// address: 0x4264ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00426770) */
/* WARNING: Removing unreachable block (ram,0x00426b63) */

int * __cdecl
FUN_004264ec(int *param_1,int param_2,uint *param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,uint *param_9,undefined4 param_10,int *param_11)

{
  uint *puVar1;
  char *pcVar2;
  LPCSTR pCVar3;
  LPCSTR pCVar4;
  undefined4 uVar5;
  int iVar6;
  tagRECT *ptVar7;
  int *piVar8;
  LONG *pLVar9;
  undefined4 *in_FS_OFFSET;
  byte bVar10;
  DEVMODEA *pDVar11;
  int iVar12;
  LONG local_118;
  int local_114;
  int local_10c;
  tagRECT local_108;
  int local_f8 [2];
  int local_f0;
  tagRECT local_e8;
  int local_d0;
  int local_c0;
  int local_bc;
  undefined1 *local_b8;
  undefined4 local_b4;
  char *local_b0;
  char *local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  undefined1 *local_94;
  undefined4 local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int *local_7c;
  uint *local_78;
  int *local_6c;
  undefined4 local_68;
  undefined2 local_58;
  int local_4c;
  undefined1 local_44 [8];
  int local_3c;
  undefined4 *local_34;
  int *local_30;
  undefined1 local_2c [8];
  char *local_24;
  int local_1c [2];
  undefined1 local_14 [8];
  int local_c;
  
  bVar10 = 0;
  FUN_004dce64(0x4f1af0);
  local_58 = 8;
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x142;
    *(int **)((int)param_1 + 0x142) = param_1 + 0x2e;
    param_1[0x2e] = (int)(param_1 + 0x2b);
    param_1[0x2f] = (int)(param_1 + 0x2c);
    *(int **)((int)param_1 + 0x146) = param_1 + 0x2b;
    *(int **)((int)param_1 + 0x14a) = param_1 + 0x2c;
    param_1[1] = (int)(param_1 + 0x2e);
    param_1[2] = (int)(param_1 + 0x2b);
    param_1[3] = (int)(param_1 + 0x2c);
    param_1[0x2a] = 0;
    param_1[0x2d] = 0;
    *(undefined4 *)((int)param_1 + 0x13e) = 0;
    param_1[0x2b] = (int)&PTR_FUN_004ea94c;
    local_6c = param_1 + 0x2c;
    *local_6c = (int)&PTR_FUN_004ea93c;
    local_4c = local_4c + 1;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x2e,1);
    local_4c = local_4c + 1;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x96;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0xe4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xe4;
    FUN_004bda48((int *)((int)param_1 + 0x142),1);
    local_4c = local_4c + 1;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0xe4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xe4;
  }
  *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x61;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x61;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x61;
  if (param_11 == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *param_11;
  }
  FUN_004ae248(param_1,1,param_4,param_9,iVar6,0,0);
  local_4c = local_4c + 2;
  *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x61;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x61;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x61;
  *(undefined ***)((int)param_1 + 0x35) = &PTR_FUN_004f1ee4;
  param_1[4] = (int)&PTR_LAB_004f1f44;
  *(undefined ***)param_1[2] = &PTR_LAB_004f1f5c;
  *(undefined ***)param_1[3] = &PTR_LAB_004f1f68;
  *(undefined ***)(param_1[1] + 8) = &PTR_LAB_004f1f74;
  *(undefined ***)(*param_1 + 0xc) = &PTR_LAB_004f2004;
  param_1[0x14] = param_7;
  param_1[0x15] = param_8;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  FUN_004cf628((int)(param_1 + 0x1c),param_3);
  param_1[0x22] = 0;
  param_1[0x22] = (int)&DAT_00513d64;
  local_d0 = param_1[0x22];
  local_4c = local_4c + 2;
  param_1[0x24] = param_5;
  param_1[0x25] = (int)param_11;
  param_1[0x26] = param_6;
  param_1[0x27] = 1;
  param_1[0x28] = 0;
  iVar6 = *(int *)(param_1[0x14] + 8);
  puVar1 = (uint *)FUN_004c3f38(iVar6);
  FUN_004cf41c((int)(param_1 + 0x20),(uint *)s_Print_Page____004f1958);
  local_7c = param_1 + 0x20;
  local_78 = puVar1;
  pcVar2 = FUN_004dc9f4(puVar1);
  FUN_004cfad4((int)local_7c,0xc,0,(uint)local_78,(uint)pcVar2,0,(uint)pcVar2);
  local_30 = (int *)FUN_004cc0f0();
  if (local_30 != (int *)0x0) {
    local_58 = 0x38;
    pDVar11 = *(DEVMODEA **)(iVar6 + 0x56);
    pCVar3 = (LPCSTR)FUN_004c3f58(iVar6);
    pCVar4 = (LPCSTR)FUN_004c3f18(iVar6);
    FUN_0049caa8(local_30,pCVar4,(LPCSTR)puVar1,pCVar3,pDVar11);
    local_58 = 0x2c;
  }
  param_1[0x16] = (int)local_30;
  (**(code **)(*(int *)param_1[0x14] + 0x14))();
  local_84 = *(int *)(param_1[0x14] + 0x26);
  local_80 = *(int *)(param_1[0x14] + 0x2a);
  param_1[0x17] = local_84;
  param_1[0x18] = local_80;
  *(undefined4 *)(param_1[1] + 0x5c) = DAT_0051b1d4;
  (**(code **)(*(int *)((int)param_1 + 0x35) + 0x4c))();
  if (param_1[0x18] < param_1[0x17]) {
    *(uint *)(*(int *)param_1[0x25] + 0x18) = *(uint *)(*(int *)param_1[0x25] + 0x18) | 0x100000;
    *(uint *)(*(int *)param_1[0x25] + 0x18) = *(uint *)(*(int *)param_1[0x25] + 0x18) & 0xffdfffff;
  }
  else {
    *(uint *)(*(int *)param_1[0x25] + 0x18) = *(uint *)(*(int *)param_1[0x25] + 0x18) | 0x200000;
    *(uint *)(*(int *)param_1[0x25] + 0x18) = *(uint *)(*(int *)param_1[0x25] + 0x18) & 0xffefffff;
  }
  local_34 = (undefined4 *)FUN_004cc0f0();
  if (local_34 != (undefined4 *)0x0) {
    local_58 = 0x50;
    if (param_1[0x25] == 0) {
      iVar6 = param_1[0x25];
    }
    else {
      iVar6 = *(int *)param_1[0x25];
    }
    FUN_0044f260(local_34,iVar6,1,1,0,0);
    local_58 = 0x44;
  }
  *(undefined4 **)(*(int *)param_1[0x25] + 0x44) = local_34;
  local_34[0xb] = 0x18;
  local_34[10] = 0x18;
  iVar6 = param_1[1];
  *(undefined4 *)(iVar6 + 0x20) = 0;
  *(undefined4 *)(iVar6 + 0x24) = 0xffffffff;
  local_e8.left = 0;
  local_e8.top = 0;
  local_e8.right = 0;
  local_e8.bottom = 0;
  FUN_004a7a6c(*(int *)(iVar6 + 0x14),&local_e8);
  ptVar7 = &local_e8;
  pLVar9 = local_f8;
  for (iVar6 = 4; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pLVar9 = ptVar7->left;
    ptVar7 = (tagRECT *)((int)ptVar7 + ((uint)bVar10 * -2 + 1) * 4);
    pLVar9 = pLVar9 + (uint)bVar10 * -2 + 1;
  }
  iVar6 = param_1[1];
  *(int *)(iVar6 + 0x28) = local_f0 - local_f8[0];
  local_108.left = 0;
  local_108.top = 0;
  local_108.right = 0;
  local_108.bottom = 0;
  FUN_004a7a6c(*(int *)(iVar6 + 0x14),&local_108);
  ptVar7 = &local_108;
  pLVar9 = &local_118;
  for (iVar6 = 4; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pLVar9 = ptVar7->left;
    ptVar7 = (tagRECT *)((int)ptVar7 + ((uint)bVar10 * -2 + 1) * 4);
    pLVar9 = pLVar9 + (uint)bVar10 * -2 + 1;
  }
  iVar6 = param_1[1];
  *(int *)(iVar6 + 0x2c) = (local_10c - local_114) + 1;
  MapWindowPoints(*(HWND *)(param_4 + 0xc),*(HWND *)(iVar6 + 0xc),(LPPOINT)(iVar6 + 0x20),1);
  local_58 = 0x68;
  FUN_00401d10((int)local_14,(int)(param_1 + 0x1c),(uint *)s_Position_004f7360);
  local_4c = local_4c + 1;
  local_58 = 0x74;
  iVar12 = 0;
  iVar6 = 0;
  FUN_004649b0((int)local_44);
  local_4c = local_4c + 1;
  FUN_0044e83c(local_1c,(int)local_44,iVar6,iVar12);
  if (local_3c != 0) {
    if (*(int *)(local_3c + -0xc) != -1) {
      piVar8 = (int *)(local_3c + -0xc);
      if (piVar8 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else if (piVar8 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else {
        *piVar8 = *piVar8 + -1;
        iVar6 = *piVar8 + 1;
      }
      if (iVar6 != 0) goto LAB_00426b32;
    }
    local_88 = local_3c + -0xc;
    local_8c = local_3c + -0xc;
    FUN_004cc0bc();
    local_90 = 0;
    local_94 = local_44;
    local_3c = 0;
  }
LAB_00426b32:
  local_24 = &DAT_00513d64;
  local_4c = local_4c + 1;
  local_58 = 0x5c;
  uVar5 = FUN_0044e94c((int)local_1c,(int)local_14,(int)local_2c);
  if ((char)uVar5 != '\0') {
    FUN_0044ee84(local_24,&local_98,&local_9c,&local_a0,&local_a4,&local_a8);
    iVar6 = FUN_004153ec(local_9c,local_a0,local_a4,local_a8);
    if (iVar6 != 0) {
      if (local_a0 < 0) {
        local_a0 = 0;
      }
      param_1[0x28] = local_98;
      *(int *)(param_1[1] + 0x20) = local_9c;
      *(int *)(param_1[1] + 0x24) = local_a0;
      *(int *)(param_1[1] + 0x28) = local_a4;
      *(int *)(param_1[1] + 0x2c) = local_a8;
    }
  }
  local_4c = local_4c + -1;
  if (local_24 != (char *)0x0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar8 = (int *)(local_24 + -0xc);
      if (piVar8 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else if (piVar8 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else {
        *piVar8 = *piVar8 + -1;
        iVar6 = *piVar8 + 1;
      }
      if (iVar6 != 0) goto LAB_00426ccf;
    }
    local_ac = local_24 + -0xc;
    local_b0 = local_24 + -0xc;
    FUN_004cc0bc();
    local_b4 = 0;
    local_b8 = local_2c;
    local_24 = (char *)0x0;
  }
LAB_00426ccf:
  local_4c = local_4c + -1;
  FUN_0044e920((int)local_1c,2);
  local_4c = local_4c + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar8 = (int *)(local_c + -0xc);
      if (piVar8 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else if (piVar8 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else {
        *piVar8 = *piVar8 + -1;
        iVar6 = *piVar8 + 1;
      }
      if (iVar6 != 0) goto LAB_00426d73;
    }
    local_bc = local_c + -0xc;
    local_c0 = local_c + -0xc;
    FUN_004cc0bc();
  }
LAB_00426d73:
  *in_FS_OFFSET = local_68;
  return param_1;
}

