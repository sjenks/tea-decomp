// rea decompile_all
// name: FUN_0044a980
// address: 0x44a980
// body: available
// range: 0x44a980-0x44ab19 inclusive
// range: 0x44ab1c-0x44ac67 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __cdecl FUN_0044a980(undefined4 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_1d;
  int local_1c;
  int local_18;
  undefined1 local_12;
  undefined1 local_11;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = param_2[9];
  iVar2 = *(int *)(local_8 + 4);
  bVar4 = true;
  while (iVar2 != 0) {
    local_c = iVar2;
    local_8 = iVar2;
    local_10 = FUN_0043c624(*(byte **)(param_3 + 8),*(int *)(*(int *)(param_3 + 8) + -4),
                            *(byte **)(iVar2 + 0x18),*(int *)(*(int *)(iVar2 + 0x18) + -4));
    if (local_10 == 0) {
      uVar1 = FUN_004d40d0(param_3,0,*(uint *)(*(int *)(param_3 + 8) + -4),*(byte **)(iVar2 + 0x18),
                           *(uint *)(*(int *)(iVar2 + 0x18) + -4));
      if ((int)uVar1 < 0) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
    }
    else {
      bVar4 = local_10 < 0;
    }
    if (bVar4) {
      iVar2 = *(int *)(iVar2 + 8);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
  }
  if ((char)param_2[0xb] == '\0') {
    local_50 = local_8;
    if (bVar4) {
      local_60 = *(int *)(param_2[9] + 8);
      if (local_60 == local_8) {
        local_12 = 1;
        FUN_0044a638((int)&local_90,param_2,0,local_8,param_3);
        *param_1 = local_90;
        param_1[1] = local_8c;
        param_1[2] = local_88;
        *(undefined1 *)(param_1 + 4) = local_12;
        return param_1;
      }
      FUN_0044ac68((int)&local_58);
    }
    iVar2 = local_50;
    local_18 = local_50;
    iVar3 = local_50 + 0x10;
    local_1c = FUN_0043c624(*(byte **)(local_50 + 0x18),*(int *)(*(int *)(local_50 + 0x18) + -4),
                            *(byte **)(param_3 + 8),*(int *)(*(int *)(param_3 + 8) + -4));
    if (local_1c == 0) {
      uVar1 = FUN_004d40d0(iVar3,0,*(uint *)(*(int *)(iVar2 + 0x18) + -4),*(byte **)(param_3 + 8),
                           *(uint *)(*(int *)(param_3 + 8) + -4));
      if ((int)uVar1 < 0) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
    }
    else {
      bVar4 = local_1c < 0;
    }
    if (bVar4) {
      local_1d = 1;
      FUN_0044a638((int)&local_b8,param_2,0,local_8,param_3);
      *param_1 = local_b8;
      param_1[1] = local_b4;
      param_1[2] = local_b0;
      *(undefined1 *)(param_1 + 4) = local_1d;
    }
    else {
      *param_1 = local_58;
      param_1[1] = local_54;
      param_1[2] = local_50;
      *(undefined1 *)(param_1 + 4) = 0;
    }
  }
  else {
    local_11 = 1;
    FUN_0044a638((int)&local_48,param_2,0,local_8,param_3);
    *param_1 = local_48;
    param_1[1] = local_44;
    param_1[2] = local_40;
    *(undefined1 *)(param_1 + 4) = local_11;
  }
  return param_1;
}

