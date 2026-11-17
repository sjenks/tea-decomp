// rea decompile_all
// name: FUN_004c5094
// address: 0x4c5094
// body: available
// range: 0x4c5094-0x4c51b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __cdecl FUN_004c5094(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_1d0;
  int local_1ac;
  int local_1a8;
  undefined4 local_92 [2];
  undefined4 local_8a [33];
  
  FUN_004dce64(0x5110c4);
  *(undefined1 *)(*(int *)(param_1 + 8) + 0x48) = 1;
  piVar1 = FUN_004c3390(&local_1ac,0,param_2,*(undefined4 *)(param_1 + 8),0,0,0,0);
  iVar2 = (**(code **)(piVar1[3] + 0x14))();
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + -0xf6;
  *(int *)(local_1ac + -4) = *(int *)(local_1ac + -4) + -0xf6;
  FUN_0048c668(&local_1ac,0);
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + 0xf6;
  *(int *)(local_1ac + -4) = *(int *)(local_1ac + -4) + 0xf6;
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + 0x96;
  FUN_004a52c0(local_8a,0);
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + -0x96;
  FUN_00489c54(local_92,0);
  *(undefined1 *)(*(int *)(param_1 + 8) + 0x48) = 0;
  *in_FS_OFFSET = local_1d0;
  return iVar2 == 1;
}

