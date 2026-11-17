// rea decompile_all
// name: FUN_004af394
// address: 0x4af394
// body: available
// range: 0x4af394-0x4af556 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004af394(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  undefined4 local_40;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  undefined4 local_39;
  int local_35;
  byte local_31;
  byte local_30;
  byte local_2f;
  undefined4 local_2e;
  undefined4 local_2a;
  byte local_26;
  byte local_25;
  byte local_24;
  undefined4 local_23;
  int local_1f;
  byte local_1b;
  byte local_1a;
  byte local_19;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  FUN_00495f90(&local_40);
  FUN_00495098((int)(param_1 + 1),param_3,&local_40);
  if (*(int *)(*param_1 + 0x15) == param_3) {
    local_8 = local_1f;
    if ((*(byte *)(*(int *)(*param_1 + 0x15) + 0x1a) & 0x80) == 0) {
      bVar1 = 2;
    }
    else {
      bVar1 = 4;
    }
    local_1f = param_2;
    local_1b = local_1b & 0xf0 | 3;
    local_1a = bVar1 | local_1a & 0xf0;
    local_19 = local_19 & 0xf0 | 1;
    local_18 = 0;
  }
  else {
    local_8 = local_35;
    local_35 = param_2;
    local_31 = local_31 & 0xf0 | 3;
    local_30 = local_30 & 0xf0 | 4;
    local_2f = local_2f & 0xf0 | 1;
    local_2e = 0;
  }
  FUN_00494fc8((int)(param_1 + 1),param_3,&local_40);
  bVar2 = (*(byte *)(param_2 + 0x1a) & 0x80) == 0;
  if (local_8 == 0) {
    local_c = 3;
  }
  else {
    local_c = 1;
  }
  if (bVar2) {
    local_10 = 2;
  }
  else {
    local_10 = 4;
  }
  local_35 = local_8;
  local_31 = local_31 & 0xf0 | 3;
  local_30 = (byte)local_10 | local_30 & 0xf0;
  local_2f = (byte)local_c | local_2f & 0xf0;
  local_2e = 0;
  local_1b = local_1b & 0xf0 | 6;
  local_1a = local_1a & 0xf0;
  if (bVar2) {
    local_14 = 3;
  }
  else {
    local_14 = 4;
  }
  local_40 = 0;
  local_3c = local_3c & 0xf0;
  local_3b = (byte)local_14 | local_3b & 0xf0;
  local_3a = local_3a & 0xf0;
  local_39 = 0;
  if (bVar2) {
    bVar1 = 2;
  }
  else {
    bVar1 = 4;
  }
  local_2a = 0;
  local_26 = local_26 & 0xf0 | 2;
  local_25 = bVar1 | local_25 & 0xf0;
  local_24 = local_24 & 0xf0 | 2;
  local_23 = 0;
  FUN_00494fc8((int)(param_1 + 1),param_2,&local_40);
  return;
}

