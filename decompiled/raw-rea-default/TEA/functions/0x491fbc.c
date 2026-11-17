// rea decompile_all
// name: FUN_00491fbc
// address: 0x491fbc
// body: available
// range: 0x491fbc-0x4921d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_00491fbc(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  int local_48 [3];
  int local_3c;
  int local_38;
  int *local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  bVar6 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  (**(code **)(*(int *)(param_1 + 0x18) + 0x40))();
  FUN_0048fbc8((int *)(param_1 + 0x28),&local_8,&local_c,&local_10,&local_14,
               (uint)*(byte *)(param_1 + 0x30));
  local_1c = 0;
  local_18 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  piVar1 = FUN_004cc3c4((int *)0x0,0x10,*(int *)(param_1 + 0xc),1,FUN_004918cc);
  FUN_004cc0cc();
  param_2[2] = (int)piVar1;
  local_20 = local_10;
  local_24 = local_8;
  local_28 = 0;
  iVar4 = 0;
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = *(int **)((int)piVar1 + 0x3e)
      ) {
    local_30 = 0;
    local_2c = 0;
    (**(code **)(*piVar1 + 8))();
    *(int *)(param_2[2] + iVar4 * 0x10) = local_30;
    *(undefined4 *)(param_2[2] + 4 + iVar4 * 0x10) = local_2c;
    if (local_30 < local_28) {
      piVar2 = &local_28;
    }
    else {
      piVar2 = &local_30;
    }
    local_28 = *piVar2;
    iVar4 = iVar4 + 1;
  }
  iVar5 = 0;
  for (iVar4 = *(int *)(param_1 + 8); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x3e)) {
    local_34 = (int *)(iVar4 + 10);
    piVar1 = (int *)(iVar4 + 10);
    piVar2 = &local_6c;
    for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar2 = *piVar1;
      piVar1 = piVar1 + (uint)bVar6 * -2 + 1;
      piVar2 = piVar2 + (uint)bVar6 * -2 + 1;
    }
    local_38 = *(int *)(param_2[2] + 4 + iVar5 * 0x10);
    local_3c = *(int *)(param_2[2] + iVar5 * 0x10);
    local_68 = local_20;
    local_48[2] = local_20 + local_38;
    local_60 = local_48[2];
    iVar3 = local_28 - local_3c >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((local_28 - local_3c & 1U) != 0);
    }
    local_6c = iVar3 + local_24;
    local_64 = iVar3 + local_24 + local_3c;
    piVar1 = &local_6c;
    piVar2 = (int *)(param_2[2] + iVar5 * 0x10);
    for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar2 = *piVar1;
      piVar1 = piVar1 + (uint)bVar6 * -2 + 1;
      piVar2 = piVar2 + (uint)bVar6 * -2 + 1;
    }
    local_20 = local_48[2];
    if (*(int *)(iVar4 + 0x3e) != 0) {
      local_48[1] = 0;
      (**(code **)(*(int *)(param_1 + 0x18) + 0x50))();
      local_20 = local_48[2];
    }
    local_48[0] = local_64 + local_c;
    piVar1 = param_2;
    if (*param_2 < local_64 + local_c) {
      piVar1 = local_48;
    }
    *param_2 = *piVar1;
    piVar1 = param_2 + 1;
    local_4c = local_60 + local_14;
    if (*piVar1 < local_60 + local_14) {
      piVar1 = &local_4c;
    }
    param_2[1] = *piVar1;
    iVar5 = iVar5 + 1;
  }
  return;
}

