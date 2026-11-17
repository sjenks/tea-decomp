// rea decompile_all
// name: FUN_004c7654
// address: 0x4c7654
// body: available
// range: 0x4c7654-0x4c778c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004c7654(int param_1,int *param_2)

{
  int iVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  iVar1 = *(int *)(param_1 + 8);
  local_5 = *(undefined1 *)(iVar1 + 0x3b);
  local_6 = *(undefined1 *)(iVar1 + 0x3a);
  local_7 = *(undefined1 *)(iVar1 + 0x39);
  local_8 = *(undefined1 *)(iVar1 + 0x38);
  local_c = *(undefined4 *)(iVar1 + 0x30);
  local_10 = *(undefined4 *)(iVar1 + 0x2c);
  local_14 = *(undefined4 *)(iVar1 + 0x28);
  local_18 = *(undefined4 *)(iVar1 + 0x14);
  local_1c = *(undefined4 *)(iVar1 + 0x10);
  local_20 = *(undefined4 *)(iVar1 + 0x24);
  local_24 = *(undefined4 *)(iVar1 + 0x20);
  local_28 = *(undefined4 *)(iVar1 + 0xc);
  local_2c = *(undefined4 *)(iVar1 + 8);
  FUN_0049a294(param_2,&local_2c,4);
  FUN_0049a294(param_2,&local_28,4);
  FUN_0049a31c(param_2);
  FUN_0049a31c(param_2);
  FUN_0049a294(param_2,&local_1c,4);
  FUN_0049a294(param_2,&local_18,4);
  FUN_0049a31c(param_2);
  FUN_0049a31c(param_2);
  FUN_0049a31c(param_2);
  FUN_0049a31c(param_2);
  FUN_0049a31c(param_2);
  FUN_0049a31c(param_2);
  FUN_0049a31c(param_2);
  FUN_0049a31c(param_2);
  FUN_0049a31c(param_2);
  return;
}

