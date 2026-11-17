// name: FUN_00423078
// address: 0x423078
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00423278) */
/* WARNING: Removing unreachable block (ram,0x00423932) */
/* WARNING: Removing unreachable block (ram,0x00423a24) */
/* WARNING: Removing unreachable block (ram,0x004239d0) */
/* WARNING: Removing unreachable block (ram,0x00423a17) */
/* WARNING: Removing unreachable block (ram,0x00423abb) */
/* WARNING: Removing unreachable block (ram,0x00423adf) */
/* WARNING: Removing unreachable block (ram,0x00423aea) */
/* WARNING: Removing unreachable block (ram,0x00423b2a) */
/* WARNING: Removing unreachable block (ram,0x00423b03) */
/* WARNING: Removing unreachable block (ram,0x00423b23) */
/* WARNING: Removing unreachable block (ram,0x00423b10) */
/* WARNING: Removing unreachable block (ram,0x00423b2f) */
/* WARNING: Removing unreachable block (ram,0x00423b33) */
/* WARNING: Removing unreachable block (ram,0x00423b81) */
/* WARNING: Removing unreachable block (ram,0x0042351a) */

uint __cdecl FUN_00423078(int param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  LPARAM lParam;
  WPARAM wParam;
  char *pcVar4;
  HINSTANCE pHVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 *in_FS_OFFSET;
  char cVar10;
  bool bVar11;
  undefined1 local_1b1;
  uint local_1b0;
  int local_160;
  uint local_15c;
  undefined *local_150;
  undefined *local_14c;
  int *local_148;
  undefined1 *local_144;
  undefined4 local_140;
  int *local_13c;
  int *local_138;
  int *local_134;
  int *local_130;
  undefined4 *local_12c;
  uint local_128;
  undefined1 *local_124;
  int *local_120;
  int *local_11c;
  uint local_118;
  int *local_114;
  undefined1 *local_110;
  int *local_10c;
  undefined4 local_108;
  int local_104;
  undefined1 local_fd;
  undefined1 *local_fc;
  undefined *local_f8;
  undefined4 local_f4;
  undefined *local_e8;
  undefined *local_e4;
  undefined1 *local_e0;
  undefined4 local_dc;
  int local_d8;
  int local_d4;
  int local_c8;
  int local_c4;
  undefined1 *local_c0;
  undefined *local_bc;
  undefined4 local_b8;
  char *local_b4;
  HWND local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  uint local_9c [3];
  undefined4 local_90;
  undefined2 local_80;
  int local_74;
  undefined1 local_44 [8];
  int *local_3c;
  undefined1 local_34 [8];
  undefined *local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  undefined *local_c;
  
  FUN_004dce64(0x4f1198);
  local_a0 = 1;
LAB_00423098:
  local_a4 = 0;
  iVar9 = 0;
LAB_004230a2:
  iVar7 = 0;
LAB_004230a4:
  iVar6 = *(int *)(param_1 + iVar9 * 4) + iVar7 * 0x38;
  if (*(int *)(iVar6 + 0x40) != 0) {
    if (param_3 == 0x31a6) {
      if (*(int *)(*(int *)(param_1 + 0x28) + -4) != 0) {
        local_a8 = iVar6 + 0x48;
        local_ac = param_1 + 0x20;
        uVar2 = FUN_004d40d0(local_ac,0,*(uint *)(*(int *)(param_1 + 0x28) + -4),
                             *(byte **)(iVar6 + 0x50),*(uint *)(*(int *)(iVar6 + 0x50) + -4));
        if (uVar2 != 0) goto LAB_004238f3;
      }
    }
    else {
      iVar1 = local_a4 + 1;
      iVar3 = local_a4 + 0x3340;
      local_a4 = iVar1;
      if (iVar3 != param_3) goto LAB_004238f3;
    }
    if (iVar9 == 0) {
      if (*(int *)(*(int *)(iVar6 + 0x60) + -4) != 0) {
        local_f4 = 0;
        local_fc = local_34;
        local_f8 = &DAT_00513d64;
        local_2c = &DAT_00513d64;
        local_74 = local_74 + 1;
        local_80 = 0x68;
        for (; (char)*param_2 != '\0'; param_2 = (uint *)((int)param_2 + 1)) {
          iVar9 = FUN_004e1310((int)(char)*param_2);
          if (iVar9 == 0) {
            FUN_004e0344((undefined1 *)local_9c,(byte *)s____02x_004f0e4d);
            uVar2 = *(uint *)(local_2c + -4);
            pcVar4 = FUN_004dc9f4(local_9c);
            FUN_004cfad4((int)local_34,uVar2,0,(uint)local_9c,(uint)pcVar4,0,(uint)pcVar4);
          }
          else {
            local_fd = (undefined1)*param_2;
            FUN_004d5c40((int)local_34,*(uint *)(local_2c + -4),0,1,local_fd);
          }
        }
        local_80 = 0x74;
        local_104 = iVar6 + 0x58;
        local_108 = 0;
        local_3c = (int *)0x0;
        iVar9 = *(int *)(*(int *)(iVar6 + 0x60) + -0xc);
        if (iVar9 == -1 || iVar9 + 1 < 0) {
          local_118 = *(uint *)(*(int *)(iVar6 + 0x60) + -4);
          local_120 = FUN_004cf7b0(local_44,local_118,local_118);
          local_124 = local_44;
          local_130 = local_120 + 3;
          local_128 = local_118;
          local_12c = *(undefined4 **)(local_104 + 8);
          local_11c = local_130;
          local_3c = local_130;
          FUN_004dc7d4(local_130,local_12c,local_118);
        }
        else {
          local_10c = *(int **)(iVar6 + 0x60);
          local_110 = local_44;
          local_114 = local_10c + -3;
          local_3c = local_10c;
          if (local_114 != &DAT_00513d58) {
            *local_114 = *local_114 + 1;
          }
        }
        local_74 = local_74 + 1;
        local_80 = 0x68;
        uVar2 = local_3c[-1];
        while (uVar2 != 0) {
          pcVar4 = FUN_004dc9f4((uint *)s__entry__004f0e3e);
          uVar2 = FUN_004d7cf0((int)local_44,(byte *)s__entry__004f0e3e,uVar2 - 1,(uint)pcVar4);
          if (uVar2 == 0xffffffff) break;
          pcVar4 = FUN_004dc9f4((uint *)s__entry__004f0e3e);
          FUN_004cfad4((int)local_44,uVar2,(uint)pcVar4,(uint)local_2c,*(uint *)(local_2c + -4),0,
                       *(uint *)(local_2c + -4));
        }
        pHVar5 = ShellExecuteA((HWND)0x0,&DAT_004f0e54,(LPCSTR)local_3c,(LPCSTR)0x0,(LPCSTR)0x0,9);
        uVar2 = (uint)((HINSTANCE)0x20 < pHVar5);
        local_74 = local_74 + -1;
        if (local_3c != (int *)0x0) {
          if (local_3c[-3] != -1) {
            local_134 = local_3c + -3;
            if (local_134 == &DAT_00513d58) {
              iVar9 = 1;
            }
            else if (local_134 == &DAT_00513d58) {
              iVar9 = 1;
            }
            else {
              *local_134 = *local_134 + -1;
              iVar9 = *local_134 + 1;
            }
            if (iVar9 != 0) goto LAB_00423825;
          }
          local_138 = local_3c + -3;
          local_13c = local_3c + -3;
          FUN_004cc0bc();
          local_140 = 0;
          local_144 = local_44;
          local_3c = (int *)0x0;
        }
LAB_00423825:
        local_80 = 0x68;
        local_74 = local_74 + -1;
        if (local_2c != (undefined *)0x0) {
          if (*(int *)(local_2c + -0xc) != -1) {
            local_148 = (int *)(local_2c + -0xc);
            if (local_148 == &DAT_00513d58) {
              iVar9 = 1;
            }
            else if (local_148 == &DAT_00513d58) {
              iVar9 = 1;
            }
            else {
              *local_148 = *local_148 + -1;
              iVar9 = *local_148 + 1;
            }
            if (iVar9 != 0) goto LAB_004238da;
          }
          local_14c = local_2c + -0xc;
          local_150 = local_2c + -0xc;
          FUN_004cc0bc();
        }
LAB_004238da:
        *in_FS_OFFSET = local_90;
        return uVar2;
      }
    }
    else {
      if (iVar9 == 1) {
        iVar9 = FUN_0044f0f0(*(LPCSTR *)(iVar6 + 0x60),*(LPCSTR *)(iVar6 + 0x70),param_2);
        *in_FS_OFFSET = local_90;
        return (uint)(iVar9 == 0);
      }
      if (iVar9 == 2) {
        local_b0 = FindWindowA((LPCSTR)0x0,*(LPCSTR *)(iVar6 + 0x60));
        if (local_b0 == (HWND)0x0) {
          *in_FS_OFFSET = local_90;
          return 0;
        }
        FUN_0046597c(*(int *)(param_1 + 0x30),param_2,(uint *)0x0);
        lParam = FUN_00464ae0(*(int *)(param_1 + 0x30));
        local_b4 = *(char **)(iVar6 + 0x70);
        wParam = FUN_004e39d0(local_b4);
        SendMessageA(local_b0,0x111,wParam,lParam);
        *in_FS_OFFSET = local_90;
        return 1;
      }
      if (iVar9 == 3) {
        local_b8 = 0;
        local_c0 = local_14;
        local_bc = &DAT_00513d64;
        local_c = &DAT_00513d64;
        local_74 = local_74 + 1;
        local_c4 = iVar6 + 0x68;
        local_80 = 0x2c;
        local_c8 = FUN_004cf628((int)local_24,(uint *)&DAT_004f0e46);
        local_74 = local_74 + 1;
        uVar2 = FUN_004d40d0(local_c4,0,*(uint *)(*(int *)(local_c4 + 8) + -4),
                             *(byte **)(local_c8 + 8),*(uint *)(*(int *)(local_c8 + 8) + -4));
        cVar10 = uVar2 != 0;
        local_74 = local_74 + -1;
        if (local_1c != 0) {
          if (*(int *)(local_1c + -0xc) != -1) {
            piVar8 = (int *)(local_1c + -0xc);
            if (piVar8 == &DAT_00513d58) {
              iVar9 = 1;
            }
            else if (piVar8 == &DAT_00513d58) {
              iVar9 = 1;
            }
            else {
              *piVar8 = *piVar8 + -1;
              iVar9 = *piVar8 + 1;
            }
            if (iVar9 != 0) goto LAB_0042338a;
          }
          local_d4 = local_1c + -0xc;
          local_d8 = local_1c + -0xc;
          FUN_004cc0bc();
          local_dc = 0;
          local_e0 = local_24;
          local_1c = 0;
        }
LAB_0042338a:
        if (cVar10 == '\0') {
          local_80 = 0x20;
          for (; (char)*param_2 != '\0'; param_2 = (uint *)((int)param_2 + 1)) {
            FUN_004e0344((undefined1 *)local_9c,&DAT_004f0e48);
            uVar2 = *(uint *)(local_c + -4);
            pcVar4 = FUN_004dc9f4(local_9c);
            FUN_004cfad4((int)local_14,uVar2,0,(uint)local_9c,(uint)pcVar4,0,(uint)pcVar4);
          }
        }
        else {
          FUN_004cf41c((int)local_14,param_2);
        }
        uVar2 = FUN_00435a1c(iVar6 + 0x58,(int)local_14,0);
        local_74 = local_74 + -1;
        if (local_c != (undefined *)0x0) {
          if (*(int *)(local_c + -0xc) != -1) {
            piVar8 = (int *)(local_c + -0xc);
            if (piVar8 == &DAT_00513d58) {
              iVar9 = 1;
            }
            else if (piVar8 == &DAT_00513d58) {
              iVar9 = 1;
            }
            else {
              *piVar8 = *piVar8 + -1;
              iVar9 = *piVar8 + 1;
            }
            if (iVar9 != 0) goto LAB_004234a0;
          }
          local_e4 = local_c + -0xc;
          local_e8 = local_c + -0xc;
          FUN_004cc0bc();
        }
LAB_004234a0:
        *in_FS_OFFSET = local_90;
        return uVar2;
      }
    }
  }
LAB_004238f3:
  iVar7 = iVar7 + 1;
  if (3 < iVar7) goto code_r0x004238fd;
  goto LAB_004230a4;
code_r0x004238fd:
  iVar9 = iVar9 + 1;
  if (3 < iVar9) goto code_r0x00423907;
  goto LAB_004230a2;
code_r0x00423907:
  local_15c = DAT_005140ac;
  local_160 = param_1 + 0x20;
  local_1b0 = *(uint *)(*(int *)(param_1 + 0x28) + -4);
  local_1b1 = 0;
  uVar2 = local_1b0;
  if (DAT_005140ac < local_1b0) {
    uVar2 = DAT_005140ac;
  }
  FUN_004cfad4(local_160,0,uVar2,(uint)&local_1b1,0,0,0);
  if ((param_3 != 0x31a6) || (bVar11 = local_a0 != 1, local_a0 = local_a0 + 1, bVar11)) {
    *in_FS_OFFSET = local_90;
    return 0;
  }
  goto LAB_00423098;
}

