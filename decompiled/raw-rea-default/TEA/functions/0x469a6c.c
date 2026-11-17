// rea decompile_all
// name: FUN_00469a6c
// address: 0x469a6c
// body: available
// range: 0x469a6c-0x469acc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __cdecl FUN_00469a6c(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *in_FS_OFFSET;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined4 local_28;
  
  FUN_004dce64(0x4fcfc8);
  cVar5 = '\x01';
  cVar4 = '\x01';
  cVar3 = '\x01';
  iVar1 = FUN_00469b1c('\0');
  if (iVar1 < 2) {
    pcVar2 = s_RICHED32_DLL_004fcbf8;
  }
  else {
    pcVar2 = s_RICHED20_DLL_004fcc05;
  }
  FUN_004c08dc(param_1,(uint *)pcVar2,cVar3,cVar4,cVar5);
  *param_1 = &PTR_LAB_004fcfe8;
  *in_FS_OFFSET = local_28;
  return param_1;
}

