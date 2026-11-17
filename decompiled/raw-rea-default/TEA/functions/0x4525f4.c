// rea decompile_all
// name: FUN_004525f4
// address: 0x4525f4
// body: available
// range: 0x4525f4-0x452699 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004525f4(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  undefined4 local_b08;
  int local_ae4 [696];
  
  FUN_004dce64(0x4f82f4);
  iVar4 = *(int *)(param_1 + 0x6d0);
  iVar1 = FUN_00466b18(*(int *)(param_1 + 0x38));
  piVar3 = (int *)(*(int *)(*(int *)(param_1 + 0x6d0) * 4 + *(int *)(param_1 + 0x6b4)) + 8);
  if (*piVar3 == 0) {
    iVar2 = *piVar3;
  }
  else {
    iVar2 = *(int *)*piVar3;
  }
  piVar3 = FUN_00401150(local_ae4,0,iVar2,*(int *)(param_1 + 0x38),iVar1,iVar4);
  (**(code **)(piVar3[3] + 0x14))();
  FUN_004014d0(local_ae4,2);
  *in_FS_OFFSET = local_b08;
  return;
}

