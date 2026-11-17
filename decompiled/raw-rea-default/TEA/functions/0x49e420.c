// rea decompile_all
// name: FUN_0049e420
// address: 0x49e420
// body: available
// range: 0x49e420-0x49e6d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0049e420(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_4c;
  int *local_48;
  int *local_44;
  int local_40;
  int *local_3c;
  int local_38;
  char local_31;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  int *local_8;
  
  iVar1 = *(int *)(param_1 + 8);
  FUN_004a7454(iVar1);
  bVar3 = false;
  if (((*(byte *)(iVar1 + 0x74) & 0x40) == 0) && ((*(byte *)(iVar1 + 0x74) & 0x10) == 0)) {
    if ((*(int *)(iVar1 + 0x14) != 0) &&
       ((((*(byte *)(*(int *)(iVar1 + 0x14) + 0x74) & 0x40) != 0 ||
         ((*(byte *)(*(int *)(iVar1 + 0x14) + 0x74) & 0x10) != 0)) &&
        (iVar1 == *(int *)(*(int *)(iVar1 + 0x14) + 0x7a))))) {
      bVar3 = false;
    }
  }
  else {
    bVar3 = true;
  }
  local_8 = param_2;
  FUN_0049a31c(param_2);
  if (!bVar3) {
    FUN_004c25f4(param_2,*(int **)(iVar1 + 0x70));
    local_c = *(undefined4 *)(iVar1 + 0x10);
    FUN_004a8888(param_2,&local_c);
    local_10 = *(uint *)(iVar1 + 0x74);
    if (*(int *)(iVar1 + 0xc) != 0) {
      local_10 = local_10 | 2;
    }
    FUN_0049a294(param_2,&local_10,4);
    if ((*(byte *)(iVar1 + 0x74) & 4) == 0) {
      uVar6 = *(uint *)(iVar1 + 0x18) & 0xc6ffffff;
      if (*(int *)(iVar1 + 0xc) != 0) {
        uVar4 = GetWindowLongA(*(HWND *)(iVar1 + 0xc),-0x10);
        uVar6 = uVar6 | uVar4 & 0x39000000;
      }
      local_14 = *(undefined4 *)(iVar1 + 0x38);
      local_18 = *(undefined4 *)(iVar1 + 0x2c);
      local_1c = *(undefined4 *)(iVar1 + 0x28);
      local_20 = *(undefined4 *)(iVar1 + 0x24);
      local_24 = *(undefined4 *)(iVar1 + 0x20);
      local_28 = *(undefined4 *)(iVar1 + 0x1c);
      local_2c = uVar6;
      FUN_0049a294(param_2,&local_2c,4);
      FUN_0049a294(param_2,&local_28,4);
      FUN_0049a31c(param_2);
      FUN_0049a31c(param_2);
      FUN_0049a31c(param_2);
      FUN_0049a31c(param_2);
      FUN_0049a294(param_2,&local_14,4);
    }
    puVar8 = (undefined4 *)(iVar1 + 0x3c);
    puVar7 = (undefined4 *)(iVar1 + 0x30);
    local_30 = *(undefined4 *)(iVar1 + 0x34);
    FUN_0049a31c(param_2);
    piVar5 = FUN_004a8888(param_2,puVar7);
    FUN_004a8888(piVar5,puVar8);
    FUN_0049a2e0(param_2);
    FUN_0049e0c0(param_2,*(int *)(iVar1 + 0x14));
    if (*(int *)(iVar1 + 0x14) != 0) {
      local_31 = DAT_00509349;
      DAT_00509349 = 1;
      local_38 = *(int *)(iVar1 + 0x7a);
      local_3c = param_2;
      FUN_0049e0c0(param_2,local_38);
      DAT_00509349 = local_31;
      if (local_31 != '\0') {
        DAT_00509349 = 0;
        local_40 = FUN_004a743c(*(int *)(iVar1 + 0x14));
        local_40 = local_40 + -1;
        local_44 = param_2;
        FUN_0049a31c(param_2);
        for (iVar2 = *(int *)(iVar1 + 0x7e); iVar1 != iVar2; iVar2 = *(int *)(iVar2 + 0x7e)) {
          FUN_0049e0c0(param_2,iVar2);
        }
        DAT_00509349 = '\x01';
      }
    }
    FUN_004c74e4(param_2,*(int **)(iVar1 + 0x44));
    puVar8 = (undefined4 *)(iVar1 + 0x54);
    local_48 = param_2;
    piVar5 = FUN_004c25f4(param_2,*(int **)(iVar1 + 0x50));
    FUN_004a8888(piVar5,puVar8);
    local_4c = *(undefined4 *)(iVar1 + 0x5c);
    FUN_0049a294(param_2,&local_4c,4);
  }
  return;
}

