// rea decompile_all
// name: FUN_00424c28
// address: 0x424c28
// body: available
// range: 0x424c28-0x4258e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00424ccb) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * __cdecl FUN_00424c28(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *in_FS_OFFSET;
  bool bVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int local_180;
  undefined4 local_b0;
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
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c [2];
  
  FUN_004dce64(0x4f160c);
  FUN_004cf628((int)(param_1 + 4),(uint *)s_example_004f0fc8);
  param_1[10] = 0;
  param_1[10] = (int)&DAT_00513d64;
  param_1[0xc] = param_2;
  local_10 = FUN_004cc0f0();
  if (local_10 != 0) {
    FUN_004cf628(local_10,(uint *)s_LookupWebSearchEnabled_004f0fd0);
    FUN_004cf628(local_10 + 0x10,(uint *)s_LookupWebSearchLabel_004f0fe7);
    FUN_004cf628(local_10 + 0x20,(uint *)s_LookupWebSearchScript_004f0ffc);
    FUN_004cf628(local_10 + 0x30,(uint *)(s_LookupTestWord_004f0e1c + 0xe));
    FUN_004cc3c4((int *)(local_10 + 0x40),0x38,4,1,FUN_004258e8);
  }
  *param_1 = local_10;
  local_14 = FUN_004cc0f0();
  if (local_14 != 0) {
    FUN_004cf628(local_14,(uint *)s_LookupDDEEnabled_004f1012);
    FUN_004cf628(local_14 + 0x10,(uint *)s_LookupDDELabel_004f1023);
    FUN_004cf628(local_14 + 0x20,(uint *)s_LookupDDEService_004f1032);
    FUN_004cf628(local_14 + 0x30,(uint *)s_DDETopic_004f1043);
    FUN_004cc3c4((int *)(local_14 + 0x40),0x38,4,1,FUN_004258e8);
  }
  param_1[1] = local_14;
  local_18 = FUN_004cc0f0();
  if (local_18 != 0) {
    FUN_004cf628(local_18,(uint *)s_LookupMessageEnabled_004f104c);
    FUN_004cf628(local_18 + 0x10,(uint *)s_LookupMessageLabel_004f1061);
    FUN_004cf628(local_18 + 0x20,(uint *)s_LookupMessageWindow_004f1074);
    FUN_004cf628(local_18 + 0x30,(uint *)s_MessageCommand_004f1088);
    FUN_004cc3c4((int *)(local_18 + 0x40),0x38,4,1,FUN_004258e8);
  }
  param_1[2] = local_18;
  local_1c = FUN_004cc0f0();
  if (local_1c != 0) {
    FUN_004cf628(local_1c,(uint *)s_LookupExecEnabled_004f1097);
    FUN_004cf628(local_1c + 0x10,(uint *)s_LookupExecLabel_004f10a9);
    FUN_004cf628(local_1c + 0x20,(uint *)s_LookupExecProgram_004f10b9);
    FUN_004cf628(local_1c + 0x30,(uint *)s_ExecEncoding_004f10cb);
    FUN_004cc3c4((int *)(local_1c + 0x40),0x38,4,1,FUN_004258e8);
  }
  param_1[3] = local_1c;
  iVar11 = 0;
  iVar10 = 0;
  FUN_004649b0((int)local_2c);
  FUN_0044e83c(local_c,(int)local_2c,iVar10,iVar11);
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar1 = (int *)(local_24 + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar10 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar10 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar10 = *piVar1 + 1;
      }
      if (iVar10 != 0) goto LAB_00425165;
    }
    FUN_004cc0bc();
    local_24 = 0;
  }
LAB_00425165:
  piVar1 = param_1 + 4;
  FUN_004cf628((int)local_3c,(uint *)s_LookupTestWord_004f0e1c);
  uVar2 = FUN_0044e94c((int)local_c,(int)local_3c,(int)piVar1);
  bVar8 = (uVar2 & 0xff) == 0;
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar1 = (int *)(local_34 + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar10 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar10 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar10 = *piVar1 + 1;
      }
      if (iVar10 != 0) goto LAB_0042526f;
    }
    FUN_004cc0bc();
    local_34 = 0;
  }
