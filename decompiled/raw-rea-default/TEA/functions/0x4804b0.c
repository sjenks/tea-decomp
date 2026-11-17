// rea decompile_all
// name: FUN_004804b0
// address: 0x4804b0
// body: available
// range: 0x4804b0-0x480576 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004804b0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_a4 [39];
  undefined4 *local_8;
  
  if (*(int *)(param_1 + 0x34) < 0x20) {
    iVar2 = *(int *)(param_1 + 0x34);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    *(undefined4 *)(param_1 + 0x38 + iVar2 * 4) = param_2;
    FUN_0047f9f8(param_1);
    if (*(int *)(param_1 + 4) == 0) {
      if (*(int *)(param_1 + 0x248) == 3) {
        FUN_004d5374(*(int **)(param_1 + 0x244),(uint *)&DAT_00501cfe);
        FUN_004d4ca4(*(int **)(param_1 + 0x244));
      }
      local_8 = (undefined4 *)FUN_00480608(param_1);
      if (local_8 != (undefined4 *)0x0) {
        FUN_00481b70(local_a4,param_1);
        puVar3 = local_a4;
        puVar1 = local_8;
        for (iVar2 = 0x27; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar1 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar3 = local_8 + 0x33;
        puVar1 = (undefined4 *)(param_1 + 0xb8);
        for (iVar2 = 0; iVar2 < *(short *)((int)local_8 + 0x1a); iVar2 = iVar2 + 1) {
          *puVar3 = *puVar1;
          puVar3 = puVar3 + 1;
          puVar1 = puVar1 + 1;
        }
      }
    }
  }
  return;
}

