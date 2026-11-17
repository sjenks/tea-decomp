// rea decompile_all
// name: FUN_0045daf8
// address: 0x45daf8
// body: available
// range: 0x45daf8-0x45db94 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0045daf8(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x4f9e24);
  for (piVar5 = *(int **)(param_1 + 0x6b4); piVar5 < *(int **)(param_1 + 0x6b8); piVar5 = piVar5 + 1
      ) {
    if (*piVar5 != 0) {
      FUN_0045e640(*piVar5,3);
    }
  }
  puVar1 = *(undefined4 **)(param_1 + 0x6b8);
  puVar2 = *(undefined4 **)(param_1 + 0x6b4);
  puVar4 = FUN_0045233c(puVar1,puVar1,puVar2);
  iVar3 = *(int *)(param_1 + 0x6b8);
  iVar6 = (int)puVar1 - (int)puVar2;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 3;
  }
  *(int *)(param_1 + 0x6b8) = *(int *)(param_1 + 0x6b8) + (iVar6 >> 2) * -4;
  FUN_0045176c(param_1 + 0x6b0,(int)puVar4,iVar3);
  *in_FS_OFFSET = local_2c;
  return;
}

