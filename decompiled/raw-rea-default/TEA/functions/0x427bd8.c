// rea decompile_all
// name: FUN_00427bd8
// address: 0x427bd8
// body: available
// range: 0x427bd8-0x427e2e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_00427bd8(int param_1)

{
  undefined4 local_5c;
  byte local_58;
  byte local_57;
  byte local_56;
  int local_55;
  undefined4 local_51;
  byte local_4d;
  byte local_4c;
  byte local_4b;
  undefined4 local_4a;
  undefined4 local_46;
  byte local_42;
  byte local_41;
  byte local_40;
  undefined4 local_3f;
  undefined4 local_3b;
  byte local_37;
  byte local_36;
  byte local_35;
  undefined4 local_34;
  undefined4 local_30;
  byte local_2c;
  byte local_2b;
  byte local_2a;
  int local_29;
  undefined4 local_25;
  byte local_21;
  byte local_20;
  byte local_1f;
  int local_1e;
  undefined4 local_1a;
  byte local_16;
  byte local_15;
  byte local_14;
  int local_13;
  undefined4 local_f;
  byte local_b;
  byte local_a;
  byte local_9;
  int local_8;
  
  FUN_00495f90(&local_30);
  FUN_00496088((int)&local_30,'\0');
  local_29 = *(int *)(param_1 + 0x9c);
  local_30 = 0;
  local_2c = local_2c & 0xf0;
  local_2b = local_2b & 0xf0 | 3;
  local_2a = local_2a & 0xf0;
  local_25 = 0;
  local_21 = local_21 & 0xf0 | 1;
  local_20 = local_20 & 0xf0 | 3;
  local_1f = local_1f & 0xf0 | 1;
  local_8 = *(int *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x60) < local_8) {
    local_f = 0;
    local_b = local_b & 0xf0 | 3;
    local_a = local_a & 0xf0 | 2;
    local_9 = local_9 & 0xf0 | 3;
    local_13 = (local_8 * 0x5f) / *(int *)(param_1 + 0x60);
    local_1a = *(undefined4 *)(param_1 + 0x68);
    local_16 = local_16 & 0xf0 | 5;
    local_15 = local_15 & 0xf0 | 1;
    local_14 = local_14 & 0xf0 | 6;
    local_8 = local_29;
  }
  else {
    local_8 = (*(int *)(param_1 + 0x60) * 0x5f) / local_8;
    local_f = *(undefined4 *)(param_1 + 0x68);
    local_b = local_b & 0xf0 | 6;
    local_a = local_a & 0xf0 | 1;
    local_9 = local_9 & 0xf0 | 5;
    local_1a = 0;
    local_16 = local_16 & 0xf0 | 2;
    local_15 = local_15 & 0xf0 | 2;
    local_14 = local_14 & 0xf0 | 2;
    local_13 = local_29;
  }
  local_1e = local_29;
  FUN_00494fc8(*(int *)(param_1 + 0x94),*(int *)(param_1 + 0x68),&local_30);
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_00495f90(&local_5c);
    local_5c = *(undefined4 *)(param_1 + 0x68);
    local_55 = *(int *)(param_1 + 0x9c) * 2;
    local_58 = local_58 & 0xf0;
    local_57 = local_57 & 0xf0 | 3;
    local_56 = local_56 & 0xf0 | 2;
    local_4d = local_4d & 0xf0 | 1;
    local_4c = local_4c & 0xf0 | 4;
    local_4b = local_4b & 0xf0 | 1;
    local_4a = 0;
    local_42 = local_42 & 0xf0 | 5;
    local_41 = local_41 & 0xf0 | 4;
    local_40 = local_40 & 0xf0 | 5;
    local_3f = 0;
    local_37 = local_37 & 0xf0 | 3;
    local_36 = local_36 & 0xf0 | 4;
    local_35 = local_35 & 0xf0 | 3;
    local_34 = 0;
    local_51 = local_5c;
    local_46 = local_5c;
    local_3b = local_5c;
    FUN_00494fc8(*(int *)(param_1 + 0x94),*(int *)(param_1 + 0x6c),&local_5c);
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0x94) + 0xc) + 4))();
  return;
}

