// rea decompile_all
// name: FUN_00464bb4
// address: 0x464bb4
// body: available
// range: 0x464bb4-0x464e63 inclusive
// range: 0x464e6c-0x464f21 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_00464bb4(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar8;
  undefined4 local_48;
  undefined1 local_24 [8];
  LPCSTR local_1c;
  undefined1 local_14 [8];
  uint *local_c;
  
  FUN_004dce64(0x4fbddc);
  for (iVar7 = 0; iVar2 = FUN_00408b14(*(int *)(param_1 + 0x140)), iVar7 < iVar2; iVar7 = iVar7 + 1)
  {
    pcVar4 = (char *)FUN_00408c98(*(int *)(param_1 + 0x140),iVar7);
    iVar2 = FUN_004dcbf8((char *)param_2,pcVar4);
    if (iVar2 == 0) {
      FUN_00452b50(*(int **)(param_1 + 0x10),iVar7);
      *in_FS_OFFSET = local_48;
      return 1;
    }
  }
  iVar7 = FUN_00408b14(*(int *)(param_1 + 0x140));
  if (8 < iVar7) {
    (**(code **)(*(int *)(*(int *)(**(int **)(param_1 + 0x10) + 0x6c) + 0x1b) + 0x30))();
    *in_FS_OFFSET = local_48;
    return 0;
  }
  puVar3 = (uint *)FUN_00408c8c(*(undefined4 **)(param_1 + 0x140));
  FUN_004cf628((int)local_14,puVar3);
  if (local_c[-1] != 0) {
    FUN_004d5c40((int)local_14,local_c[-1],0,1,0x3b);
  }
  uVar1 = local_c[-1];
  pcVar4 = FUN_004dc9f4(param_2);
  FUN_004cfad4((int)local_14,uVar1,0,(uint)param_2,(uint)pcVar4,0,(uint)pcVar4);
  puVar5 = FUN_00407734(local_c);
  iVar7 = FUN_00408b34((int)puVar5);
  if (iVar7 == 0) {
    FUN_00408884(*(int *)(param_1 + 0x140));
    *(undefined4 **)(param_1 + 0x140) = puVar5;
    FUN_00451784(*(int **)(param_1 + 0x10),1);
    FUN_00466b38(param_1);
    uVar8 = 1;
    if (local_c != (uint *)0x0) {
      if (local_c[-3] != 0xffffffff) {
        local_c = local_c + -3;
        if (local_c == &DAT_00513d58) {
          iVar7 = 1;
        }
        else if (local_c == &DAT_00513d58) {
          iVar7 = 1;
        }
        else {
          *local_c = *local_c - 1;
          iVar7 = *local_c + 1;
        }
        if (iVar7 != 0) goto LAB_00464f0a;
      }
      FUN_004cc0bc();
    }
LAB_00464f0a:
    *in_FS_OFFSET = local_48;
    return uVar8;
  }
  FUN_004cf628((int)local_24,param_2);
  uVar1 = *(uint *)(local_1c + -4);
  pcVar4 = FUN_004dc9f4((uint *)s_is_not_a_valid_TEA_Sympathy_Dict_004fb5b3);
  FUN_004cfad4((int)local_24,uVar1,0,0x4fb5b3,(uint)pcVar4,0,(uint)pcVar4);
  MessageBoxExA(*(HWND *)(**(int **)(param_1 + 0x10) + 0xc),local_1c,
                s_Dictionary_Open_Failed_004fb338,0x30,0);
  FUN_00408884((int)puVar5);
  uVar8 = 0;
  if (local_1c != (LPCSTR)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar6 = (int *)(local_1c + -0xc);
      if (piVar6 == &DAT_00513d58) {
        iVar7 = 1;
      }
      else if (piVar6 == &DAT_00513d58) {
        iVar7 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar7 = *piVar6 + 1;
      }
      if (iVar7 != 0) goto LAB_00464dda;
    }
    FUN_004cc0bc();
    local_1c = (LPCSTR)0x0;
  }
LAB_00464dda:
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      local_c = local_c + -3;
      if (local_c == &DAT_00513d58) {
        iVar7 = 1;
      }
      else if (local_c == &DAT_00513d58) {
        iVar7 = 1;
      }
      else {
        *local_c = *local_c - 1;
        iVar7 = *local_c + 1;
      }
      if (iVar7 != 0) goto LAB_00464e54;
    }
    FUN_004cc0bc();
  }
LAB_00464e54:
  *in_FS_OFFSET = local_48;
  return uVar8;
}

