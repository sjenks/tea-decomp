// rea decompile_all
// name: FUN_00496d90
// address: 0x496d90
// body: available
// range: 0x496d90-0x4971c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __cdecl FUN_00496d90(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5079a0);
  *param_1 = 0;
  *(undefined4 *)((int)param_1 + 5) = 0;
  *(undefined4 *)((int)param_1 + 9) = 0x60;
  *(undefined4 *)((int)param_1 + 0xd) = 0;
  *(undefined4 *)((int)param_1 + 0x11) = 0x60;
  *(undefined4 *)((int)param_1 + 0x15) = 0x10;
  *(undefined4 *)((int)param_1 + 0x19) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0xc0;
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  *(undefined4 *)((int)param_1 + 0x2a) = 0xc0;
  *(undefined4 *)((int)param_1 + 0x2e) = 0x20;
  *(undefined4 *)((int)param_1 + 0x32) = 0;
  *(undefined4 *)((int)param_1 + 0x37) = 0;
  *(undefined4 *)((int)param_1 + 0x3b) = 0x180;
  *(undefined4 *)((int)param_1 + 0x3f) = 0;
  *(undefined4 *)((int)param_1 + 0x43) = 0x180;
  *(undefined4 *)((int)param_1 + 0x47) = 0x40;
  *(undefined4 *)((int)param_1 + 0x4b) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0x200;
  param_1[0x16] = 0;
  param_1[0x17] = 0x200;
  param_1[0x18] = 0x80;
  param_1[0x19] = 0;
  *(undefined4 *)((int)param_1 + 0x69) = 0;
  *(undefined4 *)((int)param_1 + 0x6d) = 0x400;
  *(undefined4 *)((int)param_1 + 0x71) = 0;
  *(undefined4 *)((int)param_1 + 0x75) = 0x400;
  *(undefined4 *)((int)param_1 + 0x79) = 0x100;
  *(undefined4 *)((int)param_1 + 0x7d) = 0;
  *(undefined4 *)((int)param_1 + 0x82) = 0;
  *(undefined4 *)((int)param_1 + 0x86) = 0x800;
  *(undefined4 *)((int)param_1 + 0x8a) = 0;
  *(undefined4 *)((int)param_1 + 0x8e) = 0x800;
  *(undefined4 *)((int)param_1 + 0x92) = 0x200;
  *(undefined4 *)((int)param_1 + 0x96) = 0;
  *(undefined4 *)((int)param_1 + 0x9b) = 0;
  *(undefined4 *)((int)param_1 + 0x9f) = 0xc00;
  *(undefined4 *)((int)param_1 + 0xa3) = 0;
  *(undefined4 *)((int)param_1 + 0xa7) = 0xc00;
  *(undefined4 *)((int)param_1 + 0xab) = 0x400;
  *(undefined4 *)((int)param_1 + 0xaf) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x1800;
  param_1[0x2f] = 0;
  param_1[0x30] = 0x1800;
  param_1[0x31] = 0x800;
  param_1[0x32] = 0;
  *(undefined4 *)((int)param_1 + 0xcd) = 0;
  *(undefined4 *)((int)param_1 + 0xd1) = 0x3000;
  *(undefined4 *)((int)param_1 + 0xd5) = 0;
  *(undefined4 *)((int)param_1 + 0xd9) = 0x3000;
  *(undefined4 *)((int)param_1 + 0xdd) = 0x1000;
  *(undefined4 *)((int)param_1 + 0xe1) = 0;
  *(undefined4 *)((int)param_1 + 0xe6) = 0;
  *(undefined4 *)((int)param_1 + 0xea) = 0x4000;
  *(undefined4 *)((int)param_1 + 0xee) = 0;
  *(undefined4 *)((int)param_1 + 0xf2) = 0x4000;
  *(undefined4 *)((int)param_1 + 0xf6) = 0x2000;
  *(undefined4 *)((int)param_1 + 0xfa) = 0;
  *(undefined4 *)((int)param_1 + 0xff) = 0;
  *(undefined4 *)((int)param_1 + 0x103) = 0x8000;
  *(undefined4 *)((int)param_1 + 0x107) = 0;
  *(undefined4 *)((int)param_1 + 0x10b) = 0x8000;
  *(undefined4 *)((int)param_1 + 0x10f) = 0x4000;
  *(undefined4 *)((int)param_1 + 0x113) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0x10000;
  param_1[0x48] = 0;
  param_1[0x49] = 0x10000;
  param_1[0x4a] = 0x8000;
  param_1[0x4b] = param_1;
  param_1[0x4c] = (int)param_1 + 0x19;
  param_1[0x4d] = (int)param_1 + 0x32;
  param_1[0x4e] = (int)param_1 + 0x4b;
  param_1[0x4f] = param_1 + 0x19;
  param_1[0x50] = (int)param_1 + 0x7d;
  param_1[0x51] = (int)param_1 + 0x96;
  param_1[0x52] = (int)param_1 + 0xaf;
  param_1[0x53] = param_1 + 0x32;
  param_1[0x54] = (int)param_1 + 0xe1;
  param_1[0x55] = (int)param_1 + 0xfa;
  param_1[0x56] = (int)param_1 + 0x113;
  *in_FS_OFFSET = local_28;
  return param_1;
}

