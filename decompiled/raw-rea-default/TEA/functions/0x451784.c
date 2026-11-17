// rea decompile_all
// name: FUN_00451784
// address: 0x451784
// body: available
// range: 0x451784-0x4522b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00451a54) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __cdecl FUN_00451784(int *param_1,int param_2)

{
  RECT *pRVar1;
  undefined4 uVar2;
  RECT *pRVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  int iVar6;
  int iVar7;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  RECT local_1ac;
  undefined4 local_194;
  undefined *local_184;
  RECT local_17c;
  undefined1 *local_16c;
  undefined4 local_168;
  int local_164;
  int local_160;
  int *local_15c;
  undefined1 *local_158;
  undefined4 local_154;
  char *local_150;
  char *local_14c;
  int *local_148;
  HRGN local_144;
  HRGN local_140;
  undefined1 *local_13c;
  undefined4 local_138;
  int local_134;
  int local_130;
  int *local_12c;
  int local_128;
  int *local_124;
  int *local_120;
  int *local_11c;
  int *local_118;
  int local_114;
  int *local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  LONG local_f4;
  LONG *local_f0;
  RECT *local_ec;
  LONG *local_e8;
  int local_e4;
  undefined1 *local_e0;
  undefined4 local_dc;
  int local_d8;
  int local_d4;
  int *local_d0;
  undefined1 *local_cc;
  undefined *local_c8;
  undefined4 local_c4;
  char *local_c0;
  uint local_bc;
  uint local_b8 [5];
  int *local_a4;
  int local_a0;
  int *local_9c;
  undefined4 *local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined2 local_78;
  int local_6c;
  undefined1 local_64 [8];
  int local_5c;
  int local_54;
  int *local_50;
  int *local_4c;
  undefined1 local_48 [8];
  int local_40;
  int local_38;
  int local_34 [2];
  undefined1 local_2c [8];
  char *local_24;
  undefined1 local_1c [8];
  int local_14;
  HRGN local_c [2];
  
  bVar5 = 0;
  FUN_004dce64(0x4f8174);
  if (*(int *)(*param_1 + 0xc) == 0) {
    *in_FS_OFFSET = local_88;
    return local_88;
  }
  local_8c = FUN_00466b18(param_1[0xe]);
  local_90 = FUN_00408b14(local_8c);
  if (param_2 == 0) {
LAB_004517f5:
    FUN_0045daf8((int)param_1);
    if (param_2 == 2) {
      param_1[0x1b4] = param_1[0x1b4] + -1;
    }
    else if (param_2 == 3) {
      param_1[0x1b4] = param_1[0x1b4] + 1;
    }
    else {
      param_1[0x1b4] = 0;
    }
  }
  else if (param_2 == 1) {
    if (param_1[0x1b4] < 0) {
      param_1[0x1b4] = 0;
    }
  }
  else {
    if (param_2 - 2U < 2) goto LAB_004517f5;
    if (param_2 - 2U == 2) {
      local_94 = param_1[0x1b4];
      local_38 = *(int *)(local_94 * 4 + param_1[0x1ad]);
      if (local_38 != 0) {
        local_78 = 0x14;
        FUN_0045e640(local_38,3);
        local_78 = 8;
      }
      local_9c = param_1 + 0x1ac;
      local_98 = (undefined4 *)(param_1[0x1b4] * 4 + param_1[0x1ad]);
      if ((undefined4 *)param_1[0x1ae] != local_98 + 1) {
        FUN_0045233c(local_98 + 1,(undefined4 *)param_1[0x1ae],local_98);
      }
      local_9c[2] = local_9c[2] + -4;
      local_a0 = local_9c[2];
      if (local_90 <= param_1[0x1b4]) {
        param_1[0x1b4] = param_1[0x1b4] + -1;
      }
    }
    else {
      local_a4 = param_1 + 0x1ac;
      local_90 = param_1[0x1ae] - param_1[0x1ad];
      if (local_90 < 0) {
        local_90 = local_90 + 3;
      }
      local_90 = local_90 >> 2;
    }
  }
  FUN_00459150(&local_17c.left,param_1);
  local_78 = 0x20;
  FUN_0049ce64((int *)local_c);
  local_6c = local_6c + 1;
  local_78 = 0x38;
  FUN_004cf628((int)local_1c,(uint *)s_Panes_004f7699);
  local_6c = local_6c + 1;
  local_78 = 0x2c;
  FUN_004e0344((undefined1 *)local_b8,&DAT_004f76b2);
  local_bc = *(uint *)(local_14 + -4);
  local_c0 = FUN_004dc9f4(local_b8);
  FUN_004cfad4((int)local_1c,local_bc,0,(uint)local_b8,(uint)local_c0,0,(uint)local_c0);
  local_c4 = 0;
  local_cc = local_2c;
  local_c8 = &DAT_00513d64;
  local_24 = &DAT_00513d64;
  local_184 = &DAT_00513d64;
  local_6c = local_6c + 1;
  local_78 = 0x5c;
  iVar7 = 0;
  iVar6 = 0;
  FUN_004649b0((int)local_48);
  local_6c = local_6c + 1;
  FUN_0044e83c(local_34,(int)local_48,iVar6,iVar7);
  if (local_40 != 0) {
    if (*(int *)(local_40 + -0xc) != -1) {
      local_d0 = (int *)(local_40 + -0xc);
      if (local_d0 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else if (local_d0 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else {
        *local_d0 = *local_d0 + -1;
        iVar6 = *local_d0 + 1;
      }
      if (iVar6 != 0) goto LAB_00451b42;
    }
    local_d4 = local_40 + -0xc;
    local_d8 = local_40 + -0xc;
    FUN_004cc0bc();
    local_dc = 0;
    local_e0 = local_48;
    local_40 = 0;
    local_194 = 0;
  }
LAB_00451b42:
  local_78 = 0x2c;
  FUN_0044e94c((int)local_34,(int)local_1c,(int)local_2c);
  local_e4 = 0;
  iVar6 = 0;
  if (0 < local_90) {
    do {
      pRVar1 = &local_17c;
      pRVar3 = &local_1ac;
      for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
        pRVar3->left = pRVar1->left;
        pRVar1 = (RECT *)((int)pRVar1 + ((uint)bVar5 * -2 + 1) * 4);
        pRVar3 = (RECT *)((int)pRVar3 + ((uint)bVar5 * -2 + 1) * 4);
      }
      local_78 = 0x2c;
      if (param_1[0x29] == 0) {
        pRVar1 = (RECT *)&local_17c.top;
      }
      else {
        pRVar1 = &local_17c;
      }
      if (param_1[0x29] == 0) {
        local_e8 = &local_17c.bottom;
      }
      else {
        local_e8 = &local_17c.right;
      }
      if (param_1[0x29] == 0) {
        local_ec = (RECT *)&local_1ac.top;
      }
      else {
        local_ec = &local_1ac;
      }
      if (param_1[0x29] == 0) {
        local_f0 = &local_1ac.bottom;
      }
      else {
        local_f0 = &local_1ac.right;
      }
      if (param_2 == 6) {
        local_ec->left = **(LONG **)(iVar6 * 4 + param_1[0x1ad]);
        if (iVar6 + 1 < local_90) {
          iVar7 = **(int **)((iVar6 + 1) * 4 + param_1[0x1ad]) - param_1[0x1ed];
        }
        else {
          iVar7 = *local_e8;
        }
        *local_f0 = iVar7;
      }
      else {
        local_ec->left = pRVar1->left + local_e4;
        iVar7 = FUN_004591fc(param_1,local_24,(*local_e8 - pRVar1->left) + param_1[0x1ed],local_90,
                             iVar6);
        local_e4 = local_e4 + iVar7;
        *local_f0 = (iVar7 + local_ec->left) - param_1[0x1ed];
      }
      local_f4 = local_ec->left;
      FUN_0049cf60(local_c,&local_1ac);
      pRVar1 = &local_1ac;
      piVar4 = &local_1bc;
      for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar4 = pRVar1->left;
        pRVar1 = (RECT *)((int)pRVar1 + ((uint)bVar5 * -2 + 1) * 4);
        piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
      }
      local_1b0 = local_1b8 + param_1[0x31e];
      local_1ac.top = local_1ac.top + param_1[0x31e];
      if (((param_2 == 6) || (param_2 == 5)) || (param_2 == 4)) {
LAB_00451d28:
        FUN_0042bd3c(*(int **)(*(int *)(iVar6 * 4 + param_1[0x1ad]) + 8),&local_1ac.left,'\0');
        local_f8 = **(int **)(*(int *)(iVar6 * 4 + param_1[0x1ad]) + 4);
        local_fc = local_1b0 - local_1b8;
        local_100 = local_1b4 - local_1bc;
        local_104 = local_1b8;
        local_108 = local_1bc;
        FUN_004a7aa0(local_f8,(HWND)0x0,local_1bc,local_1b8,local_100,local_fc,0x21c);
      }
      else {
        if (param_2 == 1) {
          iVar7 = param_1[0x1ae] - param_1[0x1ad];
          if (iVar7 < 0) {
            iVar7 = iVar7 + 3;
          }
          if (iVar6 < iVar7 >> 2) goto LAB_00451d28;
        }
        local_10c = FUN_0045dd8c((int)param_1);
        local_4c = (int *)FUN_004cc0f0();
        if (local_4c != (int *)0x0) {
          local_78 = 0x80;
          FUN_00428ce4(local_4c,0,param_1,local_10c + 0x19be,&local_1bc);
        }
        local_78 = 0x2c;
        local_110 = local_4c;
        (**(code **)(*(int *)(*local_4c + 8) + 0x10))();
        local_114 = FUN_00466b28(param_1[0xe]);
        local_50 = (int *)FUN_004cc0f0();
        if (local_50 != (int *)0x0) {
          local_78 = 0x98;
          FUN_00429308(local_50,0,param_1,local_10c + 0x10a4,&local_1ac.left);
        }
        local_78 = 0x2c;
        local_118 = local_50;
        FUN_0042dbdc((int)local_50,param_1 + 0x200,param_1 + 0x211,*(undefined4 *)(local_114 + 0x70)
                     ,*(undefined4 *)(local_114 + 0xb0));
        (**(code **)(*(int *)(*local_118 + 8) + 0x10))();
        local_54 = FUN_004cc0f0();
        if (local_54 != 0) {
          local_78 = 0xb0;
          FUN_0045e59c(local_54,local_110,local_118);
          local_78 = 0xa4;
        }
        local_11c = &local_54;
        if (param_1[0x1ae] == param_1[0x1b2]) {
          FUN_00452360((int)(param_1 + 0x1ac),(undefined4 *)param_1[0x1ae],local_11c);
        }
        else {
          local_124 = (int *)param_1[0x1ae];
          *local_124 = local_54;
          param_1[0x1ae] = param_1[0x1ae] + 4;
          local_120 = local_124;
        }
      }
      local_78 = 0xbc;
      FUN_00408cbc(local_64,local_8c,iVar6);
      local_6c = local_6c + 1;
      local_128 = iVar6;
      FUN_0042905c(*(int **)(*(int *)(iVar6 * 4 + param_1[0x1ad]) + 4),iVar6,(int)local_64);
      local_6c = local_6c + -1;
      if (local_5c != 0) {
        if (*(int *)(local_5c + -0xc) != -1) {
          local_12c = (int *)(local_5c + -0xc);
          if (local_12c == &DAT_00513d58) {
            iVar7 = 1;
          }
          else if (local_12c == &DAT_00513d58) {
            iVar7 = 1;
          }
          else {
            *local_12c = *local_12c + -1;
            iVar7 = *local_12c + 1;
          }
          if (iVar7 != 0) goto LAB_00452074;
        }
        local_130 = local_5c + -0xc;
        local_134 = local_5c + -0xc;
        FUN_004cc0bc();
        local_138 = 0;
        local_5c = 0;
        local_13c = local_64;
      }
LAB_00452074:
      local_78 = 0x2c;
      **(LONG **)(iVar6 * 4 + param_1[0x1ad]) = local_f4;
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_90);
  }
  if ((param_2 == 6) || (param_2 == 5)) {
    local_140 = local_c[0];
    RedrawWindow(*(HWND *)(*param_1 + 0xc),(RECT *)0x0,local_c[0],0x101);
    FUN_0049cfc0(local_c,&local_17c);
    local_144 = local_c[0];
    RedrawWindow(*(HWND *)(*param_1 + 0xc),(RECT *)0x0,local_c[0],0x105);
  }
  else {
    (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
    FUN_0045269c(param_1);
  }
  local_6c = local_6c + -1;
  FUN_0044e920((int)local_34,2);
  local_6c = local_6c + -1;
  if (local_24 != (char *)0x0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      local_148 = (int *)(local_24 + -0xc);
      if (local_148 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else if (local_148 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else {
        *local_148 = *local_148 + -1;
        iVar6 = *local_148 + 1;
      }
      if (iVar6 != 0) goto LAB_004521e4;
    }
    local_14c = local_24 + -0xc;
    local_150 = local_24 + -0xc;
    FUN_004cc0bc();
    local_154 = 0;
    local_158 = local_2c;
    local_24 = (char *)0x0;
  }
LAB_004521e4:
  local_6c = local_6c + -1;
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      local_15c = (int *)(local_14 + -0xc);
      if (local_15c == &DAT_00513d58) {
        iVar6 = 1;
      }
      else if (local_15c == &DAT_00513d58) {
        iVar6 = 1;
      }
      else {
        *local_15c = *local_15c + -1;
        iVar6 = *local_15c + 1;
      }
      if (iVar6 != 0) goto LAB_00452293;
    }
    local_160 = local_14 + -0xc;
    local_164 = local_14 + -0xc;
    FUN_004cc0bc();
    local_168 = 0;
    local_16c = local_1c;
    local_14 = 0;
  }
LAB_00452293:
  local_6c = local_6c + -1;
  uVar2 = FUN_0049cf24(local_c,2);
  *in_FS_OFFSET = local_88;
  return uVar2;
}

