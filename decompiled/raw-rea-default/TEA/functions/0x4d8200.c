// rea decompile_all
// name: FUN_004d8200
// address: 0x4d8200
// body: available
// range: 0x4d8200-0x4d82f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_004d8200(int param_1,char *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  
  FUN_004dce64(0x51585c);
  local_18 = 8;
  FUN_004ceae8(local_30);
  FUN_004d0348(param_1 + 0x10);
  local_c = local_c + 2;
  FUN_004ceae8(local_38);
  FUN_004d0348(param_1 + 0x20);
  local_c = local_c + 1;
  FUN_004ceae8(local_40);
  FUN_004d0348(param_1 + 0x30);
  local_c = local_c + 1;
  if (param_2 == (char *)0x0) {
    *(undefined1 *)(param_1 + 8) = 0x2e;
    *(undefined1 *)(param_1 + 9) = 0x2c;
  }
  else {
    *(char *)(param_1 + 8) = param_2[1];
    *(char *)(param_1 + 9) = param_2[2];
    FUN_004cf41c(param_1 + 0x10,*(uint **)(param_2 + 4));
    FUN_004cf41c(param_1 + 0x20,*(uint **)(param_2 + 8));
    FUN_004cf41c(param_1 + 0x30,*(uint **)(param_2 + 0xc));
    if (*param_2 != '\0') {
      FUN_004cc0cc();
    }
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

