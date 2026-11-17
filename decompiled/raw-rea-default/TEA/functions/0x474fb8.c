// rea decompile_all
// name: FUN_00474fb8
// address: 0x474fb8
// body: available
// range: 0x474fb8-0x4753f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_00474fb8(int param_1)

{
  char *pcVar1;
  int iVar2;
  BOOL BVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  undefined4 *in_FS_OFFSET;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined4 local_a8;
  undefined4 local_98;
  char *local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined1 *local_78;
  undefined4 local_74;
  int local_70;
  undefined1 *local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_58;
  undefined2 local_48;
  int local_3c;
  int *local_34;
  int *local_30;
  int *local_2c;
  int local_28;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x4ffb28);
  local_28 = FUN_004cc0f0();
  if (local_28 != 0) {
    local_48 = 0x14;
    FUN_004cf628((int)local_14,(uint *)s_tea_chm_004ff41a);
    local_3c = local_3c + 1;
    FUN_00437470((int)local_24,(int)local_14);
    local_3c = local_3c + 1;
    FUN_00462d9c(local_28,(int)local_24);
    local_48 = 8;
  }
  *(int *)(param_1 + 0x70) = local_28;
  local_3c = local_3c + -1;
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar9 = (int *)(local_1c + -0xc);
      if (piVar9 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar9 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar9 = *piVar9 + -1;
        iVar2 = *piVar9 + 1;
      }
      if (iVar2 != 0) goto LAB_004750a9;
    }
    local_64 = local_1c + -0xc;
    FUN_004cc0bc();
    local_68 = 0;
    local_6c = local_24;
    local_1c = 0;
    local_98 = 0;
  }
LAB_004750a9:
  local_3c = local_3c + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar9 = (int *)(local_c + -0xc);
      if (piVar9 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar9 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar9 = *piVar9 + -1;
        iVar2 = *piVar9 + 1;
      }
      if (iVar2 != 0) goto LAB_0047511d;
    }
    local_70 = local_c + -0xc;
    FUN_004cc0bc();
    local_74 = 0;
    local_78 = local_14;
    local_c = 0;
    local_a8 = 0;
  }
LAB_0047511d:
  local_2c = (int *)FUN_004cc0f0();
  if (local_2c != (int *)0x0) {
    local_48 = 0x44;
    FUN_00450bbc(local_2c,0,0,*(int *)(param_1 + 0x70),0x4ff3d1,0);
    local_48 = 0x38;
  }
  *(int **)(param_1 + 0x74) = local_2c;
  local_30 = (int *)FUN_004cc0f0();
  if (local_30 != (int *)0x0) {
    local_48 = 0x5c;
    FUN_00473f78(local_30,0,*(int *)(param_1 + 0x70),*(int **)(param_1 + 0x74));
    local_48 = 0x50;
  }
  *(int **)(param_1 + 0x78) = local_30;
  local_34 = (int *)FUN_004cc0f0();
  if (local_34 != (int *)0x0) {
    local_48 = 0x74;
    if (*(int *)(param_1 + 0x78) == 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x78);
    }
    else {
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x78) + 4);
    }
    FUN_0047be04(local_34,0,uVar4,3,0x40);
    local_48 = 0x68;
  }
  piVar9 = local_34;
  (**(code **)(*(int *)(*(int *)(param_1 + 0x78) + 0x35) + 4))();
  FUN_00463310(*(int *)(param_1 + 0x70),*(int **)(param_1 + 0x74),piVar9,&local_7c,&local_80,
               &local_84,&local_88,&local_8c);
  iVar2 = FUN_004153ec(local_7c,local_80,local_84,local_88);
  if (iVar2 == 0) {
    local_c0 = 0;
    local_bc = 0;
    local_b8 = 0;
    local_b4 = 0;
    BVar3 = SystemParametersInfoA(0x30,0,&local_c0,0);
    if (BVar3 != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x78) + 4);
      *(undefined4 *)(iVar2 + 0x20) = 0;
      *(undefined4 *)(iVar2 + 0x24) = 0;
      *(int *)(iVar2 + 0x28) = (local_b8 - local_c0) / 3;
      iVar8 = (local_b4 - local_bc) * 0xf;
      if (iVar8 < 0) {
        iVar8 = iVar8 + 0xf;
      }
      *(int *)(iVar2 + 0x2c) = iVar8 >> 4;
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x78) + 4);
    *(int *)(iVar2 + 0x20) = local_7c;
    *(int *)(iVar2 + 0x24) = local_80;
    *(int *)(iVar2 + 0x28) = local_84;
    *(int *)(iVar2 + 0x2c) = local_88;
    if (local_8c != 0) {
      *(undefined4 *)(param_1 + 0x23) = 3;
    }
  }
  if (*(int *)(param_1 + 0x78) == 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x78);
  }
  else {
    uVar4 = **(undefined4 **)(param_1 + 0x78);
  }
  FUN_004a95d8(param_1,uVar4);
  puVar5 = FUN_0041238c(*(int *)(param_1 + 0x70),0);
  puVar6 = FUN_004a8c00();
  pcVar1 = *(char **)(puVar6 + 8);
  if (DAT_0051c440 == 1) {
    FUN_0046449c(*(int *)(param_1 + 0x70));
  }
  else if (((DAT_0051c440 < 3) ||
           (local_90 = thunk_FUN_004dc924(pcVar1,':'), local_90 == (char *)0x0)) ||
          (pcVar7 = thunk_FUN_004dc924(local_90 + 1,':'), pcVar7 != (char *)0x0)) {
    for (iVar2 = 1; iVar2 < DAT_0051c440; iVar2 = iVar2 + 1) {
      FUN_004753f4(param_1,(int)puVar5,*(LPCSTR *)(DAT_0051c408 + iVar2 * 4));
    }
  }
  else {
    FUN_004753f4(param_1,(int)puVar5,pcVar1);
  }
  (**(code **)(*(int *)(**(int **)(param_1 + 0x78) + 0xc) + 4))();
  FUN_004be1e0((int *)**(undefined4 **)(param_1 + 0x78),param_1 + 4,s_GRIDICON_004ff42b);
  *in_FS_OFFSET = local_58;
  return;
}

