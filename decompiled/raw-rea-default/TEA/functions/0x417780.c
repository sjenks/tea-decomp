// rea decompile_all
// name: FUN_00417780
// address: 0x417780
// body: available
// range: 0x417780-0x4178a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_00417780(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  iVar1 = *param_1;
  if (iVar1 == 0) {
    local_14 = *(int *)(param_1[4] + 0x20);
    local_c = *(int *)(param_1[4] + 0x20) + *(int *)(param_1[4] + 0x28);
  }
  else if (iVar1 == 1) {
    uVar2 = *(int *)(param_2 + 8) + 1;
    local_14 = (int)uVar2 >> 1;
    if (local_14 < 0) {
      local_14 = local_14 + (uint)((uVar2 & 1) != 0);
    }
    local_14 = local_14 - param_1[2];
    local_c = *(int *)(param_1[4] + 0x28) + local_14;
  }
  else if (iVar1 == 2) {
    local_14 = *(int *)(param_2 + 8) - param_1[2];
    local_c = *(int *)(param_1[4] + 0x28) + local_14;
  }
  else if (iVar1 == 3) {
    local_14 = *(int *)(param_1[4] + 0x20);
    local_c = *(int *)(param_2 + 8) - param_1[2];
  }
  iVar1 = param_1[1];
  if (iVar1 == 0) {
    local_10 = *(int *)(param_1[4] + 0x24);
    local_8 = local_10 + *(int *)(param_1[4] + 0x2c);
  }
  else if (iVar1 == 1) {
    uVar2 = *(int *)(param_2 + 0xc) + 1;
    local_10 = (int)uVar2 >> 1;
    if (local_10 < 0) {
      local_10 = local_10 + (uint)((uVar2 & 1) != 0);
    }
    local_10 = local_10 - param_1[3];
    local_8 = *(int *)(param_1[4] + 0x2c) + local_10;
  }
  else if (iVar1 == 2) {
    local_10 = *(int *)(param_2 + 0xc) - param_1[3];
    local_8 = *(int *)(param_1[4] + 0x2c) + local_10;
  }
  else if (iVar1 == 3) {
    local_10 = *(int *)(param_1[4] + 0x24);
    local_8 = *(int *)(param_2 + 0xc) - param_1[3];
  }
  FUN_004a7aa0(param_1[4],(HWND)0x0,local_14,local_10,local_c - local_14,local_8 - local_10,0x21c);
  return;
}

