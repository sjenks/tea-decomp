// name: FUN_0046b2ec
// address: 0x46b2ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_0046b2ec(int param_1,int param_2)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  UINT uFlags;
  int iVar4;
  uint uVar5;
  UINT *pUVar6;
  UINT *pUVar7;
  undefined4 *in_FS_OFFSET;
  byte bVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined1 *puVar11;
  UINT local_ec;
  uint auStack_e8 [5];
  undefined1 *local_d4;
  undefined4 local_d0;
  LPCSTR local_cc;
  LPCSTR local_c8;
  int *local_c4;
  UINT local_c0;
  UINT_PTR local_bc;
  LPCSTR local_b8;
  uint local_b4;
  uint *local_b0;
  uint local_a4 [3];
  uint local_98;
  HMENU local_94;
  undefined4 local_90;
  undefined2 local_80;
  int local_74;
  undefined1 local_6c [8];
  int local_64;
  undefined1 local_5c [8];
  int *local_54;
  undefined1 local_4c [8];
  int local_44;
  undefined4 local_3c [3];
  undefined1 local_30 [8];
  LPCSTR local_28;
  undefined4 local_20;
  HMENU local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  bVar8 = 0;
  FUN_004dce64(0x4fdb50);
  local_94 = GetSubMenu(*(HMENU *)(param_2 + 4),0);
  if (local_94 != (HMENU)0x0) {
    local_80 = 8;
    FUN_00497f68(&local_20,local_94,0);
    local_74 = local_74 + 2;
    local_80 = 0x14;
    local_98 = FUN_00472370(param_1);
    uVar5 = 0;
    while( true ) {
      iVar4 = *(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xf;
      }
      if (((uint)(iVar4 >> 4) < local_98) || (9 < uVar5)) break;
      FUN_004e0344((undefined1 *)local_a4,&DAT_004fd390);
      local_80 = 0x2c;
      FUN_004cf628((int)local_30,local_a4);
      local_74 = local_74 + 1;
      local_80 = 0x20;
      local_b0 = *(uint **)(*(int *)(param_1 + 0x6c) + 8 + (local_98 - 1) * 0x10);
      local_b4 = *(uint *)(local_28 + -4);
      pcVar1 = FUN_004dc9f4(local_b0);
      FUN_004cfad4((int)local_30,local_b4,0,(uint)local_b0,(uint)pcVar1,0,(uint)pcVar1);
      FUN_004d5c40((int)local_30,(uint)(uVar5 == 9),0,1,0x26);
      local_c0 = 0;
      if (*(uint *)(param_1 + 0x88) == local_98) {
        local_c0 = 8;
      }
      local_b8 = local_28;
      local_bc = uVar5 + 0x317e;
      AppendMenuA(local_1c,local_c0,local_bc,local_28);
      local_74 = local_74 + -1;
      if (local_28 != (LPCSTR)0x0) {
        if (*(int *)(local_28 + -0xc) != -1) {
          local_c4 = (int *)(local_28 + -0xc);
          if (local_c4 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (local_c4 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *local_c4 = *local_c4 + -1;
            iVar4 = *local_c4 + 1;
          }
          if (iVar4 != 0) goto LAB_0046b510;
        }
        local_c8 = local_28 + -0xc;
        local_cc = local_28 + -0xc;
        FUN_004cc0bc();
        local_d0 = 0;
        local_d4 = local_30;
        local_28 = (LPCSTR)0x0;
      }
LAB_0046b510:
      local_80 = 0x14;
      local_98 = local_98 + 1;
      uVar5 = uVar5 + 1;
    }
    local_74 = local_74 + -2;
    FUN_00497bf4(&local_20,0);
    local_80 = 0;
  }
  local_94 = GetSubMenu(*(HMENU *)(param_2 + 4),4);
  if (local_94 != (HMENU)0x0) {
    local_80 = 0x44;
    FUN_00497f68(local_3c,local_94,0);
    puVar9 = local_3c;
    local_74 = local_74 + 2;
    local_80 = 0x50;
    iVar4 = 1;
    piVar2 = (int *)FUN_00422fc4(*(int *)(param_1 + 0x38));
    FUN_00423e14(piVar2,(int)puVar9,iVar4);
    local_74 = local_74 + -2;
    FUN_00497bf4(local_3c,0);
  }
  pUVar6 = &DAT_004fd35c;
  pUVar7 = &local_ec;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pUVar7 = *pUVar6;
    pUVar6 = pUVar6 + (uint)bVar8 * -2 + 1;
    pUVar7 = pUVar7 + (uint)bVar8 * -2 + 1;
  }
  local_80 = 0x68;
  (**(code **)(*(int *)(param_1 + 0xc) + 0xb0))();
  local_74 = local_74 + 1;
  if (*(int *)(local_c + -4) != 0) {
    puVar11 = local_14;
    uVar5 = 2;
    local_80 = 0x74;
    iVar4 = FUN_004cf628((int)local_4c,(uint *)&DAT_004fd3d1);
    local_74 = local_74 + 1;
    iVar4 = FUN_004d5a8c(iVar4,uVar5,(int)puVar11);
    FUN_004cf384((int)local_14,iVar4);
    local_74 = local_74 + -1;
    if (local_44 != 0) {
      if (*(int *)(local_44 + -0xc) != -1) {
        piVar2 = (int *)(local_44 + -0xc);
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
        if (iVar4 != 0) goto LAB_0046b700;
      }
      FUN_004cc0bc();
      local_44 = 0;
    }
  }
