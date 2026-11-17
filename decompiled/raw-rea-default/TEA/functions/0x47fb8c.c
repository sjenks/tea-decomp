// rea decompile_all
// name: FUN_0047fb8c
// address: 0x47fb8c
// body: available
// range: 0x47fb8c-0x47fc9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0047fb8c(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar3;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x502a48);
  if (*(int *)(param_1 + 4) != 0) goto LAB_0047fc8b;
  if (*(int *)(param_1 + 0x248) == 3) {
    FUN_00437bd4((int)local_14);
    puVar3 = local_14;
    piVar1 = FUN_004d5374(*(int **)(param_1 + 0x244),(uint *)s__cols_00501cdb);
    FUN_0047d0e8(piVar1,extraout_EDX,extraout_ECX,piVar1,(int)puVar3);
    if (local_c != 0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar1 = (int *)(local_c + -0xc);
        if (piVar1 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar1 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1 + 1;
        }
        if (iVar2 != 0) goto LAB_0047fc64;
      }
      FUN_004cc0bc();
      local_c = 0;
    }
LAB_0047fc64:
    FUN_004d50d0(*(int **)(param_1 + 0x244),0x20);
  }
  iVar2 = FUN_00480608(param_1);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0xc4) = param_2;
  }
LAB_0047fc8b:
  *in_FS_OFFSET = local_38;
  return;
}

