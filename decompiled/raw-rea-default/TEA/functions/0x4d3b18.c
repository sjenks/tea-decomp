// rea decompile_all
// name: FUN_004d3b18
// address: 0x4d3b18
// body: available
// range: 0x4d3b18-0x4d3f5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_004d3b18(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 *puVar12;
  char *pcVar13;
  int iVar14;
  undefined4 *in_FS_OFFSET;
  int local_50;
  int local_48;
  int local_40;
  int local_3c;
  char *local_38;
  char local_31;
  undefined4 local_30;
  undefined2 local_20;
  int local_14;
  int local_c;
  int local_8;
  
  FUN_004dce64(0x514af8);
  FUN_004d3f8c(&local_38,0);
  iVar2 = FUN_004d0724();
  if (iVar2 == param_1[9]) {
    FUN_004d0a2c();
    *in_FS_OFFSET = local_30;
    return;
  }
  iVar2 = FUN_004d17a8((int)param_1);
  if ((iVar2 == 0) && (iVar2 = FUN_004d348c((int)param_1), iVar2 != 0)) {
    if ((char)param_1[10] == '\0') {
      uVar3 = FUN_004d348c((int)param_1);
      uVar4 = FUN_004d348c((int)param_1);
      uVar5 = FUN_004d3498((int)param_1);
      FUN_004d187c((int)param_1,uVar5,uVar4,uVar3);
    }
    else {
      uVar3 = FUN_004d34b0((int)param_1);
      uVar4 = FUN_004d348c((int)param_1);
      uVar5 = FUN_004d3498((int)param_1);
      FUN_004d187c((int)param_1,uVar5,uVar4,uVar3);
    }
    FUN_004d1898((int)param_1,0,0);
  }
  iVar2 = FUN_004d17a8((int)param_1);
  if (iVar2 != 0) {
    uVar6 = FUN_004d17a8((int)param_1);
    uVar7 = FUN_004d17b4((int)param_1);
    if (uVar6 < uVar7) {
      puVar8 = (undefined1 *)FUN_004d17a8((int)param_1);
      FUN_004d179c(puVar8);
      *in_FS_OFFSET = local_30;
      return;
    }
  }
  if (((*(char *)((int)param_1 + 0x29) != '\0') && (iVar2 = FUN_004d17a8((int)param_1), iVar2 != 0))
     || ((*(char *)((int)param_1 + 0x29) != '\0' && (iVar2 = FUN_004d348c((int)param_1), iVar2 != 0)
         ))) {
    local_40 = FUN_004d0a2c();
    piVar9 = &local_40;
    FUN_004d0a2c();
    local_3c = (**(code **)(*param_1 + 0x24))();
    bVar1 = FUN_004d1694(&local_3c,piVar9);
    if (bVar1) {
      FUN_004d0a2c();
      *in_FS_OFFSET = local_30;
      return;
    }
    uVar3 = FUN_004d34b0((int)param_1);
    uVar4 = FUN_004d348c((int)param_1);
    uVar5 = FUN_004d3498((int)param_1);
    FUN_004d187c((int)param_1,uVar5,uVar4,uVar3);
    FUN_004d1898((int)param_1,0,0);
    *(undefined1 *)((int)param_1 + 0x29) = 0;
  }
  iVar2 = FUN_004d1068(param_1,param_1[9],0,1);
  param_1[0xd] = iVar2;
  local_20 = 8;
  FUN_004d3508(&local_8,(int)param_1);
  local_14 = local_14 + 1;
  piVar9 = (int *)FUN_004d35a0(&local_8);
  local_31 = FUN_004d3420(piVar9);
  local_14 = local_14 + -1;
  FUN_00437eb0(&local_8,2);
  if (local_31 == '\0') {
    local_48 = 0;
    puVar10 = (undefined4 *)FUN_004cc180();
    pcVar13 = (char *)0x0;
    while (pcVar11 = FUN_004d3f9c(param_1,param_1[9],pcVar13 + (int)puVar10,1,param_1[0xc]),
          puVar12 = puVar10, 0 < (int)pcVar11) {
      pcVar13 = pcVar13 + (int)pcVar11;
      FUN_004d3430((undefined4 *)param_1[0xe],(undefined4 *)param_1[0xf]);
      local_20 = 0x14;
      FUN_004d3508(&local_c,(int)param_1);
      local_14 = local_14 + 1;
      piVar9 = (int *)FUN_004d35a0(&local_c);
      local_50 = FUN_004d3f5c(piVar9);
      local_14 = local_14 + -1;
      FUN_00437eb0(&local_c,2);
      if ((local_50 == 2) || (local_50 == 3)) break;
      if (((char *)param_1[0xc] + param_1[0x10] != (char *)0x0) && ((char *)param_1[0xc] == pcVar11)
         ) {
        puVar12 = (undefined4 *)FUN_004cc180();
        FUN_004dc7d4(puVar12,puVar10,(uint)pcVar13);
        FUN_004cc0cc();
        local_48 = (local_48 - (int)puVar10) + (int)puVar12;
      }
      if (((char *)param_1[0xc] + param_1[0x10] == (char *)0x0) ||
         (puVar10 = puVar12, (char *)param_1[0xc] != pcVar11)) break;
    }
    if ((int)pcVar13 < 1) {
      FUN_004d0a2c();
      *in_FS_OFFSET = local_30;
      return;
    }
    param_1[0xb] = (int)pcVar13;
    if ((local_50 == 2) || (local_50 == 1)) {
      FUN_004cc0cc();
      FUN_004d0a2c();
      *in_FS_OFFSET = local_30;
      return;
    }
    if (local_50 == 3) {
      FUN_004dc7d4((undefined4 *)param_1[0x10],puVar12,param_1[0xb]);
      local_38 = (char *)param_1[0xb];
    }
    else {
      iVar14 = (int)pcVar11 - (local_48 - (int)puVar12);
      iVar2 = FUN_004d1068(param_1,param_1[9],-iVar14,1);
      if (iVar2 == -1) {
        FUN_004d0a2c();
        *in_FS_OFFSET = local_30;
        return;
      }
      param_1[0xb] = param_1[0xb] - iVar14;
      local_38 = (char *)-param_1[0x10];
    }
    FUN_004cc0cc();
  }
  else {
    local_38 = FUN_004d3f9c(param_1,param_1[9],(char *)param_1[0x10],1,param_1[0xc]);
    if ((int)local_38 < 1) {
      FUN_004d0a2c();
      *in_FS_OFFSET = local_30;
      return;
    }
    iVar2 = FUN_004d3fc4((int)param_1,(char *)param_1[0x10],local_38 + param_1[0x10]);
    param_1[0xb] = iVar2;
  }
  if (param_1[0xb] == 0) {
    FUN_004d0a2c();
    *in_FS_OFFSET = local_30;
  }
  else {
    iVar2 = param_1[0x10];
    FUN_004d187c((int)param_1,iVar2,iVar2,local_38 + iVar2);
    FUN_004d1898((int)param_1,0,0);
    *(undefined1 *)(param_1 + 10) = 1;
    puVar8 = (undefined1 *)FUN_004d17a8((int)param_1);
    FUN_004d179c(puVar8);
    *in_FS_OFFSET = local_30;
  }
  return;
}

