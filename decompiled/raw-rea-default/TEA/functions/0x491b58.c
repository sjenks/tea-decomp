// rea decompile_all
// name: FUN_00491b58
// address: 0x491b58
// body: available
// range: 0x491b58-0x491ce9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl FUN_00491b58(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  byte bVar7;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_24;
  int local_18;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  bVar7 = 0;
  FUN_004dce64(0x506e1c);
  local_24 = 8;
  local_10 = 0;
  local_c = 0;
  local_8 = FUN_004cc3c4((int *)0x0,0x10,*(int *)(param_2 + 0xc),1,FUN_004918cc);
  local_18 = local_18 + 2;
  local_24 = 0x2c;
  (**(code **)(*(int *)(param_2 + 0x18) + 0x44))();
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  iVar3 = 0;
  for (piVar5 = *(int **)(param_2 + 8); piVar5 != (int *)0x0; piVar5 = *(int **)((int)piVar5 + 0x3e)
      ) {
    piVar4 = (int *)((int)piVar5 + 10);
    piVar6 = &local_5c;
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar6 = *piVar4;
      piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    local_24 = 0x2c;
    piVar4 = local_8 + iVar3 * 4;
    piVar6 = &local_6c;
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar6 = *piVar4;
      piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    if ((((local_5c == local_6c) && (local_58 == local_68)) && (local_54 == local_64)) &&
       (local_50 == local_60)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      (**(code **)(*piVar5 + 0xc))();
      local_3c = 0;
      local_38 = 0;
      if ((local_5c == 0) && (local_58 == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_00494540(&local_4c,&local_5c);
      }
      FUN_00494540(&local_4c,&local_6c);
    }
    iVar3 = iVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x34) = 0;
  piVar5 = &local_4c;
  piVar4 = param_1;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = *piVar5;
    piVar5 = piVar5 + (uint)bVar7 * -2 + 1;
    piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
  }
  local_18 = local_18 + -2;
  FUN_004cc0cc();
  *in_FS_OFFSET = local_34;
  return param_1;
}

