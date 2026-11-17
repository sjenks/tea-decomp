// rea decompile_all
// name: FUN_004c7500
// address: 0x4c7500
// body: available
// range: 0x4c7500-0x4c7505 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __stdcall FUN_004c7500(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  FUN_00499da0(param_2,iVar1 + 8,4);
  FUN_00499da0(param_2,iVar1 + 0xc,4);
  uVar2 = FUN_00499e9c(param_2);
  *(uint *)(iVar1 + 0x20) = uVar2;
  uVar2 = FUN_00499e9c(param_2);
  *(uint *)(iVar1 + 0x24) = uVar2;
  FUN_00499da0(param_2,iVar1 + 0x10,4);
  FUN_00499da0(param_2,iVar1 + 0x14,4);
  uVar2 = FUN_00499e9c(param_2);
  *(uint *)(iVar1 + 0x28) = uVar2;
  uVar2 = FUN_00499e9c(param_2);
  *(uint *)(iVar1 + 0x2c) = uVar2;
  uVar2 = FUN_00499e9c(param_2);
  *(uint *)(iVar1 + 0x30) = uVar2;
  uVar2 = FUN_00499e9c(param_2);
  *(uint *)(iVar1 + 0x34) = uVar2;
  iVar3 = FUN_00499f04(param_2);
  *(bool *)(iVar1 + 0x38) = iVar3 != 0;
  iVar3 = FUN_00499f04(param_2);
  *(bool *)(iVar1 + 0x39) = iVar3 != 0;
  iVar3 = FUN_00499f04(param_2);
  *(bool *)(iVar1 + 0x3a) = iVar3 != 0;
  iVar3 = FUN_00499f04(param_2);
  *(bool *)(iVar1 + 0x3b) = iVar3 != 0;
  iVar3 = FUN_00499f04(param_2);
  *(bool *)(iVar1 + 0x3c) = iVar3 != 0;
  *(undefined4 *)(iVar1 + 4) = 0;
  return iVar1;
}

