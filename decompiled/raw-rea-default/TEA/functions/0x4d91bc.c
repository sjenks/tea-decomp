// rea decompile_all
// name: FUN_004d91bc
// address: 0x4d91bc
// body: available
// range: 0x4d91bc-0x4d94a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * __cdecl FUN_004d91bc(uint *param_1)

{
  char cVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  char *pcVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  int *piVar9;
  char *pcVar10;
  uint *puVar11;
  undefined4 *in_FS_OFFSET;
  byte bVar12;
  undefined4 uVar13;
  undefined *puVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  char local_188 [240];
  undefined1 *local_98;
  undefined4 local_94;
  int *local_90;
  int *local_8c;
  int *local_88;
  int *local_84;
  uint local_80;
  undefined1 *local_7c;
  int *local_78;
  int *local_74;
  undefined1 *local_70;
  int *local_6c;
  undefined4 local_68;
  uint *local_5c;
  undefined4 local_58;
  undefined2 local_48;
  int local_3c;
  undefined1 local_34 [8];
  int *local_2c;
  undefined **local_24 [2];
  undefined1 local_1c [8];
  int *local_14;
  int local_c;
  int local_8;
  
  bVar12 = 0;
  FUN_004dce64(0x515d6c);
  local_48 = 8;
  FUN_004dae38(&local_c,param_1,0x10);
  local_3c = local_3c + 1;
  local_48 = 0x14;
  if (local_8 != 0) goto LAB_004d93c2;
  uVar18 = 0;
  uVar17 = 0;
  uVar16 = 0;
  uVar15 = 1;
  puVar14 = &LAB_004d9500;
  uVar13 = 0;
  local_48 = 0x2c;
  local_5c = (uint *)FUN_004dc358(local_188,5);
  FUN_004cf628((int)local_34,local_5c);
  local_3c = local_3c + 2;
  local_24[0] = &PTR_FUN_004ecaac;
  local_68 = 0;
  local_14 = (int *)0x0;
  local_48 = 0x38;
  if (local_2c[-3] == -1 || local_2c[-3] + 1 < 0) {
    uVar6 = local_2c[-1];
    local_78 = FUN_004cf7b0(local_1c,uVar6,uVar6);
    local_7c = local_1c;
    local_88 = local_78 + 3;
    local_84 = local_2c;
    local_80 = uVar6;
    local_74 = local_88;
    local_14 = local_88;
    FUN_004dc7d4(local_88,local_2c,uVar6);
  }
  else {
    local_70 = local_1c;
    local_6c = local_2c;
    local_14 = local_2c;
    piVar9 = local_2c + -3;
    if (piVar9 != &DAT_00513d58) {
      *piVar9 = *piVar9 + 1;
    }
  }
  local_48 = 0x2c;
  local_24[0] = &PTR_FUN_00515de8;
  local_3c = local_3c + 2;
  if (local_2c != (int *)0x0) {
    if (local_2c[-3] != -1) {
      piVar9 = local_2c + -3;
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
      if (iVar2 != 0) goto LAB_004d93ab;
    }
    local_8c = local_2c + -3;
    local_90 = local_2c + -3;
    FUN_004cc0bc();
    local_94 = 0;
    local_98 = local_34;
    local_2c = (int *)0x0;
  }
LAB_004d93ab:
  local_48 = 0x20;
  FUN_004e7cc4((uint *)&DAT_004d94a4,local_24,uVar13,puVar14,uVar15,uVar16,uVar17,uVar18);
LAB_004d93c2:
  ppuVar3 = FUN_004e0ff0();
  local_48 = 0x14;
  FUN_004dc9f4((uint *)ppuVar3[2]);
  FUN_004dc9f4((uint *)&DAT_00515d08);
  FUN_004dc9f4((uint *)s_false_00515d0d);
  puVar4 = (undefined1 *)FUN_004cc180();
  *puVar4 = 1;
  puVar8 = (uint *)(puVar4 + 0x10);
  puVar4[1] = **ppuVar3;
  puVar4[2] = *ppuVar3[1];
  uVar15 = 0xffffffff;
  pcVar5 = ppuVar3[2];
  do {
    pcVar10 = pcVar5;
    if (uVar15 == 0) break;
    uVar15 = uVar15 - 1;
    pcVar10 = pcVar5 + (uint)bVar12 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar10;
  } while (cVar1 != '\0');
  uVar15 = ~uVar15;
  puVar7 = (uint *)(pcVar10 + -uVar15);
  puVar11 = puVar8;
  for (uVar6 = uVar15 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar11 = *puVar7;
    puVar7 = puVar7 + (uint)bVar12 * -2 + 1;
    puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(char *)puVar11 = (char)*puVar7;
    puVar7 = (uint *)((int)puVar7 + (uint)bVar12 * -2 + 1);
    puVar11 = (uint *)((int)puVar11 + (uint)bVar12 * -2 + 1);
  }
  *(uint **)(puVar4 + 4) = puVar8;
  pcVar5 = FUN_004dc9f4(puVar8);
  puVar8 = (uint *)((int)puVar8 + (int)(pcVar5 + 1));
  *puVar8 = DAT_00515d13;
  *(undefined1 *)(puVar8 + (uint)bVar12 * -2 + 1) = (&DAT_00515d17)[(uint)bVar12 * -8];
  *(uint **)(puVar4 + 8) = puVar8;
  pcVar5 = FUN_004dc9f4(puVar8);
  pcVar5 = (char *)((int)puVar8 + (int)(pcVar5 + 1));
  *(undefined4 *)pcVar5 = s_false_00515d18._0_4_;
  *(undefined2 *)(pcVar5 + (uint)bVar12 * -8 + 4) =
       *(undefined2 *)(s_false_00515d18 + (uint)bVar12 * -8 + 4);
  *(char **)(puVar4 + 0xc) = pcVar5;
  local_3c = local_3c + -1;
  FUN_004dafc0(&local_c,2);
  *in_FS_OFFSET = local_58;
  return puVar4;
}

