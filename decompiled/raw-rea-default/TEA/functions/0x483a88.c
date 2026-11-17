// rea decompile_all
// name: FUN_00483a88
// address: 0x483a88
// body: available
// range: 0x483a88-0x484a3f inclusive
// range: 0x484a49-0x484b76 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00484167) */
/* WARNING: Removing unreachable block (ram,0x00483c1f) */
/* WARNING: Removing unreachable block (ram,0x00483d0d) */
/* WARNING: Removing unreachable block (ram,0x00483cb9) */
/* WARNING: Removing unreachable block (ram,0x00483d00) */
/* WARNING: Removing unreachable block (ram,0x00483da4) */
/* WARNING: Removing unreachable block (ram,0x00483dc9) */
/* WARNING: Removing unreachable block (ram,0x00483dd4) */
/* WARNING: Removing unreachable block (ram,0x00483e14) */
/* WARNING: Removing unreachable block (ram,0x00483ded) */
/* WARNING: Removing unreachable block (ram,0x00483e0d) */
/* WARNING: Removing unreachable block (ram,0x00483dfa) */
/* WARNING: Removing unreachable block (ram,0x00483e19) */
/* WARNING: Removing unreachable block (ram,0x00483e1d) */
/* WARNING: Removing unreachable block (ram,0x00483e6b) */
/* WARNING: Removing unreachable block (ram,0x00483e8e) */
/* WARNING: Removing unreachable block (ram,0x0048447f) */
/* WARNING: Removing unreachable block (ram,0x00484588) */
/* WARNING: Removing unreachable block (ram,0x00484528) */
/* WARNING: Removing unreachable block (ram,0x0048457b) */
/* WARNING: Removing unreachable block (ram,0x00484619) */
/* WARNING: Removing unreachable block (ram,0x00484641) */
/* WARNING: Removing unreachable block (ram,0x0048464f) */
/* WARNING: Removing unreachable block (ram,0x00484676) */
/* WARNING: Removing unreachable block (ram,0x00484660) */
/* WARNING: Removing unreachable block (ram,0x0048466f) */
/* WARNING: Removing unreachable block (ram,0x00484668) */
/* WARNING: Removing unreachable block (ram,0x0048467b) */
/* WARNING: Removing unreachable block (ram,0x0048467f) */
/* WARNING: Removing unreachable block (ram,0x004846d9) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_00483a88(HWND param_1,int param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  code *pcVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 *local_a30;
  undefined4 local_a2c;
  code *local_a28;
  undefined4 local_a1c;
  undefined4 local_a0c;
  undefined4 local_8cc;
  undefined4 local_8bc;
  undefined4 local_8ac;
  undefined4 local_89c;
  uint local_7a4 [324];
  int *local_294;
  int *local_284;
  int *local_274;
  int *local_270;
  int *local_26c;
  LRESULT local_268;
  undefined1 *local_264;
  undefined4 local_260;
  int local_25c;
  int local_258;
  undefined1 *local_254;
  undefined4 local_250;
  int local_24c;
  int local_248;
  char *local_244;
  uint local_240;
  uint local_23c;
  int local_238;
  int local_234;
  char *local_230;
  char *local_22c;
  uint local_1e4;
  DWORD local_1e0;
  char *local_1dc;
  uint local_1d8;
  undefined1 *local_1d4;
  undefined4 local_1d0;
  int local_1cc;
  int local_1c8;
  undefined1 *local_1c4;
  int *local_1b8;
  char *local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  int *local_1a8;
  int *local_1a4;
  int *local_1a0;
  int *local_19c;
  uint local_198;
  undefined4 local_194;
  int *local_190;
  int *local_18c;
  uint local_188;
  int *local_184;
  undefined4 local_180;
  int *local_17c;
  undefined4 local_178;
  uint *local_16c;
  int *local_168;
  char *local_164;
  uint local_114;
  int *local_110;
  undefined4 *local_10c;
  uint local_108;
  undefined1 *local_104;
  int *local_100;
  int *local_fc;
  uint local_f8;
  int *local_f4;
  undefined1 *local_f0;
  int *local_ec;
  undefined4 local_e8;
  int local_e4;
  undefined4 local_e0;
  undefined2 local_d0;
  int local_c4;
  undefined1 local_94 [8];
  int local_8c;
  undefined1 local_84 [8];
  int local_7c;
  undefined1 local_74 [8];
  int local_6c;
  int *local_5c;
  undefined **local_54;
  int *local_44;
  undefined1 local_14 [8];
  int *local_c;
  
  FUN_004dce64(0x50357c);
  if (param_3 != 0) {
    SendMessageA(param_1,0x444,4,param_3);
  }
  bVar2 = FUN_00482bb8(param_2);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    SetWindowTextA(param_1,*(LPCSTR *)(param_2 + 8));
    goto LAB_00484b64;
  }
  local_d0 = 0x14;
  local_e4 = param_2;
  local_e8 = 0;
  local_c = (int *)0x0;
  iVar3 = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    local_f8 = *(uint *)(*(int *)(param_2 + 8) + -4);
    local_100 = FUN_004cf7b0(local_14,local_f8,local_f8);
    local_104 = local_14;
    local_294 = local_100 + 3;
    local_108 = local_f8;
    local_10c = *(undefined4 **)(local_e4 + 8);
    local_110 = local_294;
    local_fc = local_294;
    local_c = local_294;
    FUN_004dc7d4(local_294,local_10c,local_f8);
  }
  else {
    local_284 = *(int **)(param_2 + 8);
    local_f0 = local_14;
    local_f4 = local_284 + -3;
    local_ec = local_284;
    local_c = local_284;
    if (local_f4 != &DAT_00513d58) {
      *local_f4 = *local_f4 + 1;
    }
  }
  local_c4 = local_c4 + 1;
  local_d0 = 8;
  if (param_3 != 0) {
    local_168 = local_c;
    local_164 = thunk_FUN_004dcd18((char *)local_c,s___fonttbl_00501e23);
    local_114 = DAT_005140ac;
    if (local_164 != (char *)0x0) {
      local_114 = (int)local_164 - (int)local_c;
    }
    if (local_114 != 0xffffffff) {
      local_d0 = 8;
      uVar6 = 1;
      do {
        FUN_004e0344((undefined1 *)local_7a4,(byte *)s___f_d_005022ef);
        if (&stack0x00000000 == (undefined1 *)0x7a4) {
          uVar12 = 0;
          uVar11 = 0;
          uVar10 = 0;
          uVar9 = 1;
          pcVar8 = FUN_0041e688;
          uVar7 = 0;
          local_d0 = 0x74;
          local_16c = (uint *)FUN_004dc320((undefined1 *)0xffffff10,
                                           PTR_s_unexpected_NULL_pointer_in_funct_00516d30);
          FUN_004cf628(0x740,local_16c);
          local_c4 = local_c4 + 2;
          local_54 = &PTR_FUN_004ecaac;
          local_178 = 0;
          local_44 = (int *)0x0;
          local_d0 = 0x80;
          if (local_5c[-3] == -1 || local_5c[-3] + 1 < 0) {
            local_188 = local_5c[-1];
            local_190 = FUN_004cf7b0(0x758,local_188,local_188);
            local_1a0 = local_190 + 3;
            local_194 = 0x758;
            local_8ac = uRam00000760;
            local_198 = local_188;
            local_19c = local_5c;
            local_18c = local_1a0;
            local_44 = local_1a0;
            FUN_004dc7d4(local_1a0,local_5c,local_188);
          }
          else {
            local_17c = local_5c;
            local_44 = local_5c;
            local_180 = 0x758;
            local_89c = uRam00000760;
            local_184 = local_5c + -3;
            if (local_184 != &DAT_00513d58) {
              *local_184 = *local_184 + 1;
            }
          }
          local_d0 = 0x74;
          local_c4 = local_c4 + 1;
          if (local_5c != (int *)0x0) {
            if (local_5c[-3] != -1) {
              piVar5 = local_5c + -3;
              if (piVar5 == &DAT_00513d58) {
                iVar3 = 1;
              }
              else if (piVar5 == &DAT_00513d58) {
                iVar3 = 1;
              }
              else {
                *piVar5 = *piVar5 + -1;
                iVar3 = *piVar5 + 1;
              }
              if (iVar3 != 0) goto LAB_00484144;
            }
            local_1a4 = local_5c + -3;
            local_1a8 = local_5c + -3;
            FUN_004cc0bc();
            local_1ac = 0;
            local_5c = (int *)0x0;
            local_1b0 = 0x740;
            local_8bc = uRam00000748;
          }
LAB_00484144:
          local_d0 = 0x68;
          FUN_004e7cc4((uint *)&DAT_004113dc,(undefined4 *)0x750,uVar7,pcVar8,uVar9,uVar10,uVar11,
                       uVar12);
        }
        local_1b8 = local_c;
        local_1b4 = thunk_FUN_004dcd18((char *)local_c,(char *)local_7a4);
        uVar9 = DAT_005140ac;
        if (local_1b4 != (char *)0x0) {
          uVar9 = (int)local_1b4 - (int)local_c;
        }
        if (uVar9 == 0xffffffff) {
          local_d0 = 0xb0;
          FUN_004cf628((int)local_74,local_7a4);
          local_c4 = local_c4 + 1;
          local_d0 = 0xbc;
          FUN_004825dc((int)local_94,param_3);
          local_1c4 = local_94;
          local_c4 = local_c4 + 1;
          FUN_004d573c((int)local_74,(int)local_1c4);
          local_c4 = local_c4 + -1;
          if (local_8c != 0) {
            if (*(int *)(local_8c + -0xc) != -1) {
              piVar5 = (int *)(local_8c + -0xc);
              if (piVar5 == &DAT_00513d58) {
                iVar3 = 1;
              }
              else if (piVar5 == &DAT_00513d58) {
                iVar3 = 1;
              }
              else {
                *piVar5 = *piVar5 + -1;
                iVar3 = *piVar5 + 1;
              }
              if (iVar3 != 0) goto LAB_004842d2;
            }
            local_1c8 = local_8c + -0xc;
            local_1cc = local_8c + -0xc;
            FUN_004cc0bc();
            local_1d0 = 0;
            local_1d4 = local_94;
            local_8c = 0;
            local_8cc = 0;
          }
LAB_004842d2:
          local_d0 = 0xa4;
          FUN_004d5c40((int)local_74,*(uint *)(local_6c + -4),0,1,0x7d);
          FUN_004d5a8c((int)local_14,local_114 + 9,(int)local_74);
          FUN_004e0344((undefined1 *)local_7a4,&DAT_005022c6);
          FUN_004cf41c((int)local_74,local_7a4);
          if ((*(byte *)(param_3 + 7) & 0x80) != 0) {
            FUN_004e0344((undefined1 *)local_7a4,(byte *)s__fs_d_005022c0);
            local_1d8 = *(uint *)(local_6c + -4);
            local_1dc = FUN_004dc9f4(local_7a4);
            FUN_004cfad4((int)local_74,local_1d8,0,(uint)local_7a4,(uint)local_1dc,0,(uint)local_1dc
                        );
          }
          FUN_0047c804((int)local_74,*(uint *)(param_3 + 4) & 1,*(uint *)(param_3 + 8) & 1,
                       (uint *)&DAT_00501ddc);
          FUN_0047c804((int)local_74,*(uint *)(param_3 + 4) & 2,*(uint *)(param_3 + 8) & 2,
                       (uint *)&DAT_00501de7);
          FUN_0047c804((int)local_74,*(uint *)(param_3 + 4) & 8,*(uint *)(param_3 + 8) & 8,
                       (uint *)s__strike_00501ddf);
          FUN_0047c804((int)local_74,*(uint *)(param_3 + 4) & 4,*(uint *)(param_3 + 8) & 4,
                       (uint *)&DAT_00501dea);
          if (((*(byte *)(param_3 + 7) & 0x40) == 0) || ((*(byte *)(param_3 + 0xb) & 0x40) != 0)) {
            local_1e0 = GetSysColor(8);
          }
          else {
            local_1e0 = *(DWORD *)(param_3 + 0x14);
          }
          local_d0 = 0xd4;
          FUN_00482150((int)local_84);
          local_c4 = local_c4 + 1;
          local_d0 = 0xa4;
          local_1e4 = DAT_005140ac;
          if (local_114 <= (uint)local_c[-1]) {
            local_230 = (char *)((int)local_c + local_114);
            local_22c = thunk_FUN_004dcd18(local_230,s___colortbl_00501dab);
            local_1e4 = DAT_005140ac;
            if (local_22c != (char *)0x0) {
              local_1e4 = (int)local_22c - (int)local_c;
            }
          }
          if (local_1e4 == 0xffffffff) {
            local_1e4 = local_114;
          }
          local_234 = 0;
          local_d0 = 0xa4;
          local_238 = 0;
          uVar6 = local_1e4;
          goto LAB_004848fd;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 100);
    }
  }
LAB_00484a53:
  local_a30 = local_14;
  local_a2c = 0;
  local_a28 = FUN_0047c558;
  local_268 = SendMessageA(param_1,0x449,0x4002,(LPARAM)&local_a30);
  local_d0 = 8;
  local_c4 = local_c4 + -1;
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      local_26c = local_c + -3;
      if (local_26c == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (local_26c == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *local_26c = *local_26c + -1;
        iVar3 = *local_26c + 1;
      }
      if (iVar3 != 0) goto LAB_00484b64;
    }
    local_270 = local_c + -3;
    local_274 = local_c + -3;
    FUN_004cc0bc();
  }
LAB_00484b64:
  *in_FS_OFFSET = local_e0;
  return;
LAB_004848fd:
  if ((uint)local_c[-1] <= uVar6) goto LAB_00484909;
  local_23c = uVar6;
  if (1 < local_c[-3] + 1) {
    FUN_004d48d8((int)local_14);
  }
  if (local_c + -3 != &DAT_00513d58) {
    local_c[-3] = -1;
  }
  cVar1 = *(char *)((int)local_c + local_23c);
  if (cVar1 == ';') {
    local_234 = local_234 + 1;
  }
  else if (cVar1 == '{') {
    local_238 = local_238 + 1;
  }
  else if ((cVar1 == '}') && (local_238 = local_238 + -1, local_238 == 0)) {
    FUN_004e0344((undefined1 *)local_7a4,(byte *)s__cf_d_00502308);
    local_240 = *(uint *)(local_6c + -4);
    pcVar4 = FUN_004dc9f4(local_7a4);
    FUN_004cfad4((int)local_74,local_240,0,(uint)local_7a4,(uint)pcVar4,0,(uint)pcVar4);
    FUN_004d5a8c((int)local_14,uVar6 + 1,(int)local_74);
    if (local_1e4 == local_114) {
      local_244 = FUN_004dc9f4((uint *)s___colortbl_00501dab);
      FUN_004cfad4((int)local_84,0,0,0x501dab,(uint)local_244,0,(uint)local_244);
      FUN_004d5c40((int)local_84,*(uint *)(local_7c + -4),0,1,0x7d);
      FUN_004d5a8c((int)local_14,uVar6 + 1,(int)local_84);
    }
    else {
      FUN_004d5a8c((int)local_14,uVar6,(int)local_84);
    }
    goto LAB_00484909;
  }
  uVar6 = uVar6 + 1;
  goto LAB_004848fd;
LAB_00484909:
  local_c4 = local_c4 + -1;
  if (local_7c != 0) {
    if (*(int *)(local_7c + -0xc) != -1) {
      piVar5 = (int *)(local_7c + -0xc);
      if (piVar5 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar3 = *piVar5 + 1;
      }
      if (iVar3 != 0) goto LAB_0048499f;
    }
    local_248 = local_7c + -0xc;
    local_24c = local_7c + -0xc;
    FUN_004cc0bc();
    local_250 = 0;
    local_254 = local_84;
    local_7c = 0;
    local_a0c = 0;
  }
LAB_0048499f:
  local_d0 = 0xa4;
  local_c4 = local_c4 + -1;
  if (local_6c != 0) {
    if (*(int *)(local_6c + -0xc) != -1) {
      piVar5 = (int *)(local_6c + -0xc);
      if (piVar5 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar3 = *piVar5 + 1;
      }
      if (iVar3 != 0) goto LAB_00484a53;
    }
    local_258 = local_6c + -0xc;
    local_25c = local_6c + -0xc;
    FUN_004cc0bc();
    local_260 = 0;
    local_264 = local_74;
    local_6c = 0;
    local_a1c = 0;
  }
  goto LAB_00484a53;
}

