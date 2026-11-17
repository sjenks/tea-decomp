// rea decompile_all
// name: FUN_00489148
// address: 0x489148
// body: available
// range: 0x489148-0x489202 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_00489148(int *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  
  FUN_0048febc(param_1,param_2);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  FUN_004906a0((int)param_1,&local_30);
  if (param_1[0x12] == 0) {
    local_18 = (**(code **)(*(int *)(*(int *)((int)param_1 + 6) + 0x18) + 0x2c))();
    local_20 = *(int *)(local_18 + 0x15);
    local_1c = *(undefined4 *)(local_18 + 0x19);
    piVar1 = &local_20;
  }
  else {
    local_14 = *(int *)(param_1[0x12] + 0x15);
    local_10 = *(undefined4 *)(param_1[0x12] + 0x19);
    piVar1 = &local_14;
  }
  iVar4 = piVar1[1];
  uVar2 = (local_28 - local_30) - *piVar1;
  iVar3 = (int)uVar2 >> 1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
  }
  param_1[0x13] = iVar3 + local_30;
  uVar2 = (local_24 - local_2c) - iVar4;
  iVar4 = (int)uVar2 >> 1;
  if (iVar4 < 0) {
    iVar4 = iVar4 + (uint)((uVar2 & 1) != 0);
  }
  param_1[0x14] = iVar4 + local_2c;
  return;
}