LAB_0046b700:
  uVar5 = 0;
  do {
    local_80 = 0x98;
    puVar11 = local_14;
    uVar10 = auStack_e8[uVar5 * 3];
    iVar4 = FUN_004cf628((int)local_6c,(uint *)auStack_e8[uVar5 * 3 + 1]);
    local_74 = local_74 + 1;
    iVar3 = FUN_004d5a8c(iVar4,uVar10,(int)puVar11);
    local_54 = (int *)0x0;
    iVar4 = *(int *)(*(int *)(iVar3 + 8) + -0xc);
    if (iVar4 == -1 || iVar4 + 1 < 0) {
      uVar10 = *(uint *)(*(int *)(iVar3 + 8) + -4);
      local_54 = FUN_004cf7b0(local_5c,uVar10,uVar10);
      local_54 = local_54 + 3;
      FUN_004dc7d4(local_54,*(undefined4 **)(iVar3 + 8),uVar10);
    }
    else {
      local_54 = *(int **)(iVar3 + 8);
      piVar2 = *(int **)(iVar3 + 8) + -3;
      if (piVar2 != &DAT_00513d58) {
        *piVar2 = *piVar2 + 1;
      }
    }
    if (local_64 != 0) {
      if (*(int *)(local_64 + -0xc) != -1) {
        piVar2 = (int *)(local_64 + -0xc);
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
        if (iVar4 != 0) goto LAB_0046b8d1;
      }
      FUN_004cc0bc();
      local_64 = 0;
    }
LAB_0046b8d1:
    local_80 = 0x8c;
    uFlags = GetMenuState(*(HMENU *)(param_2 + 4),(&local_ec)[uVar5 * 3],0);
    ModifyMenuA(*(HMENU *)(param_2 + 4),(&local_ec)[uVar5 * 3],uFlags,(&local_ec)[uVar5 * 3],
                (LPCSTR)local_54);
    local_74 = local_74 + -1;
    if (local_54 != (int *)0x0) {
      if (local_54[-3] != -1) {
        piVar2 = local_54 + -3;
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
        if (iVar4 != 0) goto LAB_0046b9ed;
      }
      FUN_004cc0bc();
      local_54 = (int *)0x0;
    }
LAB_0046b9ed:
    local_80 = 0x5c;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 2);
  local_74 = local_74 + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar2 = (int *)(local_c + -0xc);
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
      if (iVar4 != 0) goto LAB_0046baac;
    }
    FUN_004cc0bc();
  }
LAB_0046baac:
  *in_FS_OFFSET = local_90;
  return;
}

