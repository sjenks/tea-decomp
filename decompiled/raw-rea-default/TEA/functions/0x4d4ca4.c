// rea decompile_all
// name: FUN_004d4ca4
// address: 0x4d4ca4
// body: available
// range: 0x4d4ca4-0x4d4da1 inclusive
// range: 0x4d4df0-0x4d4e1b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl FUN_004d4ca4(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 local_88 [12];
  undefined4 uStack_7c;
  undefined1 local_60 [16];
  uint local_50;
  undefined4 local_4c;
  undefined2 local_3c;
  int local_30;
  int local_28;
  undefined4 local_24 [8];
  
  FUN_004dce64(0x514da0);
  local_50 = 0;
  local_3c = 0x14;
  FUN_004d1a74(local_24,param_1);
  local_30 = local_30 + 1;
  local_3c = 0x20;
  cVar1 = FUN_004d4bf4((int)local_24);
  if (cVar1 != '\0') {
    FUN_004d4c8c(*param_1);
    FUN_004d4c40((int)local_88,param_1);
    local_3c = 0x2c;
    FUN_004cf0b8(&local_28,*param_1);
    local_30 = local_30 + 1;
    piVar2 = (int *)FUN_004d4c00(&local_28);
    FUN_004d4e1c(local_60,piVar2);
    cVar1 = FUN_004d4c98((int)local_60);
    local_30 = local_30 + -1;
    uStack_7c = 0x4d4d64;
    FUN_00437eb0(&local_28,2);
    if (cVar1 != '\0') {
      local_50 = 1;
    }
    FUN_004d4954(*param_1,0);
  }
  local_30 = local_30 + -1;
  FUN_00484c30(local_24,2);
  local_3c = 0;
  if (local_50 != 0) {
    FUN_004d1084(*param_1,local_50);
  }
  *in_FS_OFFSET = local_4c;
  return param_1;
}

