// rea decompile_all
// name: FUN_0048a094
// address: 0x48a094
// body: available
// range: 0x48a094-0x48a132 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_0048a094(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int local_28;
  int local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c [2];
  
  if ((*(int *)(param_1 + 0x11) <= *(int *)(param_1 + 0x25)) &&
     (uVar1 = FUN_0048a404(param_1,*(int *)(param_1 + 0x11) + *(int *)(param_1 + 0x1d)),
     (char)uVar1 == '\0')) {
    return 0xffffffff;
  }
  FUN_00489f80(&local_28,param_1,param_3,0);
  local_14 = *(int *)(param_1 + 0x19) * *(int *)(param_1 + 0x29);
  local_18 = *(int *)(param_1 + 0x15);
  piVar2 = &local_18;
  local_10 = local_18;
  FUN_00489f44(local_c,param_1,*(int *)(param_1 + 0x25),0);
  FUN_0048a2b4(*(uint **)(param_1 + 4),*(uint **)(param_2 + 4),local_c,piVar2,local_28,local_24);
  uVar1 = *(undefined4 *)(param_1 + 0x25);
  *(int *)(param_1 + 0x25) = *(int *)(param_1 + 0x25) + 1;
  return uVar1;
}

