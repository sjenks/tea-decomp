// rea decompile_all
// name: FUN_00495b84
// address: 0x495b84
// body: available
// range: 0x495b84-0x495c16 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_00495b84(int *param_1)

{
  HGDIOBJ pvVar1;
  undefined4 *in_FS_OFFSET;
  LONG local_68 [14];
  undefined4 local_30;
  undefined2 local_20;
  int local_14;
  uint local_c [2];
  
  FUN_004dce64(0x5075e0);
  pvVar1 = (HGDIOBJ)0x0;
  if (*(int *)(*param_1 + 0xc) != 0) {
    pvVar1 = (HGDIOBJ)FUN_004a6094(*param_1,0x31,0,0);
  }
  if (pvVar1 == (HGDIOBJ)0x0) {
    pvVar1 = GetStockObject(0xd);
  }
  local_20 = 8;
  FUN_0048f708(local_c,pvVar1,0);
  local_14 = local_14 + 2;
  local_20 = 0x14;
  FUN_0048f8fc(local_68,local_c);
  *(LONG *)((int)param_1 + 0x2d) = local_68[0];
  local_14 = local_14 + -2;
  FUN_00494064(local_c,0);
  *in_FS_OFFSET = local_30;
  return;
}