LAB_0042526f:
  local_180 = 0;
  do {
    iVar10 = param_1[local_180];
    iVar11 = 0;
    do {
      iVar6 = iVar11 * 0x38 + iVar10;
      puVar7 = (undefined4 *)(iVar6 + 0x40);
      iVar3 = local_180 * 4 + iVar11;
      if ((bVar8) && (iVar3 < 9)) {
        puVar5 = (undefined4 *)(&PTR_PTR_004f0df0)[iVar3];
      }
      else {
        puVar5 = (undefined4 *)0x0;
      }
      FUN_004248a4((int)local_4c,iVar10 + 0x10);
      uVar4 = FUN_0044e94c((int)local_c,(int)local_4c,iVar6 + 0x48);
      if (((char)uVar4 == '\0') && (puVar5 != (undefined4 *)0x0)) {
        FUN_004cf41c(iVar6 + 0x48,(uint *)*puVar5);
      }
      FUN_004248a4((int)local_5c,iVar10 + 0x20);
      FUN_004cf384((int)local_4c,(int)local_5c);
      if (local_54 != 0) {
        if (*(int *)(local_54 + -0xc) != -1) {
          piVar1 = (int *)(local_54 + -0xc);
          if (piVar1 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else if (piVar1 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else {
            *piVar1 = *piVar1 + -1;
            iVar3 = *piVar1 + 1;
          }
          if (iVar3 != 0) goto LAB_00425423;
        }
        FUN_004cc0bc();
        local_54 = 0;
      }
LAB_00425423:
      uVar4 = FUN_0044e94c((int)local_c,(int)local_4c,iVar6 + 0x58);
      if (((char)uVar4 == '\0') && (puVar5 != (undefined4 *)0x0)) {
        FUN_004cf41c(iVar6 + 0x58,(uint *)puVar5[1]);
      }
      FUN_004248a4((int)local_6c,iVar10 + 0x30);
      FUN_004cf384((int)local_4c,(int)local_6c);
      if (local_64 != 0) {
        if (*(int *)(local_64 + -0xc) != -1) {
          piVar1 = (int *)(local_64 + -0xc);
          if (piVar1 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else if (piVar1 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else {
            *piVar1 = *piVar1 + -1;
            iVar3 = *piVar1 + 1;
          }
          if (iVar3 != 0) goto LAB_00425549;
        }
        FUN_004cc0bc();
        local_64 = 0;
      }
LAB_00425549:
      uVar4 = FUN_0044e94c((int)local_c,(int)local_4c,iVar6 + 0x68);
      if ((char)uVar4 == '\0') {
        if (puVar5 != (undefined4 *)0x0) {
          FUN_004cf41c(iVar6 + 0x68,(uint *)puVar5[2]);
        }
        if (local_180 == 3) {
          FUN_004cf41c(iVar6 + 0x68,(uint *)&DAT_004f10d8);
        }
      }
      FUN_004248a4((int)local_7c,iVar10);
      FUN_004cf384((int)local_4c,(int)local_7c);
      if (local_74 != 0) {
        if (*(int *)(local_74 + -0xc) != -1) {
          piVar1 = (int *)(local_74 + -0xc);
          if (piVar1 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else if (piVar1 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else {
            *piVar1 = *piVar1 + -1;
            iVar3 = *piVar1 + 1;
          }
          if (iVar3 != 0) goto LAB_00425687;
        }
        FUN_004cc0bc();
        local_74 = 0;
      }
LAB_00425687:
      *puVar7 = 0;
      if ((((*(int *)(*(int *)(iVar6 + 0x50) + -4) != 0) &&
           (uVar4 = FUN_0044e9c0((int)local_c,(int)local_4c,puVar7), (char)uVar4 == '\0')) &&
          (puVar5 != (undefined4 *)0x0)) && (local_180 == 0)) {
        *puVar7 = 1;
      }
      if (local_44 != 0) {
        if (*(int *)(local_44 + -0xc) != -1) {
          piVar1 = (int *)(local_44 + -0xc);
          if (piVar1 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else if (piVar1 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else {
            *piVar1 = *piVar1 + -1;
            iVar3 = *piVar1 + 1;
          }
          if (iVar3 != 0) goto LAB_00425760;
        }
        FUN_004cc0bc();
        local_44 = 0;
      }
LAB_00425760:
      iVar11 = iVar11 + 1;
    } while (iVar11 < 4);
    local_180 = local_180 + 1;
  } while (local_180 < 4);
  piVar1 = param_1 + 8;
  FUN_004cf628((int)local_8c,(uint *)s_LookupDefaultLabel_004f0e2b);
  uVar2 = FUN_0044e94c((int)local_c,(int)local_8c,(int)piVar1);
  cVar9 = (uVar2 & 0xff) == 0;
  if (local_84 != 0) {
    if (*(int *)(local_84 + -0xc) != -1) {
      piVar1 = (int *)(local_84 + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar10 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar10 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar10 = *piVar1 + 1;
      }
      if (iVar10 != 0) goto LAB_0042588b;
    }
    FUN_004cc0bc();
    local_84 = 0;
  }
LAB_0042588b:
  if ((cVar9 != '\0') && (bVar8)) {
    FUN_004cf41c((int)(param_1 + 8),*(uint **)PTR_PTR_004f0df0);
  }
  FUN_0044e920((int)local_c,2);
  *in_FS_OFFSET = local_b0;
  return param_1;
}

