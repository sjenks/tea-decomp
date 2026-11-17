// rea decompile_all
// name: FUN_004bbd80
// address: 0x4bbd80
// body: available
// range: 0x4bbd80-0x4bc93f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004bbd80(int param_1,uint *param_2,char param_3)

{
  uint *puVar1;
  uint *puVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  uint uVar7;
  uint *local_ec;
  undefined4 in_stack_ffffff18;
  undefined1 local_c4 [8];
  int local_bc;
  undefined1 local_b4 [8];
  int local_ac;
  undefined1 local_a4 [8];
  int local_9c;
  undefined1 local_94 [8];
  int local_8c;
  undefined1 local_84 [8];
  int local_7c;
  undefined1 local_74 [8];
  int local_6c;
  undefined1 local_64 [8];
  int local_5c;
  undefined1 local_54 [8];
  int local_4c;
  undefined1 local_44 [8];
  int local_3c;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x50f2f0);
  puVar1 = (uint *)FUN_004bbca0((char *)param_2);
  if ((char)*param_2 == '\0') {
    *(undefined1 *)(param_1 + 0x164) = 0;
    FUN_004cf41c(param_1,(uint *)&DAT_0050f246);
    FUN_004cf41c(param_1 + 0x10,(uint *)&DAT_0050f246);
    FUN_004cf41c(param_1 + 0x40,(uint *)&DAT_0050f246);
    FUN_004cf41c(param_1 + 0x20,(uint *)&DAT_0050f246);
    FUN_004bca70(param_1);
    *in_FS_OFFSET = in_stack_ffffff18;
    return in_stack_ffffff18;
  }
  puVar2 = (uint *)FUN_004bbd5c((char *)param_2,(char *)puVar1,&DAT_0050f238);
  if (puVar2 < (uint *)((int)param_2 + 2U)) {
    *(undefined1 *)(param_1 + 0x164) = 0;
    FUN_004cf41c(param_1,(uint *)&DAT_0050f246);
    puVar2 = (uint *)FUN_004bbcb0((char *)param_2,(char *)puVar1,(int)DAT_0050f23b);
    if (puVar2 == puVar1) {
      FUN_004cf41c(param_1 + 0x10,(uint *)&DAT_0050f246);
    }
    else {
      uVar5 = (int)puVar2 - (int)param_2;
      uVar7 = 0;
      FUN_004cf628((int)local_54,param_2);
      iVar4 = FUN_004d1e40((int)local_64,(int)local_54,uVar7,uVar5);
      FUN_004cf384(param_1 + 0x10,iVar4);
      if (local_5c != 0) {
        if (*(int *)(local_5c + -0xc) != -1) {
          piVar6 = (int *)(local_5c + -0xc);
          if (piVar6 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (piVar6 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *piVar6 = *piVar6 + -1;
            iVar4 = *piVar6 + 1;
          }
          if (iVar4 != 0) goto LAB_004bc28e;
        }
        FUN_004cc0bc();
        local_5c = 0;
      }
LAB_004bc28e:
      if (local_4c != 0) {
        if (*(int *)(local_4c + -0xc) != -1) {
          piVar6 = (int *)(local_4c + -0xc);
          if (piVar6 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (piVar6 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *piVar6 = *piVar6 + -1;
            iVar4 = *piVar6 + 1;
          }
          if (iVar4 != 0) goto LAB_004bc323;
        }
        FUN_004cc0bc();
        local_4c = 0;
      }
LAB_004bc323:
      param_2 = (uint *)((int)puVar2 + 1);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x164) = 1;
    pcVar3 = FUN_004bbcce((char *)puVar2,(char *)puVar1,(uint *)&DAT_0050f23e);
    uVar5 = (int)pcVar3 - (int)puVar2;
    uVar7 = 0;
    FUN_004cf628((int)local_14,puVar2);
    iVar4 = FUN_004d1e40((int)local_24,(int)local_14,uVar7,uVar5);
    FUN_004cf384(param_1,iVar4);
    if (local_1c != 0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        piVar6 = (int *)(local_1c + -0xc);
        if (piVar6 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_004bbf37;
      }
      FUN_004cc0bc();
      local_1c = 0;
    }
LAB_004bbf37:
    if (local_c != 0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar6 = (int *)(local_c + -0xc);
        if (piVar6 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_004bbfcc;
      }
      FUN_004cc0bc();
      local_c = 0;
    }
LAB_004bbfcc:
    puVar2 = (uint *)(pcVar3 + 1);
    pcVar3 = FUN_004bbcce((char *)puVar2,(char *)puVar1,(uint *)&DAT_0050f23e);
    uVar5 = (int)pcVar3 - (int)puVar2;
    uVar7 = 0;
    FUN_004cf628((int)local_34,puVar2);
    iVar4 = FUN_004d1e40((int)local_44,(int)local_34,uVar7,uVar5);
    FUN_004cf384(param_1 + 0x10,iVar4);
    if (local_3c != 0) {
      if (*(int *)(local_3c + -0xc) != -1) {
        piVar6 = (int *)(local_3c + -0xc);
        if (piVar6 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_004bc0ce;
      }
      FUN_004cc0bc();
      local_3c = 0;
    }
LAB_004bc0ce:
    if (local_2c != 0) {
      if (*(int *)(local_2c + -0xc) != -1) {
        piVar6 = (int *)(local_2c + -0xc);
        if (piVar6 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_004bc163;
      }
      FUN_004cc0bc();
      local_2c = 0;
    }
LAB_004bc163:
    param_2 = (uint *)(pcVar3 + 1);
  }
  if (param_3 == '\0') {
    local_ec = (uint *)FUN_004bbd06((char *)((int)puVar1 + -1),(char *)((int)param_2 + -1),
                                    (int)DAT_0050f243);
    puVar2 = (uint *)FUN_004bbd24((char *)((int)puVar1 + -1),(char *)((int)param_2 + -1),
                                  (uint *)&DAT_0050f23e);
    if (puVar2 < local_ec) {
      uVar5 = (int)puVar1 - (int)local_ec;
      uVar7 = 0;
      FUN_004cf628((int)local_74,local_ec);
      iVar4 = FUN_004d1e40((int)local_84,(int)local_74,uVar7,uVar5);
      FUN_004cf384(param_1 + 0x40,iVar4);
      if (local_7c != 0) {
        if (*(int *)(local_7c + -0xc) != -1) {
          piVar6 = (int *)(local_7c + -0xc);
          if (piVar6 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (piVar6 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *piVar6 = *piVar6 + -1;
            iVar4 = *piVar6 + 1;
          }
          if (iVar4 != 0) goto LAB_004bc495;
        }
        FUN_004cc0bc();
        local_7c = 0;
      }
LAB_004bc495:
      if (local_6c != 0) {
        if (*(int *)(local_6c + -0xc) != -1) {
          piVar6 = (int *)(local_6c + -0xc);
          if (piVar6 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (piVar6 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *piVar6 = *piVar6 + -1;
            iVar4 = *piVar6 + 1;
          }
          if (iVar4 != 0) goto LAB_004bc55f;
        }
        FUN_004cc0bc();
        local_6c = 0;
      }
    }
    else {
      FUN_004cf41c(param_1 + 0x40,(uint *)&DAT_0050f246);
      local_ec = puVar1;
    }
LAB_004bc55f:
    uVar5 = (int)local_ec - ((int)puVar2 + 1);
    uVar7 = 0;
    FUN_004cf628((int)local_94,(uint *)((int)puVar2 + 1));
    iVar4 = FUN_004d1e40((int)local_a4,(int)local_94,uVar7,uVar5);
    FUN_004cf384(param_1 + 0x30,iVar4);
    if (local_9c != 0) {
      if (*(int *)(local_9c + -0xc) != -1) {
        piVar6 = (int *)(local_9c + -0xc);
        if (piVar6 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_004bc678;
      }
      FUN_004cc0bc();
      local_9c = 0;
    }
LAB_004bc678:
    local_ec = puVar2;
    if (local_8c != 0) {
      if (*(int *)(local_8c + -0xc) != -1) {
        piVar6 = (int *)(local_8c + -0xc);
        if (piVar6 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_004bc752;
      }
      FUN_004cc0bc();
      local_8c = 0;
    }
  }
  else {
    FUN_004cf41c(param_1 + 0x30,(uint *)&DAT_0050f246);
    FUN_004cf41c(param_1 + 0x40,(uint *)&DAT_0050f246);
    local_ec = puVar1;
  }
LAB_004bc752:
  if (local_ec <= param_2) {
    FUN_004cf41c(param_1 + 0x20,(uint *)&DAT_0050f246);
    goto LAB_004bc926;
  }
  uVar5 = (int)local_ec - (int)param_2;
  uVar7 = 0;
  FUN_004cf628((int)local_b4,param_2);
  iVar4 = FUN_004d1e40((int)local_c4,(int)local_b4,uVar7,uVar5);
  FUN_004cf384(param_1 + 0x20,iVar4);
  if (local_bc != 0) {
    if (*(int *)(local_bc + -0xc) != -1) {
      piVar6 = (int *)(local_bc + -0xc);
      if (piVar6 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar6 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar4 = *piVar6 + 1;
      }
      if (iVar4 != 0) goto LAB_004bc869;
    }
    FUN_004cc0bc();
    local_bc = 0;
  }
LAB_004bc869:
  if (local_ac != 0) {
    if (*(int *)(local_ac + -0xc) != -1) {
      piVar6 = (int *)(local_ac + -0xc);
      if (piVar6 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar6 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar4 = *piVar6 + 1;
      }
      if (iVar4 != 0) goto LAB_004bc926;
    }
    FUN_004cc0bc();
    local_ac = 0;
  }
LAB_004bc926:
  FUN_004bca70(param_1);
  *in_FS_OFFSET = in_stack_ffffff18;
  return in_stack_ffffff18;
}

