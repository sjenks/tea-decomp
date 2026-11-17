// rea decompile_all
// name: FUN_00409594
// address: 0x409594
// body: available
// range: 0x409594-0x409bdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00409623) */
/* WARNING: Removing unreachable block (ram,0x004097dc) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffa610 : 0x004097ea */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_00409594(int param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined3 extraout_var;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int *piVar9;
  uint *puVar10;
  undefined4 *in_FS_OFFSET;
  uint local_59f8;
  int local_59d8;
  undefined4 local_59d4;
  undefined4 local_59b0;
  int local_59ac;
  int local_59a8;
  undefined4 local_5998;
  int local_5990 [8];
  undefined4 local_5970 [258];
  uint local_5568 [3770];
  undefined4 uStackY_1a80;
  int local_1170;
  int local_1164 [1028];
  int local_154;
  undefined1 local_14 [8];
  uint *local_c;
  int local_8;
  
  iVar5 = 5;
  do {
    local_8 = iVar5;
    iVar5 = local_8 + -1;
  } while (local_8 + -1 != 0);
  FUN_004dce64(0x4eba44);
  local_59d8 = 0;
  do {
    iVar5 = FUN_00408b14(param_1);
    if (iVar5 <= local_59d8) {
      *in_FS_OFFSET = local_59d4;
      return;
    }
    iVar5 = FUN_00408c68(param_1,local_59d8);
    if (iVar5 != 0) {
      local_c = (uint *)&DAT_00513d64;
      for (pbVar7 = *(byte **)(param_2 + 8);
          pbVar7 < (byte *)(*(int *)(param_2 + 8) + *(int *)(*(int *)(param_2 + 8) + -4));
          pbVar7 = pbVar7 + 1) {
        iVar5 = *(int *)(**(int **)(param_1 + 0xc) + 8 + (uint)*pbVar7 * 8);
        if (iVar5 != 0xff) {
          uVar2 = FUN_00408ea0(param_1,0,iVar5);
          FUN_004d5c40((int)local_14,local_c[-1],0,1,(char)uVar2);
        }
      }
      FUN_00434704(local_1164);
      FUN_00433594(local_1164,param_1,local_59d8,local_c,0);
      iVar5 = FUN_004346e4((int)local_1164);
      if (iVar5 != 0) {
        FUN_00411680(local_5970,param_1,local_59d8);
        bVar1 = FUN_00411790((int)local_5970,local_c[-1]);
        if (CONCAT31(extraout_var,bVar1) != 0) {
          iVar5 = *(int *)(param_3 + 8) - *(int *)(param_3 + 4);
          if (iVar5 < 0) {
            iVar5 = iVar5 + 0x7f;
          }
          uVar3 = iVar5 >> 7;
          FUN_00434878((int)local_1164,local_c[-1]);
          while (pcVar4 = (char *)FUN_004118a0((int)local_5970,(int)local_1164), *pcVar4 != -1) {
            iVar5 = FUN_0041229c((int)local_5970);
            if (iVar5 != -1) {
              local_59ac = 0;
              local_59a8 = 0;
              local_5998 = 0;
              local_59b0 = 0x100;
              uStackY_1a80 = 0x40982c;
              FUN_00408ef4(param_1,local_59d8,0,local_c[-1],iVar5,local_1170,(int)&local_59b0);
              local_59f8 = 0;
              while( true ) {
                iVar5 = local_59a8 - local_59ac;
                if (iVar5 < 0) {
                  iVar5 = iVar5 + 3;
                }
                if ((uint)(iVar5 >> 2) <= local_59f8) break;
                iVar5 = *(int *)(local_59f8 * 4 + local_59ac);
                uVar8 = uVar3;
                while( true ) {
                  iVar6 = *(int *)(param_3 + 8) - *(int *)(param_3 + 4);
                  if (iVar6 < 0) {
                    iVar6 = iVar6 + 0x7f;
                  }
                  if (((uint)(iVar6 >> 7) <= uVar8) ||
                     (*(int *)(uVar8 * 0x80 + *(int *)(param_3 + 4) + 0x78) == iVar5)) break;
                  uVar8 = uVar8 + 1;
                }
                iVar6 = *(int *)(param_3 + 8) - *(int *)(param_3 + 4);
                if (iVar6 < 0) {
                  iVar6 = iVar6 + 0x7f;
                }
                if ((uint)(iVar6 >> 7) <= uVar8) {
                  FUN_00409d44(param_3,uVar8 + 1);
                  *(int *)(uVar8 * 0x80 + *(int *)(param_3 + 4) + 0x10) = local_59d8;
                  *(int *)(uVar8 * 0x80 + *(int *)(param_3 + 4) + 0x78) = iVar5;
                  FUN_004cf41c(uVar8 * 0x80 + *(int *)(param_3 + 4) + 0x58,local_5568);
                }
                local_59f8 = local_59f8 + 1;
              }
              FUN_0040957c(&local_59b0,local_59ac,local_59a8);
              FUN_004cc0bc();
            }
          }
          FUN_0040c84c(local_5990,param_1,local_59d8,(undefined4 *)0x0);
          while( true ) {
            iVar5 = *(int *)(param_3 + 4);
            iVar6 = *(int *)(param_3 + 8) - iVar5;
            if (iVar6 < 0) {
              iVar6 = iVar6 + 0x7f;
            }
            if ((uint)(iVar6 >> 7) <= uVar3) break;
            FUN_0040ca04((int)local_5990,*(LONG *)(uVar3 * 0x80 + iVar5 + 0x78),uVar3 * 0x80 + iVar5
                        );
            uVar3 = uVar3 + 1;
          }
          FUN_0040c938((int)local_5990,2);
        }
        FUN_00411748((int)local_5970,2);
      }
      if (local_154 != 0) {
        if (*(int *)(local_154 + -0xc) != -1) {
          piVar9 = (int *)(local_154 + -0xc);
          if (piVar9 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else if (piVar9 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else {
            *piVar9 = *piVar9 + -1;
            iVar5 = *piVar9 + 1;
          }
          if (iVar5 != 0) goto LAB_00409aed;
        }
        FUN_004cc0bc();
        local_154 = 0;
      }
LAB_00409aed:
      FUN_00434ba4((int)local_1164,2);
      if (local_c != (uint *)0x0) {
        if (local_c[-3] != 0xffffffff) {
          puVar10 = local_c + -3;
          if (puVar10 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else if (puVar10 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else {
            *puVar10 = *puVar10 - 1;
            iVar5 = *puVar10 + 1;
          }
          if (iVar5 != 0) goto LAB_00409bb0;
        }
        FUN_004cc0bc();
        local_c = (uint *)0x0;
      }
    }
LAB_00409bb0:
    local_59d8 = local_59d8 + 1;
  } while( true );
}

