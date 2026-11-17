// rea decompile_all
// name: FUN_0040b6d8
// address: 0x40b6d8
// body: available
// range: 0x40b6d8-0x40c465 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0040b7df) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __cdecl
FUN_0040b6d8(int *param_1,undefined4 *param_2,int param_3,undefined4 *param_4,int param_5)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 *in_FS_OFFSET;
  int local_524 [251];
  char acStack_138 [20];
  undefined4 *local_124;
  int local_120;
  undefined1 local_11c;
  undefined1 local_11b;
  undefined1 local_11a;
  undefined1 local_119;
  undefined1 local_118;
  undefined1 local_117;
  char local_116;
  undefined1 local_115;
  int local_114;
  int local_110;
  byte local_109;
  char local_108 [16];
  undefined1 *local_f8;
  undefined4 local_f4;
  int local_f0;
  int local_ec;
  int local_e0;
  int local_d4;
  int local_d0;
  undefined4 *local_cc;
  int local_c8;
  int local_c4;
  uint local_c0;
  undefined1 local_bc;
  undefined1 local_bb;
  undefined1 local_ba;
  char local_b9;
  int local_b8;
  undefined1 *local_b4;
  undefined4 local_b0;
  undefined1 *local_ac;
  undefined1 *local_a8;
  int *local_a4;
  undefined1 *local_98;
  undefined1 *local_94;
  int *local_90;
  int local_8c;
  undefined1 *local_80;
  undefined1 *local_7c;
  int *local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined1 *local_68;
  undefined1 *local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  byte *local_4c;
  undefined4 local_48;
  undefined2 local_38;
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  undefined1 *local_c;
  
  FUN_0041f3fc(0x42c6d0);
  piVar8 = local_524;
  local_4c = (byte *)*param_2;
  local_50 = -1;
  local_54 = 0;
  local_58 = 0;
  do {
    *piVar8 = 0;
    local_58 = local_58 + 1;
    piVar8 = piVar8 + 1;
  } while (local_58 < 0x100);
  for (; *local_4c != 0x29; local_4c = local_4c + 1) {
    if (*local_4c == 0x5c) {
      pbVar1 = local_4c + 2;
      local_4c = local_4c + 1;
      if (*pbVar1 == 0) {
        *(undefined1 *)(param_1 + 0x409) = 0xd;
        *in_FS_OFFSET = local_48;
        return -1;
      }
    }
    else {
      if (*local_4c == 0x3b) {
        *(undefined1 *)(param_1 + 0x409) = 6;
        *in_FS_OFFSET = local_48;
        return -1;
      }
      if (*local_4c == 0) {
        *(undefined1 *)(param_1 + 0x409) = 7;
        *in_FS_OFFSET = local_48;
        return -1;
      }
      if (*local_4c == 0x28) {
        local_60 = 0;
        local_68 = local_14;
        local_64 = &DAT_0042fac0;
        local_c = &DAT_0042fac0;
        local_2c = local_2c + 1;
        local_38 = 0x20;
        local_4c = local_4c + 1;
        local_74 = FUN_0040a37c(param_1,(int *)&local_4c,(int)local_14,&local_6c,&local_70,param_4);
        if (local_74 == -1) {
          iVar7 = -1;
          local_2c = local_2c + -1;
          if (local_c != (undefined1 *)0x0) {
            if (*(int *)(local_c + -0xc) != -1) {
              local_78 = (int *)(local_c + -0xc);
              if (local_78 == &DAT_0042fab4) {
                iVar5 = 1;
              }
              else if (local_78 == &DAT_0042fab4) {
                iVar5 = 1;
              }
              else {
                *local_78 = *local_78 + -1;
                iVar5 = *local_78 + 1;
              }
              if (iVar5 != 0) goto LAB_0040b8ac;
            }
            local_7c = local_c + -0xc;
            local_80 = local_c + -0xc;
            FUN_00414f78();
          }
LAB_0040b8ac:
          *in_FS_OFFSET = local_48;
          return iVar7;
        }
        local_8c = FUN_0040dbb8(param_1,(int)local_14);
        if (local_8c < 0) {
          *(undefined1 *)(param_1 + 0x409) = 3;
          iVar7 = -1;
          local_2c = local_2c + -1;
          if (local_c != (undefined1 *)0x0) {
            if (*(int *)(local_c + -0xc) != -1) {
              local_90 = (int *)(local_c + -0xc);
              if (local_90 == &DAT_0042fab4) {
                iVar5 = 1;
              }
              else if (local_90 == &DAT_0042fab4) {
                iVar5 = 1;
              }
              else {
                *local_90 = *local_90 + -1;
                iVar5 = *local_90 + 1;
              }
              if (iVar5 != 0) goto LAB_0040b991;
            }
            local_94 = local_c + -0xc;
            local_98 = local_c + -0xc;
            FUN_00414f78();
          }
LAB_0040b991:
          *in_FS_OFFSET = local_48;
          return iVar7;
        }
        local_524[local_8c] = local_524[local_8c] + 1;
        local_54 = local_54 + local_74;
        local_2c = local_2c + -1;
        if (local_c != (undefined1 *)0x0) {
          if (*(int *)(local_c + -0xc) != -1) {
            local_a4 = (int *)(local_c + -0xc);
            if (local_a4 == &DAT_0042fab4) {
              iVar7 = 1;
            }
            else if (local_a4 == &DAT_0042fab4) {
              iVar7 = 1;
            }
            else {
              *local_a4 = *local_a4 + -1;
              iVar7 = *local_a4 + 1;
            }
            if (iVar7 != 0) goto LAB_0040ba63;
          }
          local_a8 = local_c + -0xc;
          local_ac = local_c + -0xc;
          FUN_00414f78();
          local_b0 = 0;
          local_c = (undefined1 *)0x0;
          local_b4 = local_14;
        }
LAB_0040ba63:
        local_38 = 0;
      }
    }
  }
  piVar8 = local_524;
  local_58 = 0;
  do {
    if (0 < *piVar8) {
      local_b8 = FUN_0040dc68((int)param_1,(byte)local_58);
      local_b9 = **(char **)(local_b8 + 8);
      if (local_b9 == -6) {
        local_50 = *(int *)(*(int *)(param_3 + 8) + -4);
      }
      uVar4 = FUN_0040a360((int)param_1,0xfa);
      local_ba = (undefined1)uVar4;
      FUN_0041ae90(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,local_ba);
      local_bb = (undefined1)*piVar8;
      FUN_0041ae90(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,local_bb);
      local_bc = (byte)local_58;
      FUN_0041ae90(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(byte)local_58);
    }
    *piVar8 = 0;
    local_58 = local_58 + 1;
    piVar8 = piVar8 + 1;
  } while (local_58 < 0x100);
  for (local_4c = (byte *)*param_2; (bVar2 = *local_4c, bVar2 != 0 && (bVar2 != 0x29));
      local_4c = local_4c + 1) {
    if (bVar2 == 0x5c) {
      local_4c = local_4c + 1;
    }
    else if (*local_4c == 0x28) {
      iVar7 = 1;
      do {
        pbVar1 = local_4c + 1;
        if ((*pbVar1 == 0x5c) && (local_4c[2] != 0)) {
          pbVar1 = local_4c + 3;
        }
        local_4c = pbVar1;
        bVar2 = *local_4c;
        if (bVar2 != 0) {
          if (bVar2 == 0x28) {
            iVar7 = iVar7 + 1;
          }
          else if (bVar2 == 0x29) {
            iVar7 = iVar7 + -1;
          }
        }
      } while (0 < iVar7);
    }
    else {
      if (*local_4c == 0x5d) {
        *(undefined1 *)(param_1 + 0x409) = 9;
        *in_FS_OFFSET = local_48;
        return -1;
      }
      if (*local_4c == 0x5b) {
        pbVar1 = local_4c + 1;
        if (*pbVar1 == 0x5e) {
          local_4c = local_4c + 1;
        }
        local_c0 = (uint)(*pbVar1 != 0x5e);
        if (local_4c[1] == 0x5d) {
          *(undefined1 *)(param_1 + 0x409) = 0xe;
          *in_FS_OFFSET = local_48;
          return -1;
        }
        local_38 = 0x50;
        local_1c = 0;
        FUN_0041b484((int)local_24,0x100);
        local_2c = local_2c + 1;
        local_38 = 0x68;
        while( true ) {
          local_4c = local_4c + 1;
          pcVar9 = thunk_FUN_0041ef2c(PTR_s________0042c4bc,*local_4c);
          if (pcVar9 != (char *)0x0) break;
          if ((*local_4c == 0x5c) && (local_4c[1] != 0)) {
            local_4c = local_4c + 1;
          }
          local_c4 = *(int *)(*(int *)(*(int *)(param_1[1099] + 0xc) + param_1[0x44c] * 4) + 8 +
                             (uint)*local_4c * 8);
          local_38 = 0x68;
          if (local_c4 == 0xff) break;
          local_c8 = local_c4;
          if (1 < *(int *)(local_1c + -0xc) + 1) {
            FUN_0041a7fc((int)local_24);
          }
          local_cc = (undefined4 *)(local_1c + -0xc);
          if (local_cc != &DAT_0042fab4) {
            *local_cc = 0xffffffff;
          }
          *(undefined1 *)(local_1c + local_c8) = (undefined1)local_c0;
        }
        iVar7 = FUN_0040dbb8(param_1,(int)local_24);
        if (iVar7 < 0) {
          *(undefined1 *)(param_1 + 0x409) = 3;
          iVar7 = -1;
          local_2c = local_2c + -1;
          if (local_1c != 0) {
            if (*(int *)(local_1c + -0xc) != -1) {
              piVar8 = (int *)(local_1c + -0xc);
              if (piVar8 == &DAT_0042fab4) {
                iVar5 = 1;
              }
              else if (piVar8 == &DAT_0042fab4) {
                iVar5 = 1;
              }
              else {
                *piVar8 = *piVar8 + -1;
                iVar5 = *piVar8 + 1;
              }
              if (iVar5 != 0) goto LAB_0040bdc9;
            }
            local_d0 = local_1c + -0xc;
            local_d4 = local_1c + -0xc;
            FUN_00414f78();
          }
LAB_0040bdc9:
          *in_FS_OFFSET = local_48;
          return iVar7;
        }
        local_524[iVar7] = local_524[iVar7] + 1;
        if (*local_4c != 0x5d) {
          if ((*local_4c == 0x29) && (local_4c[1] == 0)) {
            *(undefined1 *)(param_1 + 0x409) = 5;
          }
          else {
            *(undefined1 *)(param_1 + 0x409) = 2;
          }
          iVar7 = -1;
          local_2c = local_2c + -1;
          if (local_1c != 0) {
            if (*(int *)(local_1c + -0xc) != -1) {
              piVar8 = (int *)(local_1c + -0xc);
              if (piVar8 == &DAT_0042fab4) {
                iVar5 = 1;
              }
              else if (piVar8 == &DAT_0042fab4) {
                iVar5 = 1;
              }
              else {
                *piVar8 = *piVar8 + -1;
                iVar5 = *piVar8 + 1;
              }
              if (iVar5 != 0) goto LAB_0040be97;
            }
            local_e0 = local_1c + -0xc;
            FUN_00414f78();
          }
LAB_0040be97:
          *in_FS_OFFSET = local_48;
          return iVar7;
        }
        local_54 = local_54 + 1;
        local_2c = local_2c + -1;
        if (local_1c != 0) {
          if (*(int *)(local_1c + -0xc) != -1) {
            piVar8 = (int *)(local_1c + -0xc);
            if (piVar8 == &DAT_0042fab4) {
              iVar7 = 1;
            }
            else if (piVar8 == &DAT_0042fab4) {
              iVar7 = 1;
            }
            else {
              *piVar8 = *piVar8 + -1;
              iVar7 = *piVar8 + 1;
            }
            if (iVar7 != 0) goto LAB_0040bf43;
          }
          local_ec = local_1c + -0xc;
          local_f0 = local_1c + -0xc;
          FUN_00414f78();
          local_f4 = 0;
          local_1c = 0;
          local_f8 = local_24;
        }
LAB_0040bf43:
        local_38 = 0;
      }
    }
  }
  piVar8 = local_524;
  local_58 = 0;
  do {
    if (0 < *piVar8) {
      uVar4 = FUN_0040a360((int)param_1,0xf7);
      local_108[0xf] = (char)uVar4;
      FUN_0041ae90(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,local_108[0xf]);
      local_108[0xe] = (char)*piVar8;
      FUN_0041ae90(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,local_108[0xe]);
      local_108[0xd] = (byte)local_58;
      FUN_0041ae90(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(byte)local_58);
    }
    *piVar8 = 0;
    local_58 = local_58 + 1;
    piVar8 = piVar8 + 1;
  } while (local_58 < 0x100);
  pcVar9 = local_108;
  local_4c = (byte *)*param_2;
  local_58 = 0;
  do {
    *pcVar9 = '\0';
    local_58 = local_58 + 1;
    pcVar9 = pcVar9 + 1;
  } while (local_58 < 10);
  for (; (bVar2 = *local_4c, bVar2 != 0 && (bVar2 != 0x29)); local_4c = local_4c + 1) {
    if (bVar2 == 0x28) {
      iVar7 = 1;
      do {
        pbVar1 = local_4c + 1;
        if ((*pbVar1 == 0x5c) && (local_4c[2] != 0)) {
          pbVar1 = local_4c + 3;
        }
        local_4c = pbVar1;
        bVar2 = *local_4c;
        if (bVar2 != 0) {
          if (bVar2 == 0x28) {
            iVar7 = iVar7 + 1;
          }
          else if (bVar2 == 0x29) {
            iVar7 = iVar7 + -1;
          }
        }
        pbVar1 = local_4c;
      } while (0 < iVar7);
    }
    else {
      pbVar1 = local_4c;
      if (*local_4c == 0x5b) {
        while (local_4c = pbVar1, pbVar1 = local_4c + 1, *pbVar1 != 0x5d) {
          if ((*pbVar1 == 0x5c) && (local_4c[2] != 0)) {
            pbVar1 = local_4c + 2;
          }
        }
      }
      else if (*local_4c == 0x2a) {
        local_50 = -1;
        *param_4 = 15000;
      }
      else {
        bVar2 = *local_4c;
        if ((bVar2 < 0x30) || (0x39 < bVar2)) {
          if (bVar2 != 0x20) {
            bVar3 = false;
            if ((*local_4c == 0x5c) && (local_4c[1] != 0)) {
              bVar3 = true;
              local_4c = local_4c + 1;
            }
            local_109 = *local_4c;
            local_110 = param_1[0x44c];
            local_114 = *(int *)(*(int *)(*(int *)(param_1[1099] + 0xc) + param_1[0x44c] * 4) + 8 +
                                (uint)*local_4c * 8);
            if ((local_114 == 0xff) && ((bVar3 || ((*local_4c != 0x2e && (*local_4c != 0x3f)))))) {
              *(undefined1 *)(param_1 + 0x409) = 0xb;
              *in_FS_OFFSET = local_48;
              return -1;
            }
            if ((local_114 == 0xff) || ((!bVar3 && ((*local_4c == 0x2e || (*local_4c == 0x3f)))))) {
              FUN_0040a360((int)param_1,0xf2);
            }
            else {
              local_524[local_114] = local_524[local_114] + 1;
            }
            local_54 = local_54 + 1;
            pbVar1 = local_4c;
          }
        }
        else {
          acStack_138[bVar2] = acStack_138[bVar2] + '\x01';
          local_54 = local_54 + 1;
          pbVar1 = local_4c;
        }
      }
    }
    local_4c = pbVar1;
  }
  pcVar9 = local_108;
  local_58 = 0;
  do {
    if (*pcVar9 != '\0') break;
    local_58 = local_58 + 1;
    pcVar9 = pcVar9 + 1;
  } while (local_58 < 10);
  if (local_58 < 10) {
    uVar4 = FUN_0040a360((int)param_1,0xf8);
    local_115 = (undefined1)uVar4;
    FUN_0041ae90(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,local_115);
    local_58 = 0;
    pcVar9 = local_108;
    do {
      local_116 = *pcVar9;
      FUN_0041ae90(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,local_116);
      local_58 = local_58 + 1;
      pcVar9 = pcVar9 + 1;
    } while (local_58 < 10);
  }
  iVar7 = 0;
  local_5c = 0;
  local_58 = 0;
  piVar8 = local_524;
  do {
    iVar5 = *piVar8;
    if (0 < iVar5) {
      local_5c = local_5c + 1;
    }
    if (iVar7 < iVar5) {
      iVar7 = iVar5;
    }
    local_58 = local_58 + 1;
    piVar8 = piVar8 + 1;
  } while (local_58 < 0x100);
  if (iVar7 < 2) {
    if (iVar7 == 1) {
      uVar4 = FUN_0040a360((int)param_1,0xf5);
      local_11a = (undefined1)uVar4;
      FUN_0041ae90(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,local_11a);
      local_11b = (undefined1)local_5c;
      FUN_0041ae90(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(undefined1)local_5c);
      local_58 = 0;
      piVar8 = local_524;
      do {
        if (0 < *piVar8) {
          local_11c = (byte)local_58;
          FUN_0041ae90(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(byte)local_58);
        }
        local_58 = local_58 + 1;
        piVar8 = piVar8 + 1;
      } while (local_58 < 0x100);
    }
  }
  else {
    uVar4 = FUN_0040a360((int)param_1,0xf6);
    local_117 = (undefined1)uVar4;
    FUN_0041ae90(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,local_117);
    local_58 = 0;
    piVar8 = local_524;
    do {
      if (0 < *piVar8) {
        local_118 = (undefined1)*piVar8;
        FUN_0041ae90(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,local_118);
        local_119 = (byte)local_58;
        FUN_0041ae90(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(byte)local_58);
      }
      local_58 = local_58 + 1;
      piVar8 = piVar8 + 1;
    } while (local_58 < 0x100);
  }
  *param_2 = local_4c;
  if ((-1 < local_50) && (param_5 == 0)) {
    local_120 = local_50;
    if (1 < *(int *)(*(int *)(param_3 + 8) + -0xc) + 1) {
      FUN_0041a7fc(param_3);
    }
    local_124 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
    if (local_124 != &DAT_0042fab4) {
      *local_124 = 0xffffffff;
    }
    puVar6 = (undefined1 *)(*(int *)(param_3 + 8) + local_120);
    uVar4 = FUN_0040a360((int)param_1,0xfb);
    *puVar6 = (char)uVar4;
  }
  *in_FS_OFFSET = local_48;
  return local_54;
}

