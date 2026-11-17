// rea decompile_all
// name: FUN_0040df24
// address: 0x40df24
// body: available
// range: 0x40df24-0x40e034 inclusive
// range: 0x40e05c-0x40e06f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_0040df24(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x4ec3c4);
  while (iVar4 = param_3, iVar3 = param_1, iVar3 != param_2) {
    param_3 = iVar4 + 0x10;
    param_1 = iVar3 + 0x10;
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 8) = 0;
      iVar1 = *(int *)(*(int *)(iVar3 + 8) + -0xc);
      if (iVar1 == -1 || iVar1 + 1 < 0) {
        uVar2 = *(uint *)(*(int *)(iVar3 + 8) + -4);
        piVar5 = FUN_004cf7b0(iVar4,uVar2,uVar2);
        *(int **)(iVar4 + 8) = piVar5 + 3;
        FUN_004dc7d4(*(undefined4 **)(iVar4 + 8),*(undefined4 **)(iVar3 + 8),uVar2);
      }
      else {
        *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar3 + 8);
        piVar5 = (int *)(*(int *)(iVar4 + 8) + -0xc);
        if (piVar5 != &DAT_00513d58) {
          *piVar5 = *piVar5 + 1;
        }
      }
    }
  }
  *in_FS_OFFSET = local_2c;
  return iVar4;
}

