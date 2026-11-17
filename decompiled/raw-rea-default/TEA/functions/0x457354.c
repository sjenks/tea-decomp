// rea decompile_all
// name: FUN_00457354
// address: 0x457354
// body: available
// range: 0x457354-0x457e50 inclusive
// range: 0x457e57-0x45801c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00457399) */
/* WARNING: Removing unreachable block (ram,0x004573c5) */

void __cdecl FUN_00457354(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  undefined *local_14c;
  undefined *local_148;
  int *local_144;
  undefined1 *local_140;
  undefined4 local_13c;
  undefined *local_138;
  undefined *local_134;
  int *local_130;
  undefined1 *local_12c;
  undefined4 local_128;
  int local_124;
  int local_120;
  int local_11c;
  undefined4 local_118;
  undefined2 local_108;
  int local_fc;
  undefined1 local_f4 [8];
  int local_ec;
  undefined1 local_dc [4];
  int local_d8;
  int local_d4;
  undefined1 local_bc [4];
  int local_b8;
  int local_b4;
  int local_94;
  int local_84;
  undefined4 local_74;
  int local_70;
  int local_6c;
  undefined4 local_5c;
  int local_54 [8];
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  undefined *local_1c;
  undefined1 local_14 [8];
  undefined *local_c;
  
  FUN_004dce64(0x4f8d74);
  local_c = &DAT_00513d64;
  local_1c = &DAT_00513d64;
  local_fc = local_fc + 2;
  local_108 = 0x44;
  FUN_00458310((int)local_34,(int)param_1,param_3,(int)local_14,(int)local_24,&local_11c);
  local_fc = local_fc + 1;
  local_108 = 0x20;
  if (*(int *)(local_2c + -4) != 0) {
    if (((param_4 == 0x1d42) || (param_4 == 0x3160)) && (local_11c != 0)) {
      iVar1 = FUN_004581a0(param_1);
      if (iVar1 != 0) {
        local_158 = FUN_00466b18(param_1[0xe]);
        local_160 = param_1[0x1b4];
        local_15c = *(int *)(local_160 * 4 + param_1[0x1ad]);
        local_108 = 0x74;
        FUN_0040c84c(local_54,local_158,param_1[0x1b4],&local_168);
        local_fc = local_fc + 2;
        local_108 = 0x80;
        if ((*(int *)(local_15c + 0x20) == local_168) && (*(int *)(local_15c + 0x24) == local_164))
        {
          local_70 = 0;
          local_6c = 0;
          local_5c = 0;
          local_108 = 200;
          FUN_00473df0((int)local_f4);
          local_fc = local_fc + 6;
          FUN_00458090(&local_74,1,(int)local_f4);
          local_fc = local_fc + -2;
          if (local_84 != 0) {
            if (*(int *)(local_84 + -0xc) != -1) {
              piVar2 = (int *)(local_84 + -0xc);
              if (piVar2 == &DAT_00513d58) {
                iVar1 = 1;
              }
              else if (piVar2 == &DAT_00513d58) {
                iVar1 = 1;
              }
              else {
                *piVar2 = *piVar2 + -1;
                iVar1 = *piVar2 + 1;
              }
              if (iVar1 != 0) goto LAB_004579d1;
            }
            FUN_004cc0bc();
            local_84 = 0;
          }
LAB_004579d1:
          local_fc = local_fc + -1;
          if (local_94 != 0) {
            if (*(int *)(local_94 + -0xc) != -1) {
              piVar2 = (int *)(local_94 + -0xc);
              if (piVar2 == &DAT_00513d58) {
                iVar1 = 1;
              }
              else if (piVar2 == &DAT_00513d58) {
                iVar1 = 1;
              }
              else {
                *piVar2 = *piVar2 + -1;
                iVar1 = *piVar2 + 1;
              }
              if (iVar1 != 0) goto LAB_00457a8b;
            }
            FUN_004cc0bc();
            local_94 = 0;
          }
LAB_00457a8b:
          local_fc = local_fc + -1;
          FUN_0040b4f0(local_bc,local_b8,local_b4);
          FUN_004cc0bc();
          local_fc = local_fc + -1;
          FUN_0040b4f0(local_dc,local_d8,local_d4);
          FUN_004cc0bc();
          local_fc = local_fc + -1;
          if (local_ec != 0) {
            if (*(int *)(local_ec + -0xc) != -1) {
              piVar2 = (int *)(local_ec + -0xc);
              if (piVar2 == &DAT_00513d58) {
                iVar1 = 1;
              }
              else if (piVar2 == &DAT_00513d58) {
                iVar1 = 1;
              }
              else {
                *piVar2 = *piVar2 + -1;
                iVar1 = *piVar2 + 1;
              }
              if (iVar1 != 0) goto LAB_00457bb7;
            }
            FUN_004cc0bc();
            local_ec = 0;
          }
LAB_00457bb7:
          local_fc = local_fc + 1;
          local_108 = 0x80;
          FUN_0040ca04((int)local_54,local_11c,local_70);
          piVar2 = (int *)FUN_00466e80(param_1[0xe],(uint)(param_4 == 0x3160));
          FUN_004733d8(piVar2,(int)&local_74,(int)local_34,(int)local_14,(int)local_24,
                       local_15c + 0x28,local_158,param_1[0x1b4]);
          local_fc = local_fc + -1;
          FUN_0040b62c(&local_74,local_70,local_6c);
          FUN_004cc0bc();
          local_fc = local_fc + -2;
          FUN_0040c938((int)local_54,2);
          local_fc = local_fc + -1;
          if (local_2c != 0) {
            if (*(int *)(local_2c + -0xc) != -1) {
              piVar2 = (int *)(local_2c + -0xc);
              if (piVar2 == &DAT_00513d58) {
                iVar1 = 1;
              }
              else if (piVar2 == &DAT_00513d58) {
                iVar1 = 1;
              }
              else {
                *piVar2 = *piVar2 + -1;
                iVar1 = *piVar2 + 1;
              }
              if (iVar1 != 0) goto LAB_00457cfa;
            }
            FUN_004cc0bc();
            local_2c = 0;
          }
LAB_00457cfa:
          local_fc = local_fc + -1;
          if (local_1c != (undefined *)0x0) {
            if (*(int *)(local_1c + -0xc) != -1) {
              piVar2 = (int *)(local_1c + -0xc);
              if (piVar2 == &DAT_00513d58) {
                iVar1 = 1;
              }
              else if (piVar2 == &DAT_00513d58) {
                iVar1 = 1;
              }
              else {
                *piVar2 = *piVar2 + -1;
                iVar1 = *piVar2 + 1;
              }
              if (iVar1 != 0) goto LAB_00457d9f;
            }
            FUN_004cc0bc();
            local_1c = (undefined *)0x0;
          }
LAB_00457d9f:
          local_fc = local_fc + -1;
          if (local_c != (undefined *)0x0) {
            if (*(int *)(local_c + -0xc) != -1) {
              piVar2 = (int *)(local_c + -0xc);
              if (piVar2 == &DAT_00513d58) {
                iVar1 = 1;
              }
              else if (piVar2 == &DAT_00513d58) {
                iVar1 = 1;
              }
              else {
                *piVar2 = *piVar2 + -1;
                iVar1 = *piVar2 + 1;
              }
              if (iVar1 != 0) goto LAB_00457e44;
            }
            FUN_004cc0bc();
          }
LAB_00457e44:
          *in_FS_OFFSET = local_118;
          return;
        }
        (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
        local_fc = local_fc + -2;
        FUN_0040c938((int)local_54,2);
        local_fc = local_fc + -1;
        if (local_2c != 0) {
          if (*(int *)(local_2c + -0xc) != -1) {
            piVar2 = (int *)(local_2c + -0xc);
            if (piVar2 == &DAT_00513d58) {
              iVar1 = 1;
            }
            else if (piVar2 == &DAT_00513d58) {
              iVar1 = 1;
            }
            else {
              *piVar2 = *piVar2 + -1;
              iVar1 = *piVar2 + 1;
            }
            if (iVar1 != 0) goto LAB_0045778e;
          }
          FUN_004cc0bc();
          local_2c = 0;
        }
LAB_0045778e:
        local_fc = local_fc + -1;
        if (local_1c != (undefined *)0x0) {
          if (*(int *)(local_1c + -0xc) != -1) {
            piVar2 = (int *)(local_1c + -0xc);
            if (piVar2 == &DAT_00513d58) {
              iVar1 = 1;
            }
            else if (piVar2 == &DAT_00513d58) {
              iVar1 = 1;
            }
            else {
              *piVar2 = *piVar2 + -1;
              iVar1 = *piVar2 + 1;
            }
            if (iVar1 != 0) goto LAB_00457833;
          }
          FUN_004cc0bc();
          local_1c = (undefined *)0x0;
        }
LAB_00457833:
        local_fc = local_fc + -1;
        if (local_c != (undefined *)0x0) {
          if (*(int *)(local_c + -0xc) != -1) {
            piVar2 = (int *)(local_c + -0xc);
            if (piVar2 == &DAT_00513d58) {
              iVar1 = 1;
            }
            else if (piVar2 == &DAT_00513d58) {
              iVar1 = 1;
            }
            else {
              *piVar2 = *piVar2 + -1;
              iVar1 = *piVar2 + 1;
            }
            if (iVar1 != 0) goto LAB_004578d8;
          }
          FUN_004cc0bc();
        }
LAB_004578d8:
        *in_FS_OFFSET = local_118;
        return;
      }
      local_fc = local_fc + -1;
      if (local_2c != 0) {
        if (*(int *)(local_2c + -0xc) != -1) {
          piVar2 = (int *)(local_2c + -0xc);
          if (piVar2 == &DAT_00513d58) {
            iVar1 = 1;
          }
          else if (piVar2 == &DAT_00513d58) {
            iVar1 = 1;
          }
          else {
            *piVar2 = *piVar2 + -1;
            iVar1 = *piVar2 + 1;
          }
          if (iVar1 != 0) goto LAB_004574c5;
        }
        local_120 = local_2c + -0xc;
        local_124 = local_2c + -0xc;
        FUN_004cc0bc();
        local_128 = 0;
        local_12c = local_34;
        local_2c = 0;
      }
LAB_004574c5:
      local_fc = local_fc + -1;
      if (local_1c != (undefined *)0x0) {
        if (*(int *)(local_1c + -0xc) != -1) {
          local_130 = (int *)(local_1c + -0xc);
          if (local_130 == &DAT_00513d58) {
            iVar1 = 1;
          }
          else if (local_130 == &DAT_00513d58) {
            iVar1 = 1;
          }
          else {
            *local_130 = *local_130 + -1;
            iVar1 = *local_130 + 1;
          }
          if (iVar1 != 0) goto LAB_0045756a;
        }
        local_134 = local_1c + -0xc;
        local_138 = local_1c + -0xc;
        FUN_004cc0bc();
        local_13c = 0;
        local_140 = local_24;
        local_1c = (undefined *)0x0;
      }
LAB_0045756a:
      local_fc = local_fc + -1;
      if (local_c != (undefined *)0x0) {
        if (*(int *)(local_c + -0xc) != -1) {
          local_144 = (int *)(local_c + -0xc);
          if (local_144 == &DAT_00513d58) {
            iVar1 = 1;
          }
          else if (local_144 == &DAT_00513d58) {
            iVar1 = 1;
          }
          else {
            *local_144 = *local_144 + -1;
            iVar1 = *local_144 + 1;
          }
          if (iVar1 != 0) goto LAB_0045760f;
        }
        local_148 = local_c + -0xc;
        local_14c = local_c + -0xc;
        FUN_004cc0bc();
      }
LAB_0045760f:
      *in_FS_OFFSET = local_118;
      return;
    }
    FUN_0046524c(param_1[0xe],param_2,param_4,(int)local_34,0,0);
  }
  local_fc = local_fc + -1;
  if (local_2c != 0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      piVar2 = (int *)(local_2c + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00457efa;
    }
    FUN_004cc0bc();
    local_2c = 0;
  }
LAB_00457efa:
  local_108 = 0x20;
  local_fc = local_fc + -1;
  if (local_1c != (undefined *)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar2 = (int *)(local_1c + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00457f87;
    }
    FUN_004cc0bc();
    local_1c = (undefined *)0x0;
  }
LAB_00457f87:
  local_fc = local_fc + -1;
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar2 = (int *)(local_c + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0045800e;
    }
    FUN_004cc0bc();
  }
LAB_0045800e:
  *in_FS_OFFSET = local_118;
  return;
}

