// rea decompile_all
// name: FUN_0042056c
// address: 0x42056c
// body: available
// range: 0x42056c-0x4206e4 inclusive
// range: 0x4206ee-0x420b87 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0042056c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *in_FS_OFFSET;
  int local_b94;
  int local_b90;
  uint local_b78;
  int local_b4c;
  undefined4 local_b48;
  int local_b24 [696];
  undefined1 local_44 [8];
  uint *local_3c;
  undefined1 local_34 [8];
  char *local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x4efb0c);
  iVar2 = param_1;
  iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x6c))();
  local_b94 = (**(code **)(*(int *)(param_1 + 0xbc) + 0x6c))
                        (param_1 + 0xb0,*(int *)(param_1 + 0xbc),iVar2,param_1 + 0xb0);
  local_b4c = iVar1 + 1;
  if (param_2 < 0x1ed2) {
    if (param_2 - 0x1ebeU < 2) {
      local_b4c = iVar1 + -1;
    }
    else if (1 < param_2 - 0x1ec8U) goto LAB_00420b6d;
    FUN_0041f8c8((int)local_14,param_1,iVar1);
    FUN_0041fbe4(param_1,(int)local_14,local_b4c);
    (**(code **)(*(int *)(param_1 + 0xc) + 0x70))();
    if (local_c != 0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar7 = (int *)(local_c + -0xc);
        if (piVar7 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar7 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar7 = *piVar7 + -1;
          iVar2 = *piVar7 + 1;
        }
        if (iVar2 != 0) goto LAB_00420b6d;
      }
      FUN_004cc0bc();
      local_c = 0;
    }
  }
  else if (param_2 - 0x1ed2U < 2) {
    if ((-1 < local_b94) &&
       (iVar2 = (**(code **)(*(int *)(param_1 + 0xbc) + 0x24))(), local_b94 < iVar2)) {
      iVar2 = param_1 + 0xb0;
      FUN_0041f8c8((int)local_24,iVar2,local_b94);
      iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x24))();
      FUN_0041fbe4(param_1,(int)local_24,iVar1);
      iVar1 = (**(code **)(*(int *)(param_1 + 0xbc) + 0x24))();
      if (iVar1 <= local_b94) {
        local_b94 = (**(code **)(*(int *)(param_1 + 0xbc) + 0x24))
                              (iVar1,*(int *)(param_1 + 0xbc),iVar2);
        local_b94 = local_b94 + -1;
      }
      if (-1 < local_b94) {
        (**(code **)(*(int *)(param_1 + 0xbc) + 0x70))();
      }
      if (local_1c != 0) {
        if (*(int *)(local_1c + -0xc) != -1) {
          piVar7 = (int *)(local_1c + -0xc);
          if (piVar7 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else if (piVar7 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else {
            *piVar7 = *piVar7 + -1;
            iVar2 = *piVar7 + 1;
          }
          if (iVar2 != 0) goto LAB_00420b6d;
        }
        FUN_004cc0bc();
        local_1c = 0;
      }
    }
  }
  else if (param_2 - 0x1edcU < 2) {
    FUN_0041f8c8((int)local_34,param_1,iVar1);
    local_b78 = DAT_005140ac;
    if (*(uint *)(local_2c + -4) < DAT_005140ac) {
      local_b78 = *(uint *)(local_2c + -4);
    }
    pcVar3 = FUN_00420b88(local_2c,'\\',local_b78);
    uVar6 = DAT_005140ac;
    if (pcVar3 != (char *)0x0) {
      uVar6 = (int)pcVar3 - (int)local_2c;
    }
    if ((uVar6 != 0xffffffff) &&
       (iVar2 = FUN_004d4220((int)local_34,0,uVar6 + 1,param_1 + 0x230), iVar2 == 0)) {
      FUN_0041fbe4(param_1 + 0xb0,(int)local_34,-1);
    }
    iVar2 = (**(code **)(*(int *)(param_1 + 0xc) + 0x24))();
    if (iVar2 <= iVar1) {
      iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x24))();
      iVar1 = iVar1 + -1;
    }
    if (-1 < iVar1) {
      (**(code **)(*(int *)(param_1 + 0xc) + 0x70))();
    }
    if (local_2c != (char *)0x0) {
      if (*(int *)(local_2c + -0xc) != -1) {
        piVar7 = (int *)(local_2c + -0xc);
        if (piVar7 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar7 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar7 = *piVar7 + -1;
          iVar2 = *piVar7 + 1;
        }
        if (iVar2 != 0) goto LAB_00420b6d;
      }
      FUN_004cc0bc();
      local_2c = (char *)0x0;
    }
  }
  else if (param_2 - 0x1ee6U < 2) {
    local_b90 = 0;
    if (iVar1 < 0) {
      if (-1 < local_b94) {
        local_b90 = *(int *)(param_1 + 0xc4);
      }
    }
    else {
      local_b90 = *(int *)(param_1 + 0x14);
      local_b94 = iVar1;
    }
    if (local_b90 != 0) {
      puVar4 = (uint *)FUN_00408c98(local_b90,local_b94);
      FUN_004cf628((int)local_44,puVar4);
      puVar4 = thunk_FUN_004dccbc(local_3c,'.');
      if (puVar4 != (uint *)0x0) {
        iVar2 = FUN_004dcbf8((char *)puVar4,PTR_DAT_004f33b8);
        if (iVar2 == 0) {
          if (*(int *)(param_1 + 0x160) == 0) {
            uVar5 = *(undefined4 *)(param_1 + 0x160);
          }
          else {
            uVar5 = **(undefined4 **)(param_1 + 0x160);
          }
          piVar7 = FUN_00401150(local_b24,0,uVar5,*(int *)(param_1 + 0x164),local_b90,local_b94);
          (**(code **)(piVar7[3] + 0x14))();
          FUN_004014d0(local_b24,2);
        }
        else {
          FUN_004dcbf8((char *)puVar4,PTR_DAT_004f33bc);
        }
      }
      if (local_3c != (uint *)0x0) {
        if (local_3c[-3] != 0xffffffff) {
          puVar4 = local_3c + -3;
          if (puVar4 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else if (puVar4 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else {
            *puVar4 = *puVar4 - 1;
            iVar2 = *puVar4 + 1;
          }
          if (iVar2 != 0) goto LAB_00420b6d;
        }
        FUN_004cc0bc();
        local_3c = (uint *)0x0;
      }
    }
  }
LAB_00420b6d:
  FUN_00420bb4(param_1);
  *in_FS_OFFSET = local_b48;
  return;
}

