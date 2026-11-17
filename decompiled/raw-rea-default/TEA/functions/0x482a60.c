// rea decompile_all
// name: FUN_00482a60
// address: 0x482a60
// body: available
// range: 0x482a60-0x482bb5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_00482a60(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x503208);
  iVar3 = FUN_004828bc(*(int *)(param_1 + 0x34),*(int *)(param_1 + 0x38),param_2);
  iVar5 = iVar3 - *(int *)(param_1 + 0x34);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xf;
  }
  if (iVar3 == *(int *)(param_1 + 0x38)) {
    if (*(int *)(param_1 + 0x38) == *(int *)(param_1 + 0x48)) {
      FUN_0040e240(param_1 + 0x30,*(int *)(param_1 + 0x38),param_2);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x38);
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 8) = 0;
        iVar1 = *(int *)(*(int *)(param_2 + 8) + -0xc);
        if (iVar1 == -1 || iVar1 + 1 < 0) {
          uVar2 = *(uint *)(*(int *)(param_2 + 8) + -4);
          piVar4 = FUN_004cf7b0(iVar3,uVar2,uVar2);
          *(int **)(iVar3 + 8) = piVar4 + 3;
          FUN_004dc7d4(*(undefined4 **)(iVar3 + 8),*(undefined4 **)(param_2 + 8),uVar2);
        }
        else {
          *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_2 + 8);
          piVar4 = (int *)(*(int *)(iVar3 + 8) + -0xc);
          if (piVar4 != &DAT_00513d58) {
            *piVar4 = *piVar4 + 1;
          }
        }
      }
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 0x10;
    }
  }
  *in_FS_OFFSET = local_2c;
  return iVar5 >> 4;
}

