// rea decompile_all
// name: FUN_004b301c
// address: 0x4b301c
// body: available
// range: 0x4b301c-0x4b3b2a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004b301c(uint *param_1,uint *param_2)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  uint *local_240;
  undefined4 local_1b4;
  undefined1 local_18c [8];
  uint *local_184;
  undefined1 local_17c [8];
  uint *local_174;
  undefined1 local_16c [8];
  int local_164;
  int local_154;
  int local_144;
  int local_134;
  int local_124;
  int local_114;
  
  FUN_004dce64(0x50d688);
  FUN_004bc960((int)local_16c,param_1,'\0');
  bVar1 = FUN_004bcc54((int)local_16c,8);
  if (!bVar1) {
    uVar7 = 0;
    if (local_114 != 0) {
      if (*(int *)(local_114 + -0xc) != -1) {
        piVar6 = (int *)(local_114 + -0xc);
        if (piVar6 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar6 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar2 = *piVar6 + 1;
        }
        if (iVar2 != 0) goto LAB_004b3109;
      }
      FUN_004cc0bc();
      local_114 = 0;
    }
LAB_004b3109:
    if (local_124 != 0) {
      if (*(int *)(local_124 + -0xc) != -1) {
        piVar6 = (int *)(local_124 + -0xc);
        if (piVar6 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar6 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar2 = *piVar6 + 1;
        }
        if (iVar2 != 0) goto LAB_004b31b0;
      }
      FUN_004cc0bc();
      local_124 = 0;
    }
LAB_004b31b0:
    if (local_134 != 0) {
      if (*(int *)(local_134 + -0xc) != -1) {
        piVar6 = (int *)(local_134 + -0xc);
        if (piVar6 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar6 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar2 = *piVar6 + 1;
        }
        if (iVar2 != 0) goto LAB_004b3257;
      }
      FUN_004cc0bc();
      local_134 = 0;
    }
LAB_004b3257:
    if (local_144 != 0) {
      if (*(int *)(local_144 + -0xc) != -1) {
        piVar6 = (int *)(local_144 + -0xc);
        if (piVar6 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar6 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar2 = *piVar6 + 1;
        }
        if (iVar2 != 0) goto LAB_004b32fe;
      }
      FUN_004cc0bc();
      local_144 = 0;
    }
LAB_004b32fe:
    if (local_154 != 0) {
      if (*(int *)(local_154 + -0xc) != -1) {
        piVar6 = (int *)(local_154 + -0xc);
        if (piVar6 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar6 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar2 = *piVar6 + 1;
        }
        if (iVar2 != 0) goto LAB_004b33a5;
      }
      FUN_004cc0bc();
      local_154 = 0;
    }
LAB_004b33a5:
    if (local_164 != 0) {
      if (*(int *)(local_164 + -0xc) != -1) {
        piVar6 = (int *)(local_164 + -0xc);
        if (piVar6 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar6 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar2 = *piVar6 + 1;
        }
        if (iVar2 != 0) goto LAB_004b3449;
      }
      FUN_004cc0bc();
    }
LAB_004b3449:
    *in_FS_OFFSET = local_1b4;
    return uVar7;
  }
  puVar3 = (uint *)FUN_004bcae0((int)local_16c,8);
  FUN_004cf628((int)local_17c,puVar3);
  puVar3 = (uint *)FUN_004bcae0((int)local_16c,0x10);
  FUN_004cf628((int)local_18c,puVar3);
  puVar3 = local_174;
  bVar1 = FUN_004bcc54((int)local_16c,0x10);
  local_240 = local_184;
  if (!bVar1) {
    local_240 = (uint *)&DAT_0050d0ba;
  }
  if ((char)*local_240 == '.') {
    local_240 = (uint *)((int)local_240 + 1);
  }
  puVar4 = (uint *)FUN_00496d48(param_2);
  puVar5 = thunk_FUN_004dccbc(puVar4,'.');
  if (puVar5 == (uint *)0x0) {
    puVar5 = (uint *)&DAT_0050d0ba;
  }
  else {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (uint *)((int)puVar5 + 1);
  }
  uVar7 = FUN_004b1c06(puVar3,puVar4);
  if (((char)uVar7 == '\0') || (uVar7 = FUN_004b1c06(local_240,puVar5), (char)uVar7 == '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  FUN_004cc0cc();
  if (local_184 != (uint *)0x0) {
    if (local_184[-3] != 0xffffffff) {
      puVar3 = local_184 + -3;
      if (puVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (puVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *puVar3 = *puVar3 - 1;
        iVar2 = *puVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_004b366d;
    }
    FUN_004cc0bc();
    local_184 = (uint *)0x0;
  }
LAB_004b366d:
  if (local_174 != (uint *)0x0) {
    if (local_174[-3] != 0xffffffff) {
      puVar3 = local_174 + -3;
      if (puVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (puVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *puVar3 = *puVar3 - 1;
        iVar2 = *puVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_004b3729;
    }
    FUN_004cc0bc();
    local_174 = (uint *)0x0;
  }
LAB_004b3729:
  if (local_114 != 0) {
    if (*(int *)(local_114 + -0xc) != -1) {
      piVar6 = (int *)(local_114 + -0xc);
      if (piVar6 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar6 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar2 = *piVar6 + 1;
      }
      if (iVar2 != 0) goto LAB_004b37d6;
    }
    FUN_004cc0bc();
    local_114 = 0;
  }
LAB_004b37d6:
  if (local_124 != 0) {
    if (*(int *)(local_124 + -0xc) != -1) {
      piVar6 = (int *)(local_124 + -0xc);
      if (piVar6 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar6 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar2 = *piVar6 + 1;
      }
      if (iVar2 != 0) goto LAB_004b387d;
    }
    FUN_004cc0bc();
    local_124 = 0;
  }
LAB_004b387d:
  if (local_134 != 0) {
    if (*(int *)(local_134 + -0xc) != -1) {
      piVar6 = (int *)(local_134 + -0xc);
      if (piVar6 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar6 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar2 = *piVar6 + 1;
      }
      if (iVar2 != 0) goto LAB_004b3924;
    }
    FUN_004cc0bc();
    local_134 = 0;
  }
LAB_004b3924:
  if (local_144 != 0) {
    if (*(int *)(local_144 + -0xc) != -1) {
      piVar6 = (int *)(local_144 + -0xc);
      if (piVar6 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar6 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar2 = *piVar6 + 1;
      }
      if (iVar2 != 0) goto LAB_004b39cb;
    }
    FUN_004cc0bc();
    local_144 = 0;
  }
LAB_004b39cb:
  if (local_154 != 0) {
    if (*(int *)(local_154 + -0xc) != -1) {
      piVar6 = (int *)(local_154 + -0xc);
      if (piVar6 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar6 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar2 = *piVar6 + 1;
      }
      if (iVar2 != 0) goto LAB_004b3a72;
    }
    FUN_004cc0bc();
    local_154 = 0;
  }
LAB_004b3a72:
  if (local_164 != 0) {
    if (*(int *)(local_164 + -0xc) != -1) {
      piVar6 = (int *)(local_164 + -0xc);
      if (piVar6 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar6 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar2 = *piVar6 + 1;
      }
      if (iVar2 != 0) goto LAB_004b3b16;
    }
    FUN_004cc0bc();
  }
LAB_004b3b16:
  *in_FS_OFFSET = local_1b4;
  return uVar7;
}

