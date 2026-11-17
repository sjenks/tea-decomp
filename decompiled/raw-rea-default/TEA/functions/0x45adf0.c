// rea decompile_all
// name: FUN_0045adf0
// address: 0x45adf0
// body: available
// range: 0x45adf0-0x45b7f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_0045adf0(int param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  int iVar5;
  int iVar6;
  undefined4 local_d0;
  undefined1 local_ac [8];
  int local_a4;
  undefined1 local_9c [8];
  int local_94;
  undefined1 local_8c [8];
  int local_84;
  undefined1 local_7c [8];
  int local_74;
  undefined1 local_6c [8];
  int local_64;
  undefined1 local_5c [8];
  int local_54;
  undefined1 local_4c [8];
  int local_44;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  undefined1 local_1c [8];
  int local_14;
  int local_c [2];
  
  FUN_004dce64(0x4f982c);
  iVar6 = 0;
  iVar5 = 1;
  FUN_004649b0((int)local_1c);
  FUN_0044e83c(local_c,(int)local_1c,iVar5,iVar6);
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar3 = (int *)(local_14 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar5 = *piVar3 + 1;
      }
      if (iVar5 != 0) goto LAB_0045aed8;
    }
    FUN_004cc0bc();
    local_14 = 0;
  }
LAB_0045aed8:
  uVar4 = 0;
  while( true ) {
    iVar5 = *(int *)(param_1 + 0xc88) - *(int *)(param_1 + 0xc84);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 3;
    }
    if ((uint)(iVar5 >> 2) <= uVar4) break;
    piVar3 = (int *)(uVar4 * 4 + *(int *)(param_1 + 0xc84));
    if (*piVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*piVar3 + 8);
    }
    puVar1 = FUN_004dd744(*piVar3,iVar5,(int *)&DAT_0040299c,(int *)&DAT_0045a588,0);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_004677b8((int)puVar1);
      FUN_004cf628((int)local_2c,(uint *)s_QuickReference_004f75d8);
      FUN_0044eca8((int)local_c,(int)local_2c);
      if (local_24 != 0) {
        if (*(int *)(local_24 + -0xc) != -1) {
          piVar3 = (int *)(local_24 + -0xc);
          if (piVar3 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else if (piVar3 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else {
            *piVar3 = *piVar3 + -1;
            iVar5 = *piVar3 + 1;
          }
          if (iVar5 != 0) goto LAB_0045b019;
        }
        FUN_004cc0bc();
        local_24 = 0;
      }
    }
LAB_0045b019:
    piVar3 = (int *)(uVar4 * 4 + *(int *)(param_1 + 0xc84));
    if (*piVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*piVar3 + 8);
    }
    puVar1 = FUN_004dd744(*piVar3,iVar5,(int *)&DAT_0040299c,(int *)&DAT_0045b7f4,0);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_0047af2c((int)puVar1);
      FUN_004cf628((int)local_3c,(uint *)s_StartupTips_004f75e7);
      FUN_0044eca8((int)local_c,(int)local_3c);
      if (local_34 != 0) {
        if (*(int *)(local_34 + -0xc) != -1) {
          piVar3 = (int *)(local_34 + -0xc);
          if (piVar3 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else if (piVar3 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else {
            *piVar3 = *piVar3 + -1;
            iVar5 = *piVar3 + 1;
          }
          if (iVar5 != 0) goto LAB_0045b14a;
        }
        FUN_004cc0bc();
        local_34 = 0;
      }
    }
LAB_0045b14a:
    uVar4 = uVar4 + 1;
  }
  FUN_004cf628((int)local_4c,(uint *)s_WindowTopMost_004f767b);
  FUN_0044eca8((int)local_c,(int)local_4c);
  if (local_44 != 0) {
    if (*(int *)(local_44 + -0xc) != -1) {
      piVar3 = (int *)(local_44 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar5 = *piVar3 + 1;
      }
      if (iVar5 != 0) goto LAB_0045b23d;
    }
    FUN_004cc0bc();
    local_44 = 0;
  }
LAB_0045b23d:
  FUN_004cf628((int)local_5c,(uint *)s_PaneOrientation_004f7689);
  FUN_0044eca8((int)local_c,(int)local_5c);
  if (local_54 != 0) {
    if (*(int *)(local_54 + -0xc) != -1) {
      piVar3 = (int *)(local_54 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar5 = *piVar3 + 1;
      }
      if (iVar5 != 0) goto LAB_0045b31a;
    }
    FUN_004cc0bc();
    local_54 = 0;
  }
LAB_0045b31a:
  puVar2 = FUN_0041238c(*(int *)(param_1 + 0x38),*(int *)(param_1 + 0x60));
  FUN_00412830((int)puVar2);
  FUN_004cf628((int)local_6c,(uint *)s_PrintingMarginUnits_004f7619);
  FUN_0044eca8((int)local_c,(int)local_6c);
  if (local_64 != 0) {
    if (*(int *)(local_64 + -0xc) != -1) {
      piVar3 = (int *)(local_64 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar5 = *piVar3 + 1;
      }
      if (iVar5 != 0) goto LAB_0045b40e;
    }
    FUN_004cc0bc();
    local_64 = 0;
  }
LAB_0045b40e:
  FUN_004cf628((int)local_7c,(uint *)s_PrintingLeftMargin_004f762d);
  FUN_0044eca8((int)local_c,(int)local_7c);
  if (local_74 != 0) {
    if (*(int *)(local_74 + -0xc) != -1) {
      piVar3 = (int *)(local_74 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar5 = *piVar3 + 1;
      }
      if (iVar5 != 0) goto LAB_0045b4eb;
    }
    FUN_004cc0bc();
    local_74 = 0;
  }
LAB_0045b4eb:
  FUN_004cf628((int)local_8c,(uint *)s_PrintingRightMargin_004f7640);
  FUN_0044eca8((int)local_c,(int)local_8c);
  if (local_84 != 0) {
    if (*(int *)(local_84 + -0xc) != -1) {
      piVar3 = (int *)(local_84 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar5 = *piVar3 + 1;
      }
      if (iVar5 != 0) goto LAB_0045b5d1;
    }
    FUN_004cc0bc();
    local_84 = 0;
  }
LAB_0045b5d1:
  FUN_004cf628((int)local_9c,(uint *)s_PrintingTopMargin_004f7654);
  FUN_0044eca8((int)local_c,(int)local_9c);
  if (local_94 != 0) {
    if (*(int *)(local_94 + -0xc) != -1) {
      piVar3 = (int *)(local_94 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar5 = *piVar3 + 1;
      }
      if (iVar5 != 0) goto LAB_0045b6c9;
    }
    FUN_004cc0bc();
    local_94 = 0;
  }
LAB_0045b6c9:
  FUN_004cf628((int)local_ac,(uint *)s_PrintingBottomMargin_004f7666);
  FUN_0044eca8((int)local_c,(int)local_ac);
  if (local_a4 != 0) {
    if (*(int *)(local_a4 + -0xc) != -1) {
      piVar3 = (int *)(local_a4 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar5 = *piVar3 + 1;
      }
      if (iVar5 != 0) goto LAB_0045b7c1;
    }
    FUN_004cc0bc();
    local_a4 = 0;
  }
LAB_0045b7c1:
  FUN_0044e920((int)local_c,2);
  *in_FS_OFFSET = local_d0;
  return;
}

