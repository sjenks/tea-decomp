// rea decompile_all
// name: FUN_0040dd78
// address: 0x40dd78
// body: available
// range: 0x40dd78-0x40e3e9 inclusive
// range: 0x40e3ef-0x40e3f7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte * FUN_0040dd78(int param_1,byte *param_2,byte *param_3,int param_4,int param_5)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined3 extraout_var;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 *in_FS_OFFSET;
  bool bVar9;
  int local_64;
  uint local_48;
  undefined4 local_40;
  byte local_1c [12];
  byte local_10 [12];
  
  FUN_0041f3fc(0x42cdd0);
  local_10[0] = DAT_00434684;
  if (DAT_00434684 == 1) {
    FUN_0040da30(local_10);
  }
  do {
    while( true ) {
      while( true ) {
        bVar2 = *param_2;
        pbVar8 = param_2 + 1;
        if (bVar2 == 0xfc) {
          local_10[0] = local_10[0] | 2;
          if (local_10[0] == 0) {
            DAT_00434684 = 0;
          }
          else if (local_10[0] == 1) {
            FUN_0040da50(local_10);
          }
          *in_FS_OFFSET = local_40;
          return pbVar8;
        }
        if (bVar2 != 0xf0) break;
        bVar2 = *pbVar8;
        param_2 = FUN_0040dc80(param_1,(int)param_2,(int)param_3);
        if (param_2 == (byte *)0x0) {
          pbVar8 = (byte *)0x0;
          if (local_10[0] == 0) {
            DAT_00434684 = 0;
          }
          else if (local_10[0] == 1) {
            FUN_0040da50(local_10);
          }
          *in_FS_OFFSET = local_40;
          return pbVar8;
        }
        param_3 = param_3 + bVar2;
      }
      if (bVar2 == 0xf1) break;
      if (bVar2 == 0xf3) {
        pbVar8 = param_2 + 2;
        bVar2 = param_3[param_5 + 0x80];
        while (param_2 = FUN_0040dd78(param_1,pbVar8,param_3 + param_5,param_4,0),
              param_2 == (byte *)0x0) {
          if ((int)(uint)bVar2 <= param_4) {
            pbVar8 = (byte *)0x0;
            if (local_10[0] == 0) {
              DAT_00434684 = 0;
            }
            else if (local_10[0] == 1) {
              FUN_0040da50(local_10);
            }
            *in_FS_OFFSET = local_40;
            return pbVar8;
          }
          param_4 = param_4 + 1;
        }
      }
      else if (bVar2 == 0xf2) {
        pbVar8 = param_2 + 2;
        while( true ) {
          bVar2 = param_3[0x80];
          for (; (param_2 = FUN_0040dd78(param_1,pbVar8,param_3,param_4,param_5),
                 param_2 == (byte *)0x0 && (param_4 < (int)(uint)bVar2)); param_4 = param_4 + 1) {
          }
          if (param_2 != (byte *)0x0) break;
          if (param_5 == 0) {
            pbVar8 = (byte *)0x0;
            if (local_10[0] == 0) {
              DAT_00434684 = 0;
            }
            else if (local_10[0] == 1) {
              FUN_0040da50(local_10);
            }
            *in_FS_OFFSET = local_40;
            return pbVar8;
          }
          param_3 = param_3 + 1;
          param_5 = param_5 + -1;
        }
      }
      else if (bVar2 == 0xf9) {
        bVar2 = *pbVar8;
        param_2 = FUN_0040ebec(param_1,(char *)(param_2 + 3),param_3,param_4,0,(uint)bVar2);
        if (param_2 == (byte *)0x0) {
          pbVar8 = (byte *)0x0;
          if (local_10[0] == 0) {
            DAT_00434684 = 0;
          }
          else if (local_10[0] == 1) {
            FUN_0040da50(local_10);
          }
          *in_FS_OFFSET = local_40;
          return pbVar8;
        }
        param_3 = param_3 + bVar2;
      }
      else if (bVar2 == 0xfb) {
        bVar2 = *pbVar8;
        if ((int)(uint)param_2[2] < param_5) {
          pbVar8 = (byte *)0x0;
          if (local_10[0] == 0) {
            DAT_00434684 = 0;
          }
          else if (local_10[0] == 1) {
            FUN_0040da50(local_10);
          }
          *in_FS_OFFSET = local_40;
          return pbVar8;
        }
        pbVar8 = FUN_0040ebec(param_1,(char *)(param_2 + 3),param_3,param_4,param_5,
                              (uint)bVar2 + param_5);
        if ((pbVar8 == (byte *)0x0) ||
           (param_2 = FUN_0040dd78(param_1,pbVar8,param_3 + (uint)bVar2 + param_5,param_4,0),
           param_2 == (byte *)0x0)) {
          pbVar8 = (byte *)0x0;
          if (local_10[0] == 0) {
            DAT_00434684 = 0;
          }
          else if (local_10[0] == 1) {
            FUN_0040da50(local_10);
          }
          *in_FS_OFFSET = local_40;
          return pbVar8;
        }
      }
      else if (bVar2 == 0xfa) {
        local_48 = (uint)*pbVar8;
        bVar2 = param_2[2];
        pbVar8 = param_2 + 3;
        local_64 = 0;
        while( true ) {
          local_1c[0] = DAT_00434684;
          if (DAT_00434684 == 1) {
            FUN_0040da30(local_1c);
          }
          pbVar7 = FUN_0040ebec(param_1,(char *)pbVar8,param_3,param_4,local_64,local_48);
          if ((pbVar7 != (byte *)0x0) &&
             (param_2 = FUN_0040dd78(param_1,pbVar7,param_3 + local_48,param_4,param_5),
             param_2 != (byte *)0x0)) break;
          local_48 = local_48 + 1;
          param_5 = param_5 + -1;
          local_64 = local_64 + 1;
          if ((param_5 < 0) || ((int)(uint)bVar2 < local_64)) {
            pbVar8 = (byte *)0x0;
            if (local_1c[0] == 0) {
              DAT_00434684 = 0;
            }
            else if (local_1c[0] == 1) {
              FUN_0040da50(local_1c);
            }
            if (local_10[0] == 0) {
              DAT_00434684 = 0;
            }
            else if (local_10[0] == 1) {
              FUN_0040da50(local_10);
            }
            *in_FS_OFFSET = local_40;
            return pbVar8;
          }
          if (local_1c[0] == 0) {
            DAT_00434684 = 0;
          }
          else if (local_1c[0] == 1) {
            FUN_0040da50(local_1c);
          }
        }
        local_1c[0] = local_1c[0] | 2;
        if (local_1c[0] == 0) {
          DAT_00434684 = 0;
        }
        else if (local_1c[0] == 1) {
          FUN_0040da50(local_1c);
        }
      }
      else {
        iVar1 = param_4 + 0x100;
        if (bVar2 == 0xff) {
          param_4 = param_4 + 1;
        }
        param_2 = param_2 + 2;
        if (*pbVar8 != param_3[iVar1]) {
          pbVar8 = (byte *)0x0;
          if (local_10[0] == 0) {
            DAT_00434684 = 0;
          }
          else if (local_10[0] == 1) {
            FUN_0040da50(local_10);
          }
          *in_FS_OFFSET = local_40;
          return pbVar8;
        }
      }
    }
    bVar2 = *pbVar8;
    param_2 = param_2 + 2;
    while (bVar4 = *param_2, bVar4 < 0xf0) {
      pbVar8 = param_2 + 1;
      if ((bVar4 & 0x40) == 0) {
        if ((bVar4 & 0x80) == 0) {
          param_2 = param_2 + 2;
          if (param_3[bVar4] != *pbVar8) {
            pbVar8 = (byte *)0x0;
            if (local_10[0] == 0) {
              DAT_00434684 = 0;
            }
            else if (local_10[0] == 1) {
              FUN_0040da50(local_10);
            }
            *in_FS_OFFSET = local_40;
            return pbVar8;
          }
        }
        else {
          param_2 = param_2 + 2;
          bVar9 = FUN_0040d97c((uint)*pbVar8,param_3[bVar4 & 0xffffff7f]);
          if (CONCAT31(extraout_var,bVar9) == 0) {
            pbVar8 = (byte *)0x0;
            if (local_10[0] == 0) {
              DAT_00434684 = 0;
            }
            else if (local_10[0] == 1) {
              FUN_0040da50(local_10);
            }
            *in_FS_OFFSET = local_40;
            return pbVar8;
          }
        }
      }
      else {
        param_2 = param_2 + 2;
        bVar9 = (bVar4 & 0x80) != 0;
        uVar5 = (uint)*pbVar8;
        do {
          uVar6 = uVar5 - 1;
          if ((int)uVar5 < 1) break;
          bVar3 = *param_2;
          param_2 = param_2 + 1;
          uVar5 = uVar6;
        } while (param_3[bVar4 & 0x3f] != bVar3);
        if (-1 < (int)uVar6 == bVar9) {
          pbVar8 = (byte *)0x0;
          if (local_10[0] == 0) {
            DAT_00434684 = 0;
          }
          else if (local_10[0] == 1) {
            FUN_0040da50(local_10);
          }
          *in_FS_OFFSET = local_40;
          return pbVar8;
        }
        if (!bVar9) {
          while (0 < (int)uVar6) {
            param_2 = param_2 + 1;
            uVar6 = uVar6 - 1;
          }
        }
      }
    }
    param_3 = param_3 + bVar2;
  } while( true );
}

